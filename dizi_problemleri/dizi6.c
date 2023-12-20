#include<stdio.h>

int main(){
    
    int arr[7]={5,3,7,8,15,9,22};
    int i=0,j=6,tempi,tempj;

    for(;;){

        tempi=arr[i];
        tempj=arr[j];

        arr[i]=tempj;
        arr[j]=tempi;

        i++;
        j--;

        if(i==j){
            break;
        }
    }

    for(i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
}