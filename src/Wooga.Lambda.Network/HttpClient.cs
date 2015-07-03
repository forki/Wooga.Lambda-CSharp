using System;
using Wooga.Lambda.Control.Concurrent;
using Headers = Wooga.Lambda.Data.ImmutableList<Wooga.Lambda.Network.HttpHeader>;
using Body = Wooga.Lambda.Data.ImmutableList<byte>;

namespace Wooga.Lambda.Network
{
    /// <summary>   Basic HTTP client. </summary>
    public sealed class HttpClient
    {
        /// <summary>   The transport asynchronous. </summary>
        public readonly Func<HttpRequest, Async<HttpResponse>> TransportAsync;

        /// <summary>   Constructor. </summary>
        /// <param name="transport">    The transport. </param>
        public HttpClient(Func<HttpClient, HttpRequest, HttpResponse> transport)
        {
            TransportAsync = r => () => transport(this, r);
        }

        /// <summary>   Post this message. </summary>
        /// <param name="endpoint"> The endpoint. </param>
        /// <param name="body">     The body. </param>
        /// <returns>   A HttpResponse. </returns>
        public HttpResponse Post(string endpoint, Body body)
        {
            return Post(endpoint, body, HttpHeaders.Empty);
        }

        public HttpResponse Post(string endpoint, Body body, Headers headers)
        {
            return PostAsync(endpoint, body, headers).RunSynchronously();
        }

        /// <summary>   Posts the asynchronous. </summary>
        /// <param name="endpoint"> The endpoint. </param>
        /// <param name="body">     The body. </param>
        /// <returns>   An Async&lt;HttpResponse&gt; </returns>
        public Async<HttpResponse> PostAsync(string endpoint, Body body)
        {
            return PostAsync(endpoint, body, HttpHeaders.Empty);
        }

        public Async<HttpResponse> PostAsync(string endpoint, Body body, Headers headers)
        {
            return TransportAsync(HttpRequest.Basic(endpoint, HttpMethod.Post)
                                             .WithBody(body)
                                             .WithHeaders(headers));
        }

        /// <summary>   Gets. </summary>
        /// <param name="endpoint"> The endpoint. </param>
        /// <returns>   A HttpResponse. </returns>
        public HttpResponse Get(string endpoint)
        {
            return Get(endpoint, HttpHeaders.Empty);
        }

        public HttpResponse Get(string endpoint, Headers headers)
        {
            return GetAsync(endpoint, headers).RunSynchronously();
        }

        /// <summary>   Gets the asynchronous. </summary>
        /// <param name="endpoint"> The endpoint. </param>
        /// <returns>   The asynchronous. </returns>
        public Async<HttpResponse> GetAsync(string endpoint)
        {
            return GetAsync(endpoint, HttpHeaders.Empty);
        }

        public Async<HttpResponse> GetAsync(string endpoint, Headers headers)
        {
            return TransportAsync(HttpRequest.Basic(endpoint, HttpMethod.Get)
                                             .WithHeaders(headers));
        }

        /// <summary>   Heads. </summary>
        /// <param name="endpoint"> The endpoint. </param>
        /// <returns>   A HttpResponse. </returns>
        public HttpResponse Head(string endpoint)
        {
            return Head(endpoint, HttpHeaders.Empty);
        }

        public HttpResponse Head(string endpoint, Headers headers)
        {
            return HeadAsync(endpoint, headers).RunSynchronously();
        }

        /// <summary>   Head asynchronous. </summary>
        /// <param name="endpoint"> The endpoint. </param>
        /// <returns>   An Async&lt;HttpResponse&gt; </returns>
        public Async<HttpResponse> HeadAsync(string endpoint)
        {
            return HeadAsync(endpoint, HttpHeaders.Empty);
        }

        public Async<HttpResponse> HeadAsync(string endpoint, Headers headers)
        {
            return TransportAsync(HttpRequest.Basic(endpoint, HttpMethod.Head)
                                             .WithHeaders(headers));
        }

        /// <summary>   Puts. </summary>
        /// <param name="endpoint"> The endpoint. </param>
        /// <param name="body">     The body. </param>
        /// <returns>   A HttpResponse. </returns>
        public HttpResponse Put(string endpoint, Body body)
        {
            return Put(endpoint, body, HttpHeaders.Empty);
        }

        public HttpResponse Put(string endpoint, Body body, Headers headers)
        {
            return PutAsync(endpoint, body, headers).RunSynchronously();
        }

        /// <summary>   Puts the asynchronous. </summary>
        /// <param name="endpoint"> The endpoint. </param>
        /// <param name="body">     The body. </param>
        /// <returns>   An Async&lt;HttpResponse&gt; </returns>
        public Async<HttpResponse> PutAsync(string endpoint, Body body)
        {
            return PutAsync(endpoint, body, HttpHeaders.Empty);
        }

        public Async<HttpResponse> PutAsync(string endpoint, Body body, Headers headers)
        {
            return TransportAsync(HttpRequest.Basic(endpoint, HttpMethod.Put)
                                             .WithBody(body)
                                             .WithHeaders(headers));
        }

        /// <summary>   Deletes the given endpoint. </summary>
        /// <param name="endpoint"> The endpoint. </param>
        /// <returns>   A HttpResponse. </returns>
        public HttpResponse Delete(string endpoint)
        {
            return Delete(endpoint, HttpHeaders.Empty);
        }

        public HttpResponse Delete(string endpoint, Headers headers)
        {
            return DeleteAsync(endpoint, headers).RunSynchronously();
        }

        /// <summary>   Deletes the asynchronous described by endpoint. </summary>
        /// <param name="endpoint"> The endpoint. </param>
        /// <returns>   An Async&lt;HttpResponse&gt; </returns>
        public Async<HttpResponse> DeleteAsync(string endpoint)
        {
            return DeleteAsync(endpoint, HttpHeaders.Empty);
        }

        public Async<HttpResponse> DeleteAsync(string endpoint, Headers headers)
        {
            return TransportAsync(HttpRequest.Basic(endpoint, HttpMethod.Delete).WithHeaders(headers));
        }
    }
}