using System;
using System.Net;
using System.Net.Sockets;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;
using Wooga.Lambda.Network;
using Wooga.Lambda.Network.Transport;

namespace Wooga.Lambda.Stats.Backends
{
    public static class Statsd
    {
        private static IPAddress GetIpv4Address(string name)
        {
            IPAddress ipAddress;
            bool isValidIPAddress = IPAddress.TryParse(name, out ipAddress);

            if (!isValidIPAddress)
            {
                IPAddress[] addressList = Dns.GetHostEntry(name).AddressList;

                int positionForIpv4 = addressList.Length - 1;

                ipAddress = addressList[positionForIpv4];
            }
            return ipAddress;
        }

        public class UDP : Backend
        {
            public static UDP Create(string name, int port)
            {
                return new UDP(name,port);
            }

            private readonly Socket socket;
            private readonly IPEndPoint ipEndPoint;

            private UDP(string host, int port, int timeout = 1000)
            {
                socket = new Socket(AddressFamily.InterNetwork, SocketType.Dgram, ProtocolType.Udp)
                {
                    SendTimeout = timeout,
                    Blocking = true
                };
                var ipAddress = GetIpv4Address(host);
                ipEndPoint = new IPEndPoint(ipAddress, port);
            }

            public Async<Unit> Send(ImmutableList<byte> data)
            { 
                return () =>
                {
                    var msg = data.ToArray();
                    var sent = socket.SendTo(msg, msg.Length, SocketFlags.None, ipEndPoint);
                    
                    return Unit.Default;
                };
            }
        }
    }
}
