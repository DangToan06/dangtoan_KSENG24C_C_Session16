#include<stdio.h>

void newArray(int *arr, int n, int *addNumber, int position){
    for(int i = n; i >= position; i--){
        arr[i] = arr[i - 1];
    }
    for(int i = 0; i <= n; i++){
        if(i == position - 1){
            arr[i] = *addNumber;
        }
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
    printf("Nhap gia tri ban muon them: ");
    scanf("%d", &addNumber);
    printf("Nhap vi tri ban muon them: ");
    scanf("%d", &position);
    printf("Mang ban dau la:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    newArray(arr, n, &addNumber, position);
    printf("Mang sau khi them la:\n");
    for(int i = 0; i < n + 1; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}