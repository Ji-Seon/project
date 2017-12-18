#!/usr/bin/gnuplot -persist
#
#
set xrange [-4:4]
set yrange [-8:0]
set zrange [0:10]
set xyplane at 0
set grid z

set title "GNUplot for rk solver in charged particle problem"
set xlabel "x"
set ylabel "y"
set zlabel "z"

splot "rk4.txt", "rkf45.txt", "rkck.txt"

