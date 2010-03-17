library(tools)

args <- commandArgs()

filename <- args[length(args)]

Sweave(filename)

basename <- sub("\\.(Rnw|Rtex|nw|Snw)$", "",filename)

texi2dvi(paste(basename, ".tex",sep=""), pdf=TRUE) 