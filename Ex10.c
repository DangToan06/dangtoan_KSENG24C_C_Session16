#include<stdio.h>

void newArray(int *arr,int n, int position){
    for(int i = position - 1; i < n; i++){
        arr[i] = arr[i + 1];
    }    
}

int main(){
    int arr[100], addNumber, position, n;
    printf("Nhap chieu dai mang:\n");
    scanf("%d", &n);
    printf("Nhap gia tri cho mang:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Nhap vi tri ban muon xoa: ");
    scanf("%d", &position);
    printf("Mang ban dau la:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    newArray(arr, n, position);
    printf("Mang sau khi xoa la:\n");
    for(int i = 0; i < n - 1; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}