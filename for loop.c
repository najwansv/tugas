#include<stdio.h>

int main(){

    int value[5];
    int i;
    for ( i = 0; i < 5; i++)
    {
        scanf("%i", &value[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%i", value[i]);
    }
}