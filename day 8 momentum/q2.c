// elctriy city bill //
#include <stdio.h>
int main()
{
    float unit,b;
    printf("Enetr the units");
    scanf("%f",&unit);


    if (unit<=50)
    {

        b=unit*0.50;
        b=b+b*20/100;
        printf("Electricity bill is RS=%.2f",b);
    }
    else if (unit<=150)
    {
        b=unit*0.75;
        b=b+b*20/100;
        printf("Electricity bill is RS=%.2f",b);
    }
    else if(unit<=250)
    {
        b=unit*1.20;
        b=b+b*20/100;
        printf("Electricity bill is RS=%.2f",b);
    }
    else if (unit>250){

        b=unit*1.50;
        b=b+b*20/100;
        printf("Electricity bill is RS=%.2f",b);
    }

    
}