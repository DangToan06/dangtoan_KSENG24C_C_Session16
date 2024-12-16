#include<stdio.h>

int searchArray(int *arr, int searchNumber){
    int flag = -1;
    for(int i = 0; i < 5; i++){
        if(*(arr + i) == searchNumber){
            flag = i;
        }
    }
    return flag;
}

int main(){
    int arr[5];
    int searchNumber;
    printf("Nhap gia tri cho mang:\n");
    for(int i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    printf("Mnag vua nhap la:\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", arr[i]);
    }

    printf("\nNhap gia tri ban muon tim: ");
    scanf("%d", &searchNumber);

    int position = searchArray(arr, searchNumber);

    if(position != -1){
        printf("gia tri banj tim ow vi tri thu: %d", position);
    }else{
        printf("Gia tri banj nhap khong ton tai trong mang");
    }
    
    return 0; 
}