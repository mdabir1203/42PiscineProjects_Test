#include<stdio.h>

int main(int argc, char *argv[])
{
    struct{
        int a;
        float b;
        int c;
    }   myst;

    myst.a = 2;
    myst.b = 3.23;
    myst.c = 8;

    printf("a = %c,b = %f, c = %d",myst.b);
    return 0;
}