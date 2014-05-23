#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/octocoin.png
ICON_DST=../../src/qt/res/icons/octocoin.ico
convert ${ICON_SRC} -resize 16x16 octocoin-16.png
convert ${ICON_SRC} -resize 32x32 octocoin-32.png
convert ${ICON_SRC} -resize 48x48 octocoin-48.png
convert octocoin-16.png octocoin-32.png octocoin-48.png ${ICON_DST}

