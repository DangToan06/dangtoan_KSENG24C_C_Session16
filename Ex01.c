#include<stdio.h>

int main(){
    int number = 2;
    int *numberPrt = &number;
    printf("Dia chi cua bien tren int theo c1 la: %d\n", numberPrt);
    printf("Dia chi cua bien tren int theo c2 la: %d\n", &number);
    printf("Gia tri cua bien tren int theo c1 la: %d\n", *numberPrt);
    printf("Gia tri cua bien tren int theo c2 la: %d\n", number);
    return 0;
}