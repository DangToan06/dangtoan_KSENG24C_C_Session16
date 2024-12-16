#include<stdio.h>

void swap(int *num1, int *num2){
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;;
    // printf("Gia tri sau khi bi thay do la\n");
    // printf("Number 1 = %d\n", *num1);
    // printf("Number 2 = %d\n", *num2);
}

int main(){
    int number1 = 5, number2 = 9;
    printf("Chua thay doi\n");
    printf("number 1 = %d\n", number1);
    printf("Number 2 = %d\n", number2);
    swap(&number1, &number2);
    printf("Gia tri sau khi bi thay do la\n");
    printf("Number 1 = %d\n", number1);
    printf("Number 2 = %d\n", number2);
    return 0;
}