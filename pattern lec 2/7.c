#include<stdio.h>

int main(){
	
	int i,j,s,a;
	
	for(i=5;i>=1;i--){
		 for ( j = 1; j <= i; j++) {
            printf("%d ", j);
        }
         for ( s =5; s > i; s--) {
            printf("    ");
        }
        for(a=i;a>=1;a--){
        	printf("%d ", a);
		}
      
        printf("\n");
	}
}
