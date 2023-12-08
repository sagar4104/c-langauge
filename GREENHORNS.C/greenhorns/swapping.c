#include<stdio.h>

int main(){
  int x,y;
	printf("enter value x & y: ");
	scanf(" %d %d" ,&x ,&y);
  //x=60
  //y=50
  x=x+y;//110
  y=x-y;//110-60=60
  x=x-y;//110-50=50
	printf("\n result x  %d",x);
	printf("\n resulty %d",y);
  return 0;
}