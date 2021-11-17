#include <stdio.h>
#include <stdlib.h>

float charge(char choiceVehicle, int hour){
    float resultprice;
    if(choiceVehicle == 'S'){
        resultprice = hour * 20.00;
        if(hour > 18){
            resultprice = resultprice - resultprice*0.1;
        }
    } else if(choiceVehicle == 'L'){
        resultprice = hour * 35.00;
        if(hour > 18){
            resultprice = resultprice - resultprice*0.15;
        }
    }else if (choiceVehicle == 'M'){
        resultprice = hour * 45.00;
        if (hour > 18){
            resultprice = resultprice - resultprice*0.2;
        }
    }
    return resultprice;
}

int main(){
	char userName[25];
	int choiceMenu;
	char choiceVehicle;
	int hour;
	float resultprice;
	static const char num[] = "1234567890";
    const size_t num_count = 10;
    int i, j;

	while(1)
	{
		printf("1. select car\n2. invoice\n3. payment\n4. end\n");
		printf("enter your choiceVehicle: ");

		
		scanf("%d", &choiceMenu);

		switch (choiceMenu){
		case 2:	
    		printf("S = Sedan  || (RM/h = 20.00)\n");
    		printf("L = Luxury || (RM/h = 35.00)\n");
    		printf("M = MPV    || (RM/h = 45.00)\n");

    		printf("Insert type car for rent: ");
    		scanf(" %c", &choiceVehicle);
    		printf("Total hours of renting: ");
    		scanf(" %i", &hour);
			continue;
			
		case 3:
			if (choiceVehicle == 'S'|| choiceVehicle == 'L'|| choiceVehicle == 'M')
			{
				resultprice = 	charge(choiceVehicle, hour);
				printf("your car was %c\ntime: %i Hours\n", choiceVehicle, hour);
    			printf("total price: %.2f RM\n", resultprice);
				printf("atas nama %s\n", userName);
			} else{
				printf("choiceVehicle was not inputted\n");
				continue;
			}
			continue;
		case 4:
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
		case 1:
			printf("masukkan nama anda: ");
			scanf(" %[^\n]s", userName);
			
			continue;
		default:
			printf("input error");
			break;
		}
		break;
	}
}