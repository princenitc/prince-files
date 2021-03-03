#include<stdio.h>
#include<stdlib.h>
void print(int arr[],int n){
        for(int i=0;i<n;i++){
            printf("%d ",arr[i]);
        }
        printf("\n");
}
void merge(int arr[],int l,int m,int u){
        int s1 = (m-l)+1;
        int s2 = (u-m);
        int a[s1],b[s2];
        for(int i=0;i<s1;i++){
            a[i] = arr[i+l];
        }
        for(int i=0;i<s2;i++){
            b[i]=arr[m+1+i];
        }
        int i=0,j=0,k=l;
        while(i < s1 && j <s2){
            if(a[i] <= b[j]){
                arr[k]=a[i];
                i++;
                k++;
            }
            else{
                arr[k]=b[j];
                j++;
                k++;
            }
        }
        while(i <s1){
            arr[k]=a[i];
            i++;
            k++;
        }
        while(j < s2){
            arr[k] =b[j];
            j++;
            k++;
        }
} 
void merge_sort(int arr[],int l,int u){
    if(l < u){
        int m = l+(u-l)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,u);
        merge(arr,l,m,u);
}
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    merge_sort(arr,0,n-1);
    print(arr,n);
return 0;
}































