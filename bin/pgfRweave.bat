cp %1/*.{r,txt,pdf} ./
"E:\Program Files\R\R-2.10.1\bin\Rterm" --no-save --args "%2" < "E:/DJTeX/LyX/bin/MakepgfSweave.R" > "%2.log"