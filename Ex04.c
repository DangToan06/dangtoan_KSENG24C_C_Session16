#include<stdio.h>

void exportArray(int *arrPrt){
    printf("Mang sau khi duoc nhap vao la:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", *(arrPrt + i));
    }
}

int main(){
    int arr[5], n;
    printf("Nhap phan tu cho mang:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", arr + i);
    }
    exportArray(arr);
    return 0;
}