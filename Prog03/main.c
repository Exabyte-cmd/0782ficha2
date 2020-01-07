#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int choice;
    float euro;
    float USD;
    float CAD;

    printf("1- Euro - USD Dollar\n2- USD Dollar - Euro\n3- Euro - CAD\n4- CAD - Euro\n\nSelect your choice:\n->");
        scanf("%d", &choice);

if(choice>=1 && choice <=4){
switch(choice){
case 1:
    printf("Insert the number of Euros.\n->");
        scanf("%f", &euro);
        USD = euro * 1.12;
    printf("%0.2f Euros is %0.2f USD Dollars.\n", euro, USD);
break;
case 2:
    printf("Insert the number of USD.\n->");
        scanf("%f", &USD);
        euro = USD *0.89;
    printf("%0.2f USD Dollars is %0.2f Euros.\n", USD, euro);
break;
case 3:
    printf("Insert the number of Euros.\n->");
        scanf("%f", &euro);
        CAD = euro * 1.45;
    printf("%0.2f Euros is %0.2f CAD Dollars.\n", euro, CAD);
break;
case 4:
    printf("Insert the number of CAD Dollars.\n->");
        scanf("%f", &CAD);
        euro = CAD *0.69;
    printf("%0.2f CAD Dollars is %0.2f Euros.\n", CAD, euro);
break;
}
    }
else{
    printf("Invalid Option, thank you.\n");
}
        }
