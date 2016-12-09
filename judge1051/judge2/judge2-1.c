#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0, i, num = 2; // n: 初始數, sum: n 次方總和, num: 除數
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        sum += i * i;
    printf("Sum: %d\n", sum);
    while (sum != 1) {
        int power = 0;
        while (sum % num == 0) { // 將 num 除乾淨
            sum /= num;
            power++;
        }
        if (power != 0)
            printf("(%d ^ %d) ", num, power);
        num++;
    }
    return 0;
}
