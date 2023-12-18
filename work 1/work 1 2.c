#include<stdio.h>
int main(){
    int num;
    printf("enter a value a&b");
    scanf("%d",&num);
    if (num>0){
        printf("\n num is natural");
    } else if (num<0){
        printf("\n num is not using");
    } else{
        printf("\n num is zero");
    }

    return 0;
}