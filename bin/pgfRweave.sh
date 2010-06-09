#!/bin/bash
cp $1/*.{r,txt,pdf} ./
R --no-save --args $2 < "$HOME/iApps/iCommand/MakepgfSweave.R" > "$2.log"