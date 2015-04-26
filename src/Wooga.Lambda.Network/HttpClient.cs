using System;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;

namespace Wooga.Lambda.Network
{

    /// <summary>   Basic HTTP client. </summary>
    public sealed class HttpClient
    {
        /// <summary>   The transport asynchronous. </summary>
        public readonly Func<HttpRequest, Async<HttpResponse>> TransportAsync;

        /// <summary>   Constructor. </summary>
        ///
        /// <param name="transport">    The transport. </param>

        public HttpClient(Func<HttpClient, HttpRequest, HttpResponse> transport)
        {
            TransportAsync = r => () => transport(this, r);
        }

        /// <summary>   Post this message. </summary>
        ///
        /// <param name="endpoint"> The endpoint. </param>
        /// <param name="body">     The body. </param>
        ///
        /// <returns>   A HttpResponse. </returns>

        public HttpResponse Post(string endpoint, ImmutableList<byte> body)
        {
            return PostAsync(endpoint, body).RunSynchronously();
        }

        /// <summary>   Posts the asynchronous. </summary>
        ///
        /// <param name="endpoint"> The endpoint. </param>
        /// <param name="body">     The body. </param>
        ///
        /// <returns>   An Async&lt;HttpResponse&gt; </returns>

        public Async<HttpResponse> PostAsync(string endpoint, ImmutableList<byte> body)
        {
            return TransportAsync(HttpRequest.Basic(endpoint, HttpMethod.Post).WithBody(body));
        }

        /// <summary>   Gets. </summary>
        ///
        /// <param name="endpoint"> The endpoint. </param>
        ///
        /// <returns>   A HttpResponse. </returns>

        public HttpResponse Get(string endpoint)
        {
            return GetAsync(endpoint).RunSynchronously();
        }

        /// <summary>   Gets the asynchronous. </summary>
        ///
        /// <param name="endpoint"> The endpoint. </param>
        ///
        /// <returns>   The asynchronous. </returns>

        public Async<HttpResponse> GetAsync(string endpoint)
        {
            return TransportAsync(HttpRequest.Basic(endpoint, HttpMethod.Get));
        }

        /// <summary>   Heads. </summary>
        ///
        /// <param name="endpoint"> The endpoint. </param>
        ///
        /// <returns>   A HttpResponse. </returns>

        public HttpResponse Head(string endpoint)
        {
            return HeadAsync(endpoint).RunSynchronously();
        }

        /// <summary>   Head asynchronous. </summary>
        ///
        /// <param name="endpoint"> The endpoint. </param>
        ///
        /// <returns>   An Async&lt;HttpResponse&gt; </returns>

        public Async<HttpResponse> HeadAsync(string endpoint)
        {
            return TransportAsync(HttpRequest.Basic(endpoint, HttpMethod.Head));
        }

        /// <summary>   Puts. </summary>
        ///
        /// <param name="endpoint"> The endpoint. </param>
        /// <param name="body">     The body. </param>
        ///
        /// <returns>   A HttpResponse. </returns>

        public HttpResponse Put(string endpoint, ImmutableList<byte> body)
        {
            return PutAsync(endpoint, body).RunSynchronously();
        }

        /// <summary>   Puts the asynchronous. </summary>
        ///
        /// <param name="endpoint"> The endpoint. </param>
        /// <param name="body">     The body. </param>
        ///
        /// <returns>   An Async&lt;HttpResponse&gt; </returns>

        public Async<HttpResponse> PutAsync(string endpoint, ImmutableList<byte> body)
        {
            return TransportAsync(HttpRequest.Basic(endpoint, HttpMethod.Put).WithBody(body));
        }

        /// <summary>   Deletes the given endpoint. </summary>
        ///
        /// <param name="endpoint"> The endpoint. </param>
        ///
        /// <returns>   A HttpResponse. </returns>

        public HttpResponse Delete(string endpoint)
        {
            return DeleteAsync(endpoint).RunSynchronously();
        }

        /// <summary>   Deletes the asynchronous described by endpoint. </summary>
        ///
        /// <param name="endpoint"> The endpoint. </param>
        ///
        /// <returns>   An Async&lt;HttpResponse&gt; </returns>

        public Async<HttpResponse> DeleteAsync(string endpoint)
        {
            return TransportAsync(HttpRequest.Basic(endpoint, HttpMethod.Delete));
        }
    }
}