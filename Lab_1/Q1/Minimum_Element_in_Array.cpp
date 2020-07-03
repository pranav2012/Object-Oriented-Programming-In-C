#include <stdio.h>

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        printf("enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    int small=arr[0];
    int pos=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i]<small){
            small=arr[i];
            pos=i+1;
        }
    }
    printf("will be %d at position %d",small,pos);
    return 0;
}