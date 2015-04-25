using UnityEngine;
using System.Collections;	
using System.Collections.Immutable;
using Wooga.Lambda.Control.Concurrent;
using Wooga.Lambda.Control.Monad;
using System.Diagnostics;
using System;
using System.Threading;
using System.Linq;

public class TestBehave : MonoBehaviour {

	ImmutableList<double> il = ImmutableList.Create(2.0); 
	// Use this for initialization
	void Start () 
	{
	}
	
	// Update is called once per frame
	void Update () 
	{
		il = il.Add (new System.Random ().NextDouble ());
		UnityEngine.Debug.Log(String.Format("total il: {0} c: {1}",il, il.Count));


		Async<int> threadId = () => Thread.CurrentThread.ManagedThreadId;
		var blocker = Async.Sleep(3).Bind(_ => threadId);
		var sleeps = new[]{blocker,blocker,blocker,blocker,blocker,blocker,blocker,blocker,blocker,blocker,blocker,blocker,blocker};
		
		var stopwatch = new Stopwatch();
		stopwatch.Start();
		
		var threadCount = sleeps
			.Parallel().RunSynchronously()
			.Distinct().Count();
		
		stopwatch.Stop();
		var t = stopwatch.Elapsed.Milliseconds;
		
		UnityEngine.Debug.Log(String.Format("total ms: {0} for threads: {1}",t,threadCount));
	}
}
