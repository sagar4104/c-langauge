#include<stdio.h>

int main() {
    int i,j,s,k,l,m,n;
	
	for(l=5;l>=1;l--){
		 for ( k = 1; k <= l; k++) {
            printf("%d ", k);
        }
         for ( n =5; n > l; n--) {
            printf("    ");
        }
        for(m=l;m>=1;m--){
        	printf("%d ", m);
		}
      
        printf("\n");
	}


    for ( i = 1; i <= 5; i++) {
    	
        for ( j = 1; j <= i; j++) {
            printf("%d ", j);
            
        }
        
		for(s=5;s>i;s--){
			printf("    ");
		}
        for ( j = i; j >= 1; j--) {
            printf("%d ", j);
        }

    
        printf("\n");
    }

}