#include<stdio.h>
#include<string.h>

void reverse(char *inputString, int length, char *reverseString){
    for(int i = 0; i <= length; i++){
        reverseString[i] = inputString[length - i - 1];
    }
    reverseString[length] = '\0';
}

int main(){
    char inputString[1000];
    char reverseString[1000];
    printf("Nhap chui ky tu:\n");
    fgets(inputString, 1000, stdin);
    size_t length = strlen(inputString);
    printf("Chuoi ky tu vua duoc nhap vao la:\n");
    fputs(inputString, stdout);
    reverse(inputString, length, reverseString);
    printf("chuoi ki tu sau khi dao nguoc la:");
    fputs(reverseString, stdout);
    return 0;
}