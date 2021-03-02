//selection sort
#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int temp =*a;
    *a = *b;
    *b = temp;
}
void selection_sort(int arr[],int n){
for(int i=0;i<n-1;i++){
       int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[minindex])
                minindex=j;
        }
        swap(&arr[minindex],&arr[i]);
    }  
    }  
void print(int arr[],int n){
        for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
        }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selection_sort(arr,n);
    print(arr,n);
return 0;
}
