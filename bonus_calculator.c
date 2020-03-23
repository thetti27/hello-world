//This is a code to find the bonus of an employee

# include<stdio.h>
int main(void)

{
    float bs,bonus; //declaring the basic salary
    float a =1.05, b = 1.1, c = 1.15;
    int ec; // declare employee category
    printf("Please your employee category(1,2 or 3) and basic salary: \n");
    scanf("%f %f", &ec, &bs);  // read the keyboard input for salary


    //Switch statement using employee category
    switch (ec)
    {
    case 1:
        bonus= float multipy(float bs, float a);
        printf( "Your bonus is %f",&bonus);
        break;
    case 2:
        bonus= float multipy(float bs, float b);
        printf( "Your bonus is %f.",&bonus);
        break;
    case 3:
        bonus= float multipy(float bs, float b);
        printf( "Your bonus is %f.",&bonus);
        break;
    default:
        printf( "Employee category invlaid. Please enter 1,2 or 3.");
        break;
    }
  
return 0;
}