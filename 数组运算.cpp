 #include <stdio.h>
 int search(int key,int a[],int length) {
 	int ret = -1;
 	int i;
 	for (i=0;i<length;i++) {
 		if (a[i]==key) {
 			ret = i;
 			break;
		 } 
	 }
	 return ret;
 }
 int main() {
 	int a[]= {2,4,6,8,7,9,10,11,12,45,77,};
 	int x;
 	int loc;
 	printf("请输入一个数");
 	scanf("%d",&x);
 	loc = search(x,a,sizeof(a)/sizeof(a[0]));
 	if (loc != -1) {
 		printf("%d在第%d位置上",x,loc); 
	 } else printf("%d不存在\n",x);
 	
 	return 0;
 }
