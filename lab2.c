#include <stdlib.h>
#include <stdio.h>
//Mesajul adaugat de mine
int function(int x)
{
    if (x>0)
    {
        x=x-2;
        x=function(x);
    }
    return x;
}

int main()
{
    int a=30, i=0;


    a=function(a);
    i++;

    printf("%d", i);
    return 0;
}

