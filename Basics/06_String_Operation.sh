#!/bin/bash

#Declare String Varaibles
name="Mr X"

#String Operations
echo "Length of the Name = ${#name} char"
echo "Name in Upper Case: ${name^^}"
echo "Name in Lower Case: ${name,,}"
echo "Old Name: ${name} replaced and renamed to ${name/X/Y}"

#String Slicing Operation
lastName=${name:3}

echo "Last Name: ${lastName}"

sentence="The Quick Brown Fox Jumps Over a Lazy Dog"
subSentence=${sentence:4}
echo "Sentence 4th Index to Last: ${subSentence}"
subSentence1=${sentence::3}
echo "Sentence 0 Index to 3: ${subSentence1}"
