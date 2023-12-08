#include<stdio.h>

int main(){
  int x, hra, da, ta;
	printf("enter your salary ");
	scanf("%d",&x);
  
	printf("\nhra %d",hra = x*10/100);
	printf("\nda %d",da = x*5/100);
	printf("\nta %d",ta = x*8/100);
  
  return 0;
}