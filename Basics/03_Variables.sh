#!/bin/bash

#Defining Variables
name="Mr X"
age=30
height=5.3
readonly userId="123"

#Printing Values
echo "User Name is $name and $age years old with height $height fit"

#Reassigning Values
name="Mr Y"

echo "New User Name is ${name} and ${age} years old with height ${height} fit"

# Store System Values in Variables
hostname=$(hostname)
echo "Name of the Server is ${hostname}"

path=$(pwd)
echo "Path of this Folder: ${path}"






