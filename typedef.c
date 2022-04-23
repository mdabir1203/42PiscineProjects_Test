#include<stdio.h>

typedef int INT32;
typedef char MYCHR;

typedef struct hola_t
{
    int a;
    int b;
} hola_t;



int main(int argc, char *argv[])
{
    INT32 i;
    MYCHR mystr[20]= "Hello Worldasd";

    hola_t gold;
    hola_t silver;
    hola_t bronze;


    gold.a = 2;
    gold.b = 4;

    //silver.a = 5;
    //silver.b = 10;
    //bronze.b = 10;


    printf("i = %d\n", i);
    printf("mystr = %s\n", mystr);

    printf("gold.a = %d\n",gold.a);
    printf("gold.b = %d\n", gold.b);
    printf("gold.b = %d\n", silver.a);
    printf("gold.b = %d\n", silver.b);

    return 0;

}