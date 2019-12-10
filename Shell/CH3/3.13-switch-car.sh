#!/bin/bash
#
#Understanding Swithch in Shell
#i
if [ -z $1 ]	# -z ==> "String comparison: String1 is NULL and does exist"
then
	rental="*** Unknown Vehicle ***"
elif [ -n $1 ]
then
	#Otherwishe make first arg as rental
	rental=$1
fi


case $rental in
	"car") echo "For $rental Rs.20 Per K/m";;
	"van") echo "for $rental Rs.10 per K/m";;
	"jeep") echo "For $rental Rs.5 per K/m";;
	"bicycle") echo "For $rental 20 paisa per k/m";;
	*) 	echo "Sorry, I can not gate a $rental for you"
		echo -e -n "Available Vehicles are \n\t 1. car \n\t 2. van \n\t 3. jeep\n\t 4. bicycle\n";;
esac
