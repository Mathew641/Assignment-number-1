
                            // Assignment - 1 (Input and Output in C language)


// Ques1. Write a program to print Hello Students on the screen ?
/*
#include<stdio.h>
int main()
{
    printf("Hello Students");
    printf("\n");
    return 0;
}
*/


// Ques2. Write a program to print Hello in the first line and Students in the second line ?
/*
#include<stdio.h>
int main()
{
    printf("Hello");
    printf("\nStudents");
    printf("\n");
    return 0;
}
*/


// Ques3.  Write a program to print “MySirG” on the screen. (Remember to print in double quotes) ?
/*
#include<stdio.h>
int main()
{
    printf("\"MySirG\"");
    printf("\n");
    return 0;
}
*/


/* Ques4. WAP to find the area of the circle. Take radius of circle from user as input and print the
          result in below given format.
          Expected output format – “Area of circle is A having the radius R”. Replace A with area
          & R with radius ?
*/
/*
#include<stdio.h>
int main()
{
    int R;
    float A;
    printf("Enter the Radius:");
    scanf("%d",&R);
    A = 3.14*R*R;
    printf("Area of circle is %f having the radius %d",A,R);
    printf("\n");
    return 0;
}
*/


// Ques5.  WAP to calculate the length of String using printf function ?
/*
#include<stdio.h>
int main()
{
    char str[20]="AnkitaHundet";
    int i;

    for(i=0; str[i]; i++);

    printf("Length of string is %d",i);
    printf("\n");
    return 0;
}
*/


// Ques6. WAP to print the name of the user in double quotes ?
/*
#include<stdio.h>
int main()
{
    printf("\"Hello, Ankita Hundet ma'am\"");
    printf("\n");
    return 0;
}
*/


// Ques7. WAP to print “%d” on the screen ?
/*
#include<stdio.h>
int main()
{
    printf("\"%%d\"");

    printf("\n");
    return 0;
}
*/


// Ques8. WAP to print “\n” on the screen ?
/*
#include<stdio.h>
int main()
{
    printf("\"\\n\"");

    printf("\n");
    return 0;
}
*/


// Ques9. WAP to print “\\” on the screen ?
/*
#include<stdio.h>
int main()
{
    printf("\"\\\\\"");

    printf("\n");
    return 0;
}
*/


/*Ques10. WAP to take date as an input in below given format and convert the date format and
          display the result as given below.
          User Input date format – “DD/MM/YYYY” (27/11/2022)
          Output format –
          “Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
*/
/*
#include<stdio.h>
int main()
{
    int DD, MM, YYYY;
    printf("Enter the Date:");
    scanf("%d/%d/%d",&DD,&MM,&YYYY);
    printf("Day-%d, Month-%d, Year-%d", DD,MM,YYYY);
    printf("\n");
    return 0;
}
*/


/* Ques11. WAP to take time as an input in below given format and convert the time format and
            display the result as given below.
            User Input date format – “HH:MM”
            Output format – “HH hour and MM Minute”
            Example –
            “11:25” converted to “11 Hour and 25 Minute”
*/
/*
#include<stdio.h>
int main()
{
    int HH, MM;
    printf("Enter the time");
    scanf("%d:%d",&HH,&MM);
    printf("%d Hour and %d Minute",HH,MM);
    printf("\n");
    return 0;
}
*/


/* Ques12.  Find output of below code:
            int main()
            {
            int x = printf(“ineuron”);
            printf(“%d”,x);
            return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    intx=printf("ineuron");
    printf("%d",x);
    return 0;
}
   // Output : on running this program we get an error as we haven't declared x variable first.
*/
















