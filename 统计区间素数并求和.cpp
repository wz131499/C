#include <stdio.h>
 
 int main() {
 	int a,b;
 	int sum=0;
 	int cnt=0;
 	int i;
 	scanf("%d %d",&a,&b);
 	if (a==1)
 	a=2;
 	for (i=a;i<=b;i++) {
 		int k;
 		int isPrime = 1;
 		for (k=2;k<i-1;k++) {
 			if (i%k==0) {
 				isPrime=0;
 				break;
			 }
			 }
 			if (isPrime) {
 				cnt++;
 				sum+=i;
		 }
	 } printf("%d %d",cnt,sum);
	
 	return 0;
 }
