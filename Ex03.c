#include<stdio.h>

void sum(int *number1Prt, int *number2Prt, int *resultPrt){
    *resultPrt = *number1Prt + *number2Prt;
}

int main(){
    int num1, num2, result;
    printf("Nhap 2 gia tri:\n");
    scanf("%d %d", &num1, &num2);
    sum(&num1, &num2, &result);
    printf("Tong 2 so la: %d", result);
    return 0;
}