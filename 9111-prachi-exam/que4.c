// write a program to read roll no , name  and marks of 3 students and calculate the total , percentage and avg and hive grade .//

#include<stdio.h>
int main()
{
    int rollno , sub1 , sub2 , sub3 ,total ;
    float avg ;
    char name[20] ;

    printf("enter your name : ");
    scanf("%s",&name);

    printf("enter your roll no : ");
    scanf("%d",&rollno);

    printf("enter your sub1: ");
    scanf("%d",&sub1);

    printf("enter your sub2: ");
    scanf("%d",&sub2);

    printf("enter your sub3: ");
    scanf("%d",&sub3);

    total = sub1 + sub2 + sub3 ;
    avg = (float)total / 3 ;


    if(sub1 > 100 || sub2 > 100 || sub3 > 100)
    {
        printf("invalid marks");
    }
    else
    {
       printf("\ntotal = %d\n",total);
       printf("avg = %.2f\n",avg);
    }
         
    if( sub1 >= 35 && sub2 >= 35 && sub3 >= 35 )
    {
        printf("\npass");

        if( avg >= 80)
         {
        printf("Grade A\n");
         }
       else if(avg >= 70)
         {
        printf("Grade B\n");
         }
       else if(avg >= 60)
         {
        printf("Grade C\n");
         }
        else if (avg >= 50)
        {
         printf("Grade D\n");
         }
       else if (avg >= 40)
        {
        printf("Grade E\n");
        }
     else
        {
        printf("You are fail\n");
        }
    }
}   
    