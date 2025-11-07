#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct{
char name[10];
	int count;
}j;
int main(){
 j arr[]={{"a",0},{"b",0},{"c",0},{"d",0}};
	srand(time(NULL));
	for(int i=0;i<80;i++) {
	arr[rand()%4].count++;
	}
  int max=arr[0].count;
	for(int i=1;i<4;i++) {
	if(arr[i].count>max) {
	max=arr[i].count;
	
	}
	}
	for(int i =0;i<4;i++) {
		printf("%s  %d\n",arr[i].name,arr[i].count);
	}
	for(int i=0;i<4;i++) {
	if(arr[i].count==max) {
	printf("MAX:%s  COUNT:%d",arr[i].name,arr[i].count);
	break;
	}
	
	
	
	}

}
