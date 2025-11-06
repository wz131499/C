#include <stdio.h>

int main () {
	int one;
	int two;
	int five;
	int x;
	int i;
	scanf("%d",&x);
	
	for ( one=1; one<x*10;one++) {
		for (two=1;two*2<x*10;two++){
			for (five=1;five*5<x*10;five++) {
				if (one+two*2+five*5 == x*10) {
				printf("%d一角，%d两角，%d五角等于%d块。\n",one,two,five,x);
				i =1;
				 break;
				
				}
				
			} if (i==1) break;
			
		}if (i ==1)  break;
		
		
	}  
	
		return 0;
	
}
