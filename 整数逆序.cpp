#include <stdio.h>

int main () {
	int ret = 0;
	int digit = 0 ;
	int x = 1314;
	while (x>0) {
		digit= x%10;
		ret = ret*10+digit;
		x/=10;
		printf("digit=%d,x=%d,ret=%d",digit,x,ret);
		
	}   printf("%d\n",ret);
	return 0;
}
