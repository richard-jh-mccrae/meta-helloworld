#include <stdlib.h>
#include <stdio.h>

int main(void)
{
#ifdef MACHINE_NAME
    printf("Hello world, from %s\n", MACHINE_NAME);
#else
    printf("Hello world, i don't know what I am!!\n");
#endif

    return 0;
}
