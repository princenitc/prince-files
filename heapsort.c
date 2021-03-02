//algo for sorting in rhe descending order change the sign in max_heapify.......
#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b){
    int temp =*a;
    *a=*b;
    *b=temp;
}
void max_heapify(int arr[],int n,int i){
        int largest = i;
        int l=2*i+1;
        int r=2*i+2;
        if(l<n && arr[l]>arr[largest]){
                largest=l;
        }
        if(r<n && arr[r]>arr[largest]){
                largest=r;
        }
        if(largest != i){
                swap(&arr[i],&arr[largest]);
                max_heapify(arr,n,largest);//recursive call to heapify the heap
        }
}

void build_heap(int arr[],int n){
    int internalnode=(n/2)-1;
    for(int i=internalnode;i>=0;i--){
        max_heapify(arr,n,i);
    }
    for(int i=n-1;i>0;i--){
        swap(&arr[0],&arr[i]);//swapping a value with maximum and placing maximum at last
        max_heapify(arr,i,0);//again heapifying with reduced heap size
    }
}
void print_heap(int arr[],int n){
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
    build_heap(arr, n);
    print_heap(arr, n);
return 0;
}
