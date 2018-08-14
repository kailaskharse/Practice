// C program to illustrate \OOO escape sequence
#include <stdio.h>
int main(void)
{
    // we are using \OOO escape sequence, here 
    // each O in "OOO" is one to three octal 
    // digits(0....7).
    char* s = "A\0725";
    printf("%s", s);
    return 0;
}


/*
Output:

A:5
Explanation : Here 000 is one to three octal digits(0….7) means there must be atleast one octal digit after \ and maximum three.Here 072 is the octal notation, first it is converted to decimal notation that is the ASCII value of char ‘:’. At the place of \072 there is : and the output is A:5.

*/
