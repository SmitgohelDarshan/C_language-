#include <stdio.h>
void main(){
    int days,year,week;
    printf("Enter number of days: ");
    scanf("%d",&days);
    year = days/365;
    week = (days-365)/7;
    days = (days - week*7) - 365; 
    printf("%d year\n%d week\n%d days",year,week,days);




}