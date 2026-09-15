// Program (12)-> Write a program to determine whether a given number is positive,negetive,or zero


#include <stdio.h>
int main()
   
{
    
    int num;
    
    printf("Enter your number:");
    scanf("%d",&num);

    if(num>0)
    
     printf("The number is positive");
    
     else if (num<0)
    
     printf("The number is negetive"); 

     else
        printf("The number is zero");
    
    return 0;
}
