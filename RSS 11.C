// Program (11)-> Write a prograam to check whether a given number is even and odd.


#include <stdio.h>
int main()
   
{
    int num;
    printf("Enter your number:");
    scanf("%d",&num);

    if(num %2==0)
    {
      printf("The number is even");
    }
    else
    {
     printf("The number is odd");        
    }
    return 0;
}
