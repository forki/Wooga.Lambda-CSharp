#!/bin/bash
if test "$OS" = "Windows_NT"
then
  # use .Net

  .paket/paket.unity3d.bootstrapper.exe
  exit_code=$?
  if [ $exit_code -ne 0 ]; then
  	exit $exit_code
  fi

  .paket/paket.unity3d.exe $@
else
  # use mono
  mono .paket/paket.unity3d.bootstrapper.exe
  exit_code=$?
  if [ $exit_code -ne 0 ]; then
  	exit $exit_code
  fi

  mono .paket/paket.unity3d.exe $@
fi
