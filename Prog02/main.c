#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int valuex;
    int valuey;
    int valuet;

    printf("Insert 1st value:\n->");
        scanf("%d", &valuex);
    printf("Insert 2nd value:\n->");
        scanf("%d", &valuey);
        valuet=valuex+valuey;
    printf("%d + %d = %d\n",valuex, valuey, valuet);

    if(valuex > valuey){
        printf("%d was the biggest value\n", valuex);
    }
    else if (valuey > valuex){
        printf("%d was the biggest value\n", valuey);
    }
    else{
        printf("They're both the same.");
    }
    }
