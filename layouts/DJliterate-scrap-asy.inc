# What: Style definition for Asymptote code chunks (scraps)
# Author: Gregor Gorjanc <gregor.gorjanc@bfro.uni-lj.si>
#    modified by Dazhi Jiang to incorporate with Asymptote
# $Id: literate-scrap.inc 130 2007-07-29 15:06:03Z ggorjan $
#
# This file is a copy of literate-scrap.inc from LyX, but changed for
# Asymptote:
#  - simplified style for scrap
#  - added all align possibilities
#  - within scrap, lines are separated by ordinary carriage returns instead of Ctrl-Return

Format 11

Preamble

% Uncomment the below line to load 'asymptote' automatically
% \usepackage{asymptote}
% \newenvironment{wrapasy}{\begin{asy}}{\end{asy}}

EndPreamble

# Don't forget to comment the following line
# OutputType              literate

Style AsyScrap
	LatexType				Environment
	LatexName				asy
	Margin					Dynamic
	TopSep					0.4
	BottomSep				0.4
	ParSep					0.0
	# Add the below option to allow to input optional arguments
	OptionalArgs			1
	LabelType				static
	# Add quota to the sting that includes spaces 
	LabelString				"asy >>"
	Labelsep				I
	EndLabeltype			Filled_Box
	EndLabelString			"END"
	LabelFont
	    Color				foreground
	    Size				large
		# Shape				Italic
		Series				Bold
	EndFont
	Align					left
	AlignPossible			block, left, right, center
	NewLine					0
	PassThru				1
	FreeSpacing				1
	TextFont
		Color				latex
		Family				typewriter
	EndFont
End

Style AsyDefScrap
	LatexType				Environment
	LatexName				asydef
	Margin					Dynamic
	TopSep					0.4
	BottomSep				0.4
	ParSep					0.0
	# Add the below option to allow to input optional arguments
	OptionalArgs			1
	LabelType				static
	# Add quota to the sting that includes spaces 
	LabelString				"asydef >>"
	Labelsep				I
	EndLabeltype			Filled_Box
	EndLabelString			"END"
	LabelFont
	    Color				foreground
	    Size				large
		# Shape				Italic
		Series				Bold
	EndFont
	Align					left
	AlignPossible			block, left, right, center
	NewLine					0
	PassThru				1
	FreeSpacing				1
	TextFont
		Color				latex
		Family				typewriter
	EndFont
End

Style AsyScrapCenter
	LatexType				Environment
	LatexName				center
	Margin					static
	TopSep					0.4
	BottomSep				0.4
	ParSep					0.0
	LabelType				static
	Align					center
	NewLine					0
	PassThru				1
	FreeSpacing				1
	TextFont
		Color				latex
		Family				typewriter
	EndFont
End
