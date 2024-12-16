#include<stdio.h>

void sortArray(int *arr, int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(*(arr + j) < *(arr + j + 1)){
                int temp = *(arr + j + 1);
                *(arr + j + 1) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main(){
    int arr[100], n;
    printf("Nhap kich co mang:\n");
    scanf("%d", &n);
    printf("Nhap gia tri cho mang:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Mang vua duoc nhap la:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    sortArray(arr, n);
    
    printf("\nMang sau khi duoc xap xep la:\n");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}