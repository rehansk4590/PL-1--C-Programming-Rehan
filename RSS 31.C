/*
Program(31)-> Write a program to find the factorial of a given number using a user defined function.
Solution (1): NO Arguments, Return Value
*/
 #include <stdio.h>
float triangle()
{
    float base, height;

    printf("Enter base of triangle:");
    scanf("%f",&base);
    printf("Enter height of triangle:");
    scanf("%f",&height);

    return 0.5 * base * height;
}
int main()
{
    float area;
    area =triangle();
    printf("Area of triangle = %f",area);
    return 0;
}