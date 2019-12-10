#!/bin/bash
#
#Stript to test while statment
#
if [ $# -eq 0 ]
then
	echo "Error - Number missing for command line argument"
	echo "Syntex: $0 number"
	echo "Use to print multiplicatio table for given number"
exit 1
fi
n=$1
i=1
while [ $i -le 10 ]
do
	echo "$n * $i = `expr $i \* $n` "
	i=`expr $i + 1`
done
