#!/bin/bash
R --no-save --args $1 < "$HOME/iApps/iCommand/MakeSweave.R" > "$1.log"