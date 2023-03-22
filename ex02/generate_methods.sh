#!/bin/bash

# check if filename argument is given
if [ -z "$1" ]
then
    echo "Please provide a filename as argument"
    exit 1
fi

# check if file exists
if [ ! -f "$1" ]
then
    echo "File does not exist"
    exit 1
fi

# extract class name from header file
classname=$(grep -E "class [A-Za-z0-9_]+ {" "$1" | awk '{print $2}' | tr -d '{')

# generate cpp filename
cppfilename="$classname.cpp"

# check if cpp file already exists
if [ -f "$cppfilename" ]
then
    echo "$cppfilename already exists"
    exit 1
fi

# generate cpp file with class definition
cat > "$cppfilename" << EOF
#include "$1"

$classname::$classname() {
    // constructor implementation
}

$classname::~$classname() {
    // destructor implementation
}

// function implementations
EOF

echo "Generated $cppfilename"
