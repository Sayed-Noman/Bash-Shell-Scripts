#!/bin/bash

#Arithmatic Operations
x=10
y=20

let sum=$x+$y
let sub=$x-$y
let mul=$x*$y
let div=$y/$x
let mod=$x%$y

echo "Sum of $x + $y = $sum"
echo "Sub of $x - $y = $sub"
echo "Mul of $x * $y = $mul"
echo "div of $y / $x = $div"
echo "Mod of $x % $y = $mod"


echo "$((3+2))"

#Awk Command
awk 'BEGIN { x=2; y=4; print "x + y = "(x+y) }'

#bc Command
echo "2+3" | bc

#dc Command
echo "2 3 + p" | dc 
