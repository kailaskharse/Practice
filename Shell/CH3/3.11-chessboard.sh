#!/bin/bash
#
#Chess board using shell Script
#
for (( i=1; i<=9; i++ ))
do
	for (( j=1; j<=9; j++ ))
	do
		tot=`expr $i + $j`
		tmp=`expr $tot % 2`
#		echo "$i "
		if [ $tmp -eq 0 ]; then
			echo -e -n "\033[45m "
		else 
			echo -e -n "\033[47m "
		fi
	done
	echo -e -n "\033[40m "  #### set back background color to black
	echo ""  ###Print the new lines ###
done
