/*11. WAP to take time as an input in below given format and convert the time format and 
display the result as given below.
User Input date format - “HH:MM"
Output format - "HH hour and MM Minute"
Example - 
"11:25" converted to "11 Hour and 25 Minute" */
#include<stdio.h>
int main()
{
    int hours,minute;
    printf("Enter Hours and minute this format hours:minute  : ");
    scanf("%d:%d",&hours,&minute);
    printf("\"%d : %d converted to %d Hour and %d Minute\"",hours,minute,hours,minute);
}