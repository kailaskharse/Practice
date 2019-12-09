#!/bin/bash
#
#Scrpit to test for loop
#
if [ $# -eq 0 ]
then
echo "Error - Number missin from command line argument"
echo "Syntes: $0 Number"
echo "Use to pring multiplication table for given number "
exit 1
fi
n=$1
for i in 1 2 3 4 5 6 7 8 9 10
do 
echo "$n * $i = `expr $i \* $n` "
done
