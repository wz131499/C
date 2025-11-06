#include <stdio.h>
void maxmin(int a[],int length,int *max,int *min) {
	int i;
	for(i=0;i<length;i++) {
		*max=1;
		*min=1;
		if(a[i]<*min) {
			*min=a[i];
		}
		if(a[i]>*max) {
			*max=a[i];
		}
	} 		
	}
	int main() {
		int a[]={1,3,4,5,6,7,8,9,11,22,55,66,77,88,99,100};
		int max;
		int min;
		maxmin(a,sizeof (a)/sizeof (a[0]) ,&max,&min);
		printf("%d %d\n",max,min);
		return 0;
	}
