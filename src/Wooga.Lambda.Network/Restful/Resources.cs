using System;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Network.Restful
{
    /// <summary>
    /// 
    /// </summary>
    /// <typeparam name="T"></typeparam>
    public sealed class Resources<T> where T : Resource
    {
        private readonly HttpClient http;
        private readonly Protocol<T> protocol;
        private readonly Uri url;

        public Resources(HttpClient http, string url, string name, Protocol<T> protocol)
        {
            this.http = http;
            this.protocol = protocol;
            this.url = new Uri(new Uri(url),name);
        }

        /// <summary>
        /// List the URIs and perhaps other details of the collection's members.
        /// </summary>
        /// <returns></returns>
        public Async<ImmutableList<T>> List()
        {
            return http.GetAsync(url.AbsoluteUri)
                       .Map(r => r.Body.ValueOr(ImmutableList.Empty<byte>()))
                       .Map(protocol.DeserializeResources);
        }

        /// <summary>
        /// Replace the entire collection with another collection.
        /// </summary>
        /// <param name="xs"></param>
        /// <returns></returns>
        public Async<ImmutableList<T>> Replace(ImmutableList<T> xs)
        {
            return http.PutAsync(url.AbsoluteUri,protocol.SerializeResources(xs))
                       .Map(r => r.Body.ValueOr(ImmutableList.Empty<byte>()))
                       .Map(protocol.DeserializeResources);
        }

        /// <summary>
        /// Delete the entire collection.
        /// </summary>
        /// <returns></returns>
        public Async<Unit> Delete()
        {
            return http.DeleteAsync(url.AbsoluteUri).Ignore();
        }

        /// <summary>
        /// Create a new entry in the collection. The new entry's URI is assigned automatically and is usually returned by the operation.
        /// </summary>
        /// <returns></returns>
        public Async<T> Create()
        {
            return http.PostAsync(url.AbsoluteUri, ImmutableList.Empty<byte>())
                       .Map(r => r.Body.ValueOr(ImmutableList.Empty<byte>()))
                       .Map(protocol.DeserializeResource); ;
        }

        /// <summary>
        /// Retrieve a representation of the addressed member of the collection, expressed in an appropriate Internet media type.
        /// </summary>
        /// <returns></returns>
        public Async<T> Retrieve(string id)
        {
            return http.GetAsync(new Uri(url,id).AbsoluteUri)
                       .Map(r => r.Body.ValueOr(ImmutableList.Empty<byte>()))
                       .Map(protocol.DeserializeResource);
        }

        /// <summary>
        /// Replace the addressed member of the collection, or if it does not exist, create it.
        /// </summary>
        /// <param name="x"></param>
        /// <returns></returns>
        public Async<T> Replace(T x)
        {
            return http.PutAsync(new Uri(url, x.Id).AbsoluteUri, protocol.SerializeResource(x))
                       .Map(r => r.Body.ValueOr(ImmutableList.Empty<byte>()))
                       .Map(protocol.DeserializeResource);
        }

        /// <summary>
        /// Delete the addressed member of the collection.
        /// </summary>
        /// <param name="x"></param>
        /// <returns></returns>
        public Async<Unit> Delete(string id)
        {
            return http.DeleteAsync(new Uri(url, id).AbsoluteUri).Ignore();
        }
    }
}
