#include<stdio.h>

void updateArray(int *arr, int newNumber, int positionUpdarte){
    arr[positionUpdarte - 1] = newNumber;
}

int main(){
    int arr[5], newNumber, positionUpdate;
    int *arrPrt = arr;
    printf("Nhap gia tri cho mang:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", arr + i);
    }
    printf("Mang ban dau la:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", *(arrPrt + i));
    }
    printf("\nNhap gia tri ban muon thay doi: ");
    scanf("%d", &newNumber);
    printf("\nNhap vi tri ban muon Update: ");
    scanf("%d", &positionUpdate);

    updateArray(arr, newNumber, positionUpdate);

    printf("Mang sau khi duoc cap nhat la:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", *(arrPrt + i));
    }

    return 0;
}