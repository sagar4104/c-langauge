#include<stdio.h>
int findlength(char arr[20]){
int i,count=0;
for(i=0;arr[i]!='\0';i++){
    count++;
}
return count;
}
void main(){
    char name[50];
    printf("\n enter name:");
    scanf("%s",name);
    printf("\n length is %d",findlength(name));
}