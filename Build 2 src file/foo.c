#include<stdio.h>

int add_num(int a, int b) ; // Prototyping //

int main(int argc, char *argv[])
{   
    int total;
    total = add_num(2, 4);

    printf("total = %d\n", total);
    return 0;
}


// gcc -o outputfile inputfile 