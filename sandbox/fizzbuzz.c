#include "fizzbuzz.h"

#include <stdio.h>
#include <string.h>

static char buf[30];

char* fizzBuzz(int val)
{
    // initialize static variable, it may contain something!
    memset(buf,0,sizeof(buf));

    if (val % 3 == 0)
        strcpy(buf, "Fizz");
    if (val % 5 == 0) 
        strcat(buf, "Buzz");
    if (val % 3 != 0 && val % 5 != 0)
        sprintf(buf, "%d", val);

    return buf;
     
}
