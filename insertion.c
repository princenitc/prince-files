#include<stdio.h>
#include<stdlib.h>

void print(int arr[],int n){
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
}
void insertion_sort(int arr[],int n){
        for(int i=1;i<n;i++){
            int key =arr[i];
            int j=i-1;
            while(j >=0 && arr[j]>key){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int k=0;k<n;k++){
        scanf("%d",&arr[k]);
    }
    insertion_sort(arr,n);
    print(arr,n);
return 0;
}
