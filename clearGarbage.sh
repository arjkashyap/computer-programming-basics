#!/bin/bash
find |  grep cpp -v | grep txt -v | grep md -v | grep c -v | grep git -v > objFiles.txt
while read line
do
    rm "$line"
done < objFiles.txt
