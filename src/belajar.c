#include<stdio.h>

void panggil(){
    printf("kepanggil");
}

int main() {
    char terima;
    char terima1;
    scanf("%c", terima);
    scanf("%c", terima1);

    if (terima == 'y'){
        panggil;
    }
    printf("lewat");

    if (terima1 == 'n'){
        panggil;
    }
}