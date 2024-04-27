#include <stdio.h>

int main()
{
    int c = 1;
    
    while(c <= 6)
    {
        if (c <= 3)
        {
            printf("*");
            //c = c + 1; 
        }
        else{
            printf("\n*");
            //c = c + 1; 
        }
        c++;
    }

    return 0;
}
