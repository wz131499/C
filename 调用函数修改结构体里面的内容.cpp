#include <stdio.h>
typedef struct studen {
char name[100];
	int age;


}s;
void change(s*p);
int main() {
s a1={"张三",21};
	s a2={"李氏",22};
	
change(&a1);
printf("调用函数后的是%s %d\n",a1.name,a1.age);	



}
void change(s*p) {
	printf("传递过来的是%s %d\n",(*p).name,(*p).age);
	scanf("%s %d",(*p).name,&((*p).age));
	printf("修改后的是%s %d\n",(*p).name,(*p).age);

}
