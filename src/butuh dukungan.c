#include <stdio.h>

int main(){

    int nAge;

    printf("Age:");
    scanf("%i", nAge);
    if (nAge >= 17)
    {
        printf("id card:");
        scanf("id card:");
        printf("your accepted");
    } else{
        printf("your accepted");
    }
}