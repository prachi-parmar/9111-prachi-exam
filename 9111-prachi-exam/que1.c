// write a program to convert temperature from degree celsius to fahrenhit .//

#include<stdio.h>
int main()
{
    float celsius , fahrenheit ;

    printf("Enter temperature in degree celsius : ");
    scanf("%.2f",&celsius);


    fahrenheit = (celsius * 9/5) + 32 ; 

    printf("%.2f degree celsius is equal to %.2f degree fahrenheit ",celsius,fahrenheit);

    printf("%.2f ",fahrenheit);

    return 0 ;

}

