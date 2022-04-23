#include<unistd.h>

int add_numb(int a, int b);

    int main(int argc, char *argv[])
{
    int *output;

    output = add_numb(5,61);

    write(1, &output,sizeof(output)); // THIS PRINT ASCII VALUE
    return 0;
}

int add_numb(int a, int b)
{
    int sum;

    sum = a + b;
    return sum;
}
