#!/bin/bash


#Defing Arrays
myArray=(1 3.3 "String Value") 

#Pring Array Elements
echo "Array [0] Value: ${myArray[0]}"
echo "Array [1] Value: ${myArray[1]}"
echo "Array [3] Value: ${myArray[2]}"
echo "All Values of myArray: ${myArray[*]}"

echo "Array Last Index Value: ${myArray[-1]}"
echo "All Values if Array: ${myArray[@]}"
echo "Totla Array Elements Count: ${#myArray[@]}"

#Array Slicing Operations
echo "Values from Index 1-2 : ${myArray[*]:1:2}"
echo "Values from a Index to Last Index : ${myArray[*]:1}"


letters=( A B C D E F G H I J K L M N O P Q R S T U V)
firstFive=${letters[*]:0:5}
echo "First 5 Letters: ${firstFive}"

#Add/Delete/Update Array Elemennts
letters+=( W X Y Z %)
echo "After Adding Missing Letters: ${letters[*]}"

letters[26]="Not A Letter"
echo "Renamingc % To Not A Letter: ${letters[*]}"
unset letters[-1]
echo "After Deleting Non Letter Elements Letters: ${letters[@]}"







