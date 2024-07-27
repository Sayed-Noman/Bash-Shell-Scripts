#!/bin/bash

#Declare Array
declare -A myArray
myArray=( [name]="Mr X" [city]="X City" [age]=30 )

echo "User Name is ${myArray[name]}, Lives in City of ${myArray[city]}, Age is ${myArray[age]} years old"
