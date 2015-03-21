using System;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;

namespace Wooga.Lambda.Network
{
    /// <summary>
    /// HttpClient interface for a monadic HttpClient using IO & Async
    /// </summary>
    public interface IOHttpClient
    {
        IO<HttpResponse> Post(String endpoint, byte[] body);
        Async<HttpResponse> PostAsync(String endpoint, byte[] body);
        IO<HttpResponse> Get(String endpoint);
        Async<HttpResponse> GetAsync(String endpoint);
    }

    public class HttpClient : IOHttpClient
    {
        public IO<HttpResponse> Post(String url, byte[] body)
        {
            return HttpRequest.Basic(url, HttpMethod.Post)
                .WithBody(body)
                .RequestHttpResponse();
        }

        public Async<HttpResponse> PostAsync(string endpoint, byte[] body)
        {
            return () => Post(endpoint, body).Invoke();
        }

        public IO<HttpResponse> Get(String endpoint)
        {
            return HttpRequest.Basic(endpoint, HttpMethod.Get)
                .RequestHttpResponse();
        }

        public Async<HttpResponse> GetAsync(string endpoint)
        {
            return () => Get(endpoint).Invoke();
        }
    }
}