#include<stdio.h>

int operate(int num1, int num2, int opt){
    int result;

    if (opt == 1)
    {
        result = num1 + num2;
    } else if (opt == 2)
    {
        result = num1 - num2;
    } else if (opt == 3)
    {
        result = num1 * num2;
    } else if (opt == 4)
    {
        result = num1 / num1;
    }
    return result;
}



int main(){
    int num1, num2, opt, res;

    printf("masukkan angka pertama: ");
    scanf("%d", &num1);

    printf("masukkan angka kedua: ");
    scanf("%d", &num2);

    printf("pilih operasi:\n");
    printf("1. Tambah\n");
    printf("2. Kurang\n");
    printf("3. Kali\n");
    printf("4. Bagi\n");
    scanf("%d", &opt);

    res = operate(num1, num2, opt);

    printf(" hasilnya adalah: %i", res);
}