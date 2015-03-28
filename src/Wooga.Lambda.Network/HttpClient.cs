using System;
using Wooga.Lambda.Control.Concurrent;

namespace Wooga.Lambda.Network
{
    public sealed class HttpClient
    {
        public readonly Func<HttpRequest,Async<HttpResponse>> TransportAsync;

        public HttpClient(Func<HttpClient,HttpRequest,HttpResponse> transport)
        {
            TransportAsync = r => () => transport(this, r);
        }

        public HttpResponse Post(String endpoint, byte[] body)
        {
            return PostAsync(endpoint, body).RunSynchronously();   
        }

        public Async<HttpResponse> PostAsync(string endpoint, byte[] body)
        {
            return TransportAsync(HttpRequest.Basic(endpoint, HttpMethod.Post).WithBody(body));
        }

        public HttpResponse Get(String endpoint)
        {
            return GetAsync(endpoint).RunSynchronously();
        }

        public Async<HttpResponse> GetAsync(string endpoint)
        {
            return TransportAsync(HttpRequest.Basic(endpoint, HttpMethod.Get));
        }

        public HttpResponse Head(string endpoint)
        {
            return HeadAsync(endpoint).RunSynchronously();
        }

        public Async<HttpResponse> HeadAsync(string endpoint)
        {
            return TransportAsync(HttpRequest.Basic(endpoint, HttpMethod.Head));
        }

        public HttpResponse Put(string endpoint, byte[] body)
        {
            return PutAsync(endpoint, body).RunSynchronously();
        }

        public Async<HttpResponse> PutAsync(string endpoint, byte[] body)
        {
            return TransportAsync(HttpRequest.Basic(endpoint, HttpMethod.Put).WithBody(body));
        }

        public HttpResponse Delete(string endpoint)
        {
            return DeleteAsync(endpoint).RunSynchronously();
        }

        public Async<HttpResponse> DeleteAsync(string endpoint)
        {
            return TransportAsync(HttpRequest.Basic(endpoint, HttpMethod.Delete));
        }
    }
}