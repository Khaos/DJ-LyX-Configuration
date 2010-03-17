library(tools)
library(pgfSweave)

args <- commandArgs()

filename <- args[length(args)]

pgfSweave(filename,compile.tex=FALSE)

basename <- sub("\\.(Rnw|Rtex|nw|Snw)$", "",filename)

texi2dvi(paste(basename, ".tex",sep=""), pdf=TRUE) 