#include<stdio.h>
/*Write a C program that accepts the vehicle type and total hours of renting 
the vehicle. The program will print the total price that the customer 
should pay based on Table 1 above. Discount from the total price only 
can be applied if the customer rented the vehicle for more than 18 hours.*/

float charge(char choice, int hour){
    float res;
    if(choice == 'S'){
        res = hour * 20.00;
        if(hour > 18){
            res = res - res*0.1;
        }
    } else if(choice == 'L'){
        res = hour * 35.00;
        if(hour > 18){
            res = res - res*0.15;
        }
    }else if (choice == 'M'){
        res = hour * 45.00;
        if (hour > 18){
            res = res - res*0.2;
        }
    }
    return res;
}

int main(){
    char choice;
    int hour;
    float res;

    // 1. print menu
    printf("S = Sedan  || (RM/h = 20.00)\n");
    printf("L = Luxury || (RM/h = 35.00)\n");
    printf("M = MPV    || (RM/h = 45.00)\n");

    // 2. choose vehicle type and input time of renting
    printf("Insert type car for rent: ");
    scanf("%c", &choice);
    printf("Total hours of renting: ");
    scanf("%i", &hour);

    // 3. execute in charge() function
    res = charge(choice, hour);

    // 4. print result
    printf("your car was %c\ntimr: %i Hours\n", choice, hour);
    printf("total price: %.2f RM\n", res);
}