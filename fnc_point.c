#include<stdio.h>
#include<unistd.h>
int add_num(int a, int b)
{
    int sum;

    sum = a + b;

    return sum;
}

int main(int argc, char *argv[])
{
    int result;
    int (*fnc_ptr)(int,int);

    fnc_ptr = &add_num;
    result = fnc_ptr(4,5);
    write(1, &result,1);
}