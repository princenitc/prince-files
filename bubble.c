#include<stdio.h>
#include<stdlib.h>
void swap(int *a , int *b){
        int temp = *a;
        *a = *b;
        *b = temp;
}
void print(int arr[],int n){
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
    printf("\n");
}
void bubble_sort(int arr[],int n){
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-j-1;i++){
            if(arr[i]>arr[i+1])
                swap(&arr[i],&arr[i+1]);
        }
    }
}
int main(){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        bubble_sort(arr,n);
        print(arr,n);
return 0;
}
