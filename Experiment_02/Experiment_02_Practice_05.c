// A program to convert days into years months weeks and days

#include <stdio.h>

void main ( )
{
    int d,y,m,w,day;

    printf ("Enter the number of total days:\n");
    scanf ("%d",&d);

    y = d/365;
    m = (d%365)/30;
    w = ((d%365)%30)/7;
    day = d-((y*365)+(m*30)+(w*7));

    printf ("This means- \n%d Years \n%d Months \n%d Weeks \n%d Days",y,m,w,day);

}
