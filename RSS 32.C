/*
Program(31)-> Write a program to find the factorial of a given number using a user defined function.
Solution (1): Arguments, Return a  Value
*/
 #include <stdio.h>

float Triangle(float base,float height)
{
    return 0.5 * base * height;
}
int main()
{
    float base, height, area;

    printf("Enter base of triangle:");
    scanf("%f",&base);
    printf("Enter height of triangle:");
    scanf("%f",&height);

    area = Triangle(base,height);
    printf("Area of Triangle = %f",area);
    return 0;
    
}