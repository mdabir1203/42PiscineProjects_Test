/* Program to exclude characters with write function */


#include <unistd.h>
#include <stdlib.h>

int main(void)
{
    char phrase[20] = "Space loss";
    char *r = phrase;

    write(1, &r[3], sizeof(r)); // Give your desired amount here
    return 0;
}