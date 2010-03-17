# What: Style definition for R/S code chunks (scraps)
# Author: Gregor Gorjanc <gregor.gorjanc@bfro.uni-lj.si>
#    modified by Yihui Xie to incorporate with pgfSweave
# $Id: literate-scrap.inc 130 2007-07-29 15:06:03Z ggorjan $
#
# This file is a copy of literate-scrap.inc from LyX, but changed for
# Sweave - NoWeb syntax:
#  - added preamble where Sweave is used instead of noweb
#  - simplified style for scrap
#  - added all align possibilities
#  - 'nogin' option for Sweave, so we can specify the REAL width/height of grapihcs
#  - within scrap, lines are separated by ordinary carriage returns instead of Ctrl-Return

Format 2

Preamble
\usepackage[nogin]{Sweave}
\newcommand{\Rcode}[1]{{\texttt{#1}}}
\newcommand{\Robject}[1]{{\texttt{#1}}}
\newcommand{\Rcommand}[1]{{\texttt{#1}}}
\newcommand{\Rfunction}[1]{{\texttt{#1}}}
\newcommand{\Rfunarg}[1]{{\textit{#1}}}
\newcommand{\Rpackage}[1]{{\textit{#1}}}
\newcommand{\Rmethod}[1]{{\textit{#1}}}
\newcommand{\Rclass}[1]{{\textit{#1}}}
\newenvironment{wrapsweave}{\par}{\par}
\usepackage{tikz}
EndPreamble

OutputType              literate

Style RScrap
  LatexType             Environment
  LatexName             wrapsweave
  Margin                static
  TopSep                0.4
  BottomSep             0.4
  ParSep                0.0
  LabelType             static
  Align                 left
  AlignPossible         block, left, right, center
  NewLine               0
  PassThru              1
  FreeSpacing           1
  TextFont
    Color               latex
    Family              typewriter
  EndFont
End

Style RScrapCenter
  LatexType             Environment
  LatexName             center
  Margin                static
  TopSep                0.4
  BottomSep             0.4
  ParSep                0.0
  LabelType             static
  Align                 center
  NewLine               0
  PassThru              1
  FreeSpacing           1
  TextFont
    Color               latex
    Family              typewriter
  EndFont
End
