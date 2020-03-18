#include <stdio.h> 
#include <stdlib.h>


int main() 
{ 
	char name[18]= "Tharaka Hettihamu"
	printf("My name is %s \n", name); 
	 

    name [2]= 'z'; 
    printf("My name is %s \n", name);

    char food [] = 'tuna'; 
    printf("The best food is %s \n", food);
   
    strcpy(food, "bacon");
    printf("The best food is %s \n", food);

    return 0;

} 

