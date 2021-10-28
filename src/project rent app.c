#include <stdio.h>
#include <stdlib.h>

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
	int choiceMenu;
	char choice;
	int hour;
	float res;
	static const char num[] = "1234567890";
    const size_t num_count = 10;
    int i, j;

	while(1)
	{
		printf("1. select car\n2. invoice\n3. payment\n4. end\n");
		printf("enter your choice: ");

		
		scanf("%d", &choiceMenu);

		switch (choiceMenu){
		case 1:	
    		printf("S = Sedan  || (RM/h = 20.00)\n");
    		printf("L = Luxury || (RM/h = 35.00)\n");
    		printf("M = MPV    || (RM/h = 45.00)\n");

    		printf("Insert type car for rent: ");
    		scanf(" %c", &choice);
    		printf("Total hours of renting: ");
    		scanf(" %i", &hour);
			continue;
			
		case 2:
			if (choice == 'S'|| choice == 'L'|| choice == 'M')
			{
				res = charge(choice, hour);
				printf("your car was %c\ntime: %i Hours\n", choice, hour);
    			printf("total price: %.2f RM\n", res);
			} else{
				printf("choice was not inputted");
				continue;
			}
			continue;
		case 3:
    		for(i = 0; i < 1; i++) {
        		for(j = 0; j < num_count; j++) {
            		char random_char;
            		int random_index = (double)rand() / RAND_MAX * num_count;
            
            		random_char = num[random_index];

            		printf("%c", random_char);
       			}
				printf("\nthis is your payment code, please show it to the scooter rental officer\n");
    		}
			continue;
		case 4:
			printf("thank you for using our services");
			break;
		default:
			printf("input error");
			break;
		}
		break;
	}
}