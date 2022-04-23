#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
    printf("No of arguments: %d\n",argc);

    int i;
    i = 0;

    while(++i < argc)
    {
        write(1,argv,sizeof(argc));
        printf("The arguments[%d] are: %s\n",i,argv[i]);
        //++i;
    }
    return 0;
}