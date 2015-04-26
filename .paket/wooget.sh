#!/bin/sh

if [ "$#" == 1 ] && [ $1 == "list" ]; then
    nuget list -configfile .paket/wooga.nuget.config
elif [ "$#" == 2 ] && [ $1 == "install" ]; then
    .paket/paket.unity3d.sh add nuget $2 \
    && .paket/paket.sh install \
    && .paket/paket.unity3d.sh install
elif [ "$#" == 1 ] && [ $1 == "outdated" ]; then
    .paket/paket.sh outdated
elif [ "$#" == 1 ] && [ $1 == "update" ]; then
    .paket/paket.sh update
    .paket/paket.unity3d.sh install
else
    echo "Commands:"
    echo "  list                   - lists packages available in the Wooga nuget repository"
    echo "  install <package_name> - installs package"
    echo "  outdated               - lists packages with newer version available"
    echo "  update                 - updated all packages"
fi
