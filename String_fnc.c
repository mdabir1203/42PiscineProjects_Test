#include<stdio.h>

int main()
{

    char array1[10] = "Sose";
    char array2[10] = "Oh # ne";
    char array3[10] = "Scharf";
    int i = 0;
    int j = 0;
    char *papa_array[10];

    *papa_array[0] = array1;
    *papa_array[1] = array2;
    *papa_array[2] = array3;

   // printf("array2[3]: %c\n", array2[3]);
    while (i < 10)
    {
        printf("Papa_array to val: %s\n", &papa_array[i][j]);
        i++;
        j++;
    }
    
}