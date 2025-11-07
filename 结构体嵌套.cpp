#include <stdio.h>
#include <string.h>
typedef struct {
 char phone[100];
	char emile[100];


}m;
struct student{
char name[100];
	int age;
    m mes;
};


int main() {
struct student std;
	strcpy(std.name,"’≈…Ω");
	std.age=21;
	strcpy(std.mes.phone,"123456789");
	strcpy(std.mes.emile,"974292343@qq.com");
	printf("name:%s age:%d   phone:%s  emile:%s",std.name,std.age,std.mes.phone,std.mes.emile);



}
