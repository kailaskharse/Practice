#!/bin/bash
#
#Scritp to test if...elif...else
#
if [ $1 -gt 0 ]
then 
	echo "Number $1 is Positive"
elif [ $1 -lt 0 ]
then
	echo "Numberi $1 is Negative"
elif [ $1 -eq 0 ]
then
	echo "$1 is zero"
else
	echo "Opps! $1 is not number, give number"
fi

