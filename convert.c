#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]) 
{
    
    int input = 0;

    
    if( argc != 2)
        return 1;

    
    input = atoi(argv[1]);

    printf("%2.1f\n",32+input*1.8);

    return 0;
}
