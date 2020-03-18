/*A Program to find the area and 2pi.r of a circle*/

#include <stdio.h> 
#include <conio.h> /* console input output header */

int main(void)

{
    int r; 
    float pi = 3.14,area,ci;
    printf("Enter the radius of the circle: ");
    scanf("%d",&r);
    area = pi*r^2;
    ci= 2*pi*r;
    printf("Area of the circle = %,2f",area);
    printf("Circumference = %.2f",ci);
    getch();/*, it reads also a single character from
    keyboard. But it does not use any buffer,
    so the entered character is immediately returned
    without waiting for the enter key.*/
}