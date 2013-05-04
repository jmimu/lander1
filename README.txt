Lander1 v1.1

Copyright (C) 2013  jmimu (jmimu@free.fr)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.




////////////////////////////////////////////////////////////////////////

First try to make an SMS game.

I found useful information to start asm SMS developpement on these pages:
 - Maxim's step-by-step introduction: http://www.smspower.org/maxim/HowToProgram/
 - Dave's Tile Studio definition file for SMS: http://racethebeam.blogspot.fr/2011/01/tile-studio-definition-file-for-sms.html
 - Z80 instructions set: http://z80-heaven.wikidot.com/instructions-set
 - Heliophobe's simple sprite demo: http://www.smspower.org/Homebrew/SimpleSpriteDemo-SMS
 - 16x16 sprites in Blockhead homebrew: http://www.smspower.org/Homebrew/Blockhead-SMS
 - mk3man.pdf
 - Maxim's bmp2tile for title screen

The font tiles come from Maxim example.

In-game music comes from J. Brahms...

////////////////////////////////////////////////////////////////////////

List of files:
 - test1.tsp: my Tile Studio project, containing tiles dans tilemaps
 - ts2sms.tsd: Dave's Tile Studio definition file, to convert a tsp file into asm definitions
 - music/tones.ods : list of SMS values for tones
 - music/music2sms.py : script to transform a simple form of music into sms asm
 - License.txt : GPL license
 - README.txt : this file
 - makefile, linkfile : to compile using make utility
 - main.asm : main source
 - data.inc : graphics and levels in-game
 - init.inc : initialization data
 - sound.inc : sound functions and music
 - sprites.inc : sprites functions
 - text.inc : text functions
 - title.inc : title data


