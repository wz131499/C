#include <stdio.h>

int main () {
	int x;
	scanf("%d",&x);
	int mask = 1;
	int t;
	t = x;
	while (t>9) {
		t/=10;
		mask *=10;
		
    }  
	  
	do {
        int d = x/mask;
        
        x%=mask;
        if (mask>0) {
        printf(" ");	
		}
        mask/=10;
	    printf("x=%d,mask=%d,d=%d\n",x,mask,d);
		
		
		
	} while (mask>0);
	printf("\n");
	
	
		
	return 0;
}
