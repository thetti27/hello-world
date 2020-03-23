//This is a code to find the bonus of an employee

# include<stdio.h>
int main(void)

{


    double bs,bonus; //declaring the basic salary and bonus
    float a = 1.05, b = 1.1, c = 1.15; // Declaring bonus multipliers
    int ec; // declaring employee category
    printf("Please your employee category(1,2 or 3) and basic salary: \n");
    scanf("%f %lf", &ec, &bs);  // read the keyboard input for salary


        // If-else statement to calculate and print bonus
        if(ec == 1)
        bonus= bs*a;
        printf( "Your bonus is %lf",&bonus);
            else if(ec == 2)
            bonus= bs*b;
            printf( "Your bonus is %lf.",&bonus);
                else if (ec == 3)
                bonus= bs*c;
                printf( "Your bonus is %lf.",&bonus);
                    else
                    printf( "Employee category invlaid. Please enter 1,2 or 3.");
                    

return 0;
}
