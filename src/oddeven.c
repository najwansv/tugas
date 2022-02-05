#include <stdio.h>
#include <stdlib.h>

int *Int() {
    static int bilangan[10];

    printf("Masukkan nilai 1 - 10: \n");
    for(int i = 0; i < 10; ++i) {
     scanf("%d", &bilangan[i]);
    }
    return bilangan;
}

int main(){
    int i, j = 0, k = 0;
    int genap[10];
    int ganjil[10];

    int *res = Int();
    for(int i = 0; i < 10; ++i) {
     printf("%d ", *(res + i));
    }
    printf("\n");
    
    for(i = 0; i < 10; i++){
        // printf("%d\n", *(res + i));
        if (*(res + i) % 2 == 0){
            genap[j] = *(res + i);
            j++;
        } else if (res[i] % 2 != 0) {
            ganjil[k] = *(res + i);
            k++;
        }
    }

    printf("\nBilangan genap : \n");
    for(int i = 0; i < j; ++i) {
     printf("%d ", genap[i]);
    }

    printf("\n");

    printf("\nBilangan ganjil : \n");
    for(int i = 0; i < k; ++i) {
     printf("%d ", ganjil[i]);
    }

    free(res);
}