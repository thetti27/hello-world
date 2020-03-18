/* This program is used to ding the sum of two numbers*/

#include <stdio.h> 
#include <conio.h> /* console input output header */

void main()

{
    int a,b,s; 
    /* clrscr(); 
     (Not sure why this doesn,'t work in the conio)*/ 
    printf("Enter two no:"); 
    scanf("%d%d",&a,&b);
    s=a+b;
    printf("sum=%d",s);
    getch();
}