// C program to illustrate \XHH escape 
// sequence
#include <stdio.h>
int main(void)
{
    // We are using \xhh escape sequence.
    // Here hh is one or more hexadecimal
    // digits(0....9, a...f, A...F).
    char* s = "B\x4a";
    printf("%s", s);
    return 0;
}

/*
Output:
BJ


Explanation : Here hh is one or more hexadecimal digits(0….9, a…f, A…F).There can be more than one hexadecimal number after \xHere’\x4a’ is a hexadecimal number and it is a single char. Firstly it will get converted in to decimal notation and it is the ASCII value of char ‘J’. Therefore at the place of \x4a, we can write J. So the output is BJ.

*/
