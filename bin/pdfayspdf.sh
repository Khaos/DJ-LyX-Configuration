#!/bin/bash

cp $1/*.{asy,pdf} ./
pdflatex $2.tex > "$2-pdf1.log"
myasy $2-*.asy
pdflatex $2.tex > "$2-pdf2.log"