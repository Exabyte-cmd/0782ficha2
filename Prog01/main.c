#include <stdio.h>
#include <stdlib.h>
/*
Kg > Lbs
Opção 1: kg > Lbs, or else Lbs > kgs
*/
int main(void)
{
    int option;
    float lbs;
    float kgs;

    printf("Welcome to Pounds to Kilograms Converter.\nIf you press 1 It will be converted FROM Kilograms TO Pounds, otherwise it will be FROM Pounds TO Kilograms.\n");

printf("\nInsert your option.\n->");
    scanf("%d", &option);

    if(option==1){
        printf("Insert the number of kilograms:\n->");
            scanf("%f", &kgs);
            lbs = kgs*2.2;
        printf("The number of pounds is:\n->%0.2f", lbs);

    }
else{
    printf("Insert the number of Pounds:\n->");
        scanf("%f", &lbs);
        kgs = lbs/2.2;
    printf("The number of kilograms is:\n->%0.2f", kgs);
}
}
