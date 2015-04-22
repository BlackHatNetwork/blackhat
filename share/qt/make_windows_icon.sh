#!/bin/bash
# create multiresolution windows icon
ICON_SRC=../../src/qt/res/icons/blackhat.png
ICON_DST=../../src/qt/res/icons/blackhat.ico
convert ${ICON_SRC} -resize 16x16 blackhat-16.png
convert ${ICON_SRC} -resize 32x32 blackhat-32.png
convert ${ICON_SRC} -resize 48x48 blackhat-48.png
convert blackhat-16.png blackhat-32.png blackhat-48.png ${ICON_DST}

