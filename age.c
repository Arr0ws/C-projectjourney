#include <stdio.h>

int age = 11;

void check()
{
    if (age > 12)
    {
        printf("teenager");
        for (int i = 1; i <+ 5; i++)
        {
            printf("%d", i);
        }
        
    } else
    {
        printf("kids");
        for (int i = 1; i <= 5; i++)
        {
            printf("%d", i);
        }
        
    }
    
      
}

int main() 
{
    check();
    return 0;
}
