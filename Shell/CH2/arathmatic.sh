#!/bin/bash
num1=10
num2=20
expr 1 + 3	#output 4
expr 2 - 1 	#output 1
expr 10 / 2 	#output 5
expr 20 % 3	#output 2
expr 10 * 3	#output "Syntex Error" Use \* and not * since its Wild card entry
expr 10 \* 3 	#output 30
echo `expr 6 + 3`	#output 9
echo "Exiting"

exit 0 
