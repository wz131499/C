#include <stdio.h>
int isPrime(int x,int knownPrimes[],int numberOfKnowPrimes){
	int ret = 1;
	int i;
	for (i=0;i<numberOfKnowPrimes;i++) {
		if (x % knownPrimes[i]==0) {
			ret = 0;
			break;
		}
	}
	return ret;
}

int main() {
    const int number = 100;  // 素数表的最大容量
    int prime[number] = {2};  // 初始化素数表，第一个素数是2
    int count = 1;           // 素数计数器，初始已有1个素数（2）
    int i = 3;               // 从3开始检查

    // 生成前100个素数
    while (count < number) {
        if (isPrime(i, prime, count)) {
            prime[count++] = i;  // 若i是素数，加入素数表
        }
        i++;
    }

    // 输出素数表，每行5个
    for (i = 0; i < number; i++) {
        printf("%d", prime[i]);
        if ((i + 1) % 5) printf("\t");  // 每行前4个数用制表符分隔
        else printf("\n");              // 第5个数换行
    }
    return 0;
}

