#include <stdio.h>

int main() {
    int n, m, sum = 0, count = 0, num = 2;
    scanf("%d %d", &n, &m);
    
    while (count < m) {
        int is_prime = 1;
        // 判断num是否为素数（直接从i=2开始）
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }
        
        if (is_prime) {
            count++;
            if (count >= n) {  // 当count>=n时开始累加
                sum += num;
            }
        }
        num++;
    }
    
    printf("%d", sum);
    return 0;
}
