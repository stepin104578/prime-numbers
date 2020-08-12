#include "primenum.h"
#include <stdbool.h>

bool primenum(int num)
{
    /* return -1 if a negative number*/
    int i,count=0;
    if (num<0)
        return -1;

    for(i=1;i<=num;i++)
    {
        if((num%i)==0)
        {
            count++;
        }
    }
    /*return 1 for a prime number*/
    if(count==2)
        return true;
    /*return 0 for a non prime number*/
    else
        return false;
}
