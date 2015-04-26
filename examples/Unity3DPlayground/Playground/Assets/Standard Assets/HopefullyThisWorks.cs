using UnityEngine;
using System.Collections;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Data;
using System;
using System.Text;
using Wooga.Lambda.Control.Monad;
using Wooga.Lambda.Network;
using Wooga.Lambda.Network.Transport;
using Wooga.Lambda.Logging;

public class HopefullyThisWorks : MonoBehaviour {


	private readonly Async<Unit> x = Async.Return(()=> 
	{
		Async<HttpResponse> req = WebRequestTransport.CreateHttpClient().GetAsync("http://google.de");
		var w = System.Diagnostics.Stopwatch.StartNew();
		w.Start();
		var b = Async.Parallel(ImmutableList.Create(new Async<Unit>[]{Async.Sleep(2000)})).RunSynchronously();
		w.Stop();
		LoggingAgent.SharedAgent.Debug(w.Elapsed.TotalSeconds + " seconds " + b);
		return Unit.Default;
	});
	
	// Use this for initialization
	public void Start () 
	{
		LoggingAgent.SharedAgent.AddHandler(msg =>
		{
			Debug.Log(msg.GetType().ToString()+": "+msg.Message);
			return Unit.Default;
		});
	}
	
	public void Update()
	{
		x.Start();	
	}
 
}
