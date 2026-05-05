#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* 猜数游戏 
计算机生成一个数字，玩家猜测这个数字是什么。
计算机会告诉玩家猜测的数字是太大了、太小了还是正确的。
玩家继续猜测，直到猜对为止，最后还要告诉玩家猜了多少次。

int Guessing_number() {
    int number, guess, counts = 0;
    number = rand() % 100 + 1;    // 生成一个1到100之间的随机数
    printf("欢迎来到猜数游戏！我已经选择了一个1到100之间的数字。\n");
    do {
        printf("请输入你的猜测：");
        scanf("%d", &guess);
        counts++;
        if (number > guess) {
            printf("太小了！\n");
        }
        else if (number < guess) {
            printf("太大了！\n");
        }
    } while (guess != number);
    printf("恭喜你，猜对了！你总共猜了%d次。\n", counts);
    return 0;
}
*/

/* 求平均数
用户输入一系列正整数，最后输入-1表示输入结束，计算并输出这些数的平均值和数字的个数。 
int averaging() {
    long int number, count = 0;
    double sum = 0.0;
    printf("请输入一系列正整数，输入-1结束：\n");
    while (1) {
        scanf("%ld", &number);
        if (number > 0) {
            sum += number;
            count++;
        } else if (number == -1) {
            break;
        }else {
            printf("请输入正整数！\n");
        }
    }
    if (count > 0) {
        printf("平均值为：%.2f，数字的个数为：%d\n", sum / count, count);
    } else {
        printf("没有输入有效的正整数。\n");
    }
    return 0;
}
*/

/* 整数求逆
用户输入一个正整数，输出逆序的数。 
int Integer_inversion() {
    long int number, reversed = 0;
    printf("请输入一个正整数：\n");
    scanf("%ld", &number);
    while (number > 0) {
        reversed = reversed * 10 + number % 10; // 将当前数字的最后一位添加到逆序数中
        number /= 10; // 去掉当前数字的最后一位
    }
    printf("逆序的数是：%ld\n", reversed);
    return 0;
}
*/

/* 前n项数求和
用户输入一个n，求出1+1/2+1/3……1/n的和
int sum_of_n_terms(){
    int n;
    double sum = 0.0;
    printf("请输入一个正整数n：\n");
    scanf("%d", &n);
    if(n>0) {
        for(int i = 1; i <= n; i++){
            sum += 1.0/i; // 将每项的值累加到sum中
        }
    }
    printf("前%d项的和为：%.2f\n", n, sum);
    return 0;
} 
*/

/* 非负整数分解
用户输入一个非负整数，输出它的各位数字。
int Non_negative_integer_factorization(){
    int number, digit_count = 0, copy_number = 0, temp = 1;
    printf("请输入一个非负整数：\n");
    scanf("%d", &number);
    while (number < 0) {
        printf("输入有误，请输入一个非负整数：\n");
        scanf("%d", &number);
    }
    copy_number = number;
    while(copy_number > 0){
        copy_number /= 10; // 去掉当前数字的最后一位
        digit_count++; // 统计数字的个数
    }
    while(digit_count > 1){
        digit_count--; // 统计数字的个数
        temp *= 10; // 计算当前位的权值
    }
    while (temp > 0) {
        copy_number = number / temp;
        number %= temp; // 去掉当前位的数字
        printf("%d ", copy_number); // 输出当前位的数字
        temp /= 10; // 计算下一位的权值
    }
    return 0;
}
*/

/* 求最大公约数
用户输入两个数a和b，求出它们的最大公约数。
int greatest_common_divisor(){
	int a = 0, b = 0, c = 0;
	printf("请输入两位正整数：");
	scanf("%d", &a);
	scanf("%d", &b);
	while((a <= 0) || (b <= 0)){
		printf("输入有误，请输入两位正整数：");
		scanf("%d %d", &a, &b);
	}
    while (b != 0) {
        c = a % b; // 计算a除以b的余数
        a = b; // 将b赋值给a
        b = c; // 将余数赋值给b
    }
    printf("最大公约数是：%d\n", a);
    return 0;
}
*/

/* 求符合给定条件的整数集
给定不超过6的正整数A,考虑A开始的连续4个数字，
输出由他们组成的无重复数字的3位数.
输出满足条件的3位数，要求从小到大，每行6个整数；
整数间以空格分隔，但行末不能有多余空格。 
void set_of_integers(void)
{
    int a = 0, i, j, k, sum = 0, count;
    printf("请输入一个不超过6的正整数：");
    scanf("%d", &a);
    while((a<=0) || (a>6)){
        printf("请输入一个不超过6的正整数：");
        scanf("%d", &a);
    }
    i = a;
    while(i <= (a+3)){
        sum = i*100;
        j = a;
        count = 0;
        while(j <= (a+3)){
            if(j != i){
                sum = sum + j*10;
                k = a;
                while(k <= (a+3)){
                    if((k!=i)&&(k!=j)){
                        sum = sum + k;
                        count++;
                        if(count % 6 == 0 || count == 24) // 24 is the max possible per line
                            printf("%d", sum);
                        else
                            printf("%d ", sum);
                        sum = sum - k;
                    }
                    k++;
                }
                sum = sum - j*10;
            }
            j++;
        }
        i++;
        printf("\n");
        sum = 0;
    }
    return 0;
}
*/

/* 求水仙花数
水仙花数是指一个N位正整数(N>=3) ,它的每个位上的数字的N次幂之和等于它本身。
例如: 153= 1^3 + 5^3+ 3^3,本题要求编写程序,计算所有N位水仙花数。
输入格式： 输入在一行中给出一个正整数N (3<=N<=7)。 
输出格式： 按递增顺序输出所有N位水仙花数,每个数字占一行。

void number_of_daffodils(void){
	int N = 0, start, end;
    do {
        printf("请输入一个正整数N (3<=N<=7): ");
        scanf("%d", &N);
    } while ( (N < 3) || (N > 7) ); 

	start = (int)pow(10, N - 1);
	end = (int)(pow(10.0, N) - 1);
	for(int i = start; i <= end; i++){
		int temp = i;
		int sum = 0;
		while(temp > 0){
			int digit = temp % 10;
			sum += (int)pow(digit, N);
			temp /= 10;
		}
		if (sum == i){
			printf("%d\n", i);
		}
	}
    return 0;
}
*/

/*统计素数并求和
要求统计给定整数M和N区间内素数的个数并对它们求和。 
输入格式: 输入在一行中给出2个正整数M和N (1<=M<=N<=500)。 
输出格式: 在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。
*/
void count_of_primes_and_sum(void){
	int M, N, count, add;
	printf("请输入两个正整数（1~500）：");
	scanf("%d %d", M, N);
	while()
}


void main(){
    // Guessing_number();                      //猜数游戏 
    // averaging();                            //求平均数
    // Integer_inversion();                    //整数反转
    // inversion();                            //求逆序数
    // sum_of_n_terms();                       //求1+1/2+1/3……1/n的和
    // Non_negative_integer_factorization();   //非负整数分解
    // greatest_common_divisor();              //求最大公约数
    // set_of_integers();                      //求符合给定条件的整数集
    // number_of_daffodils();                  //求水仙花数
    count_of_primes_and_sum();              //统计素数并求和
    return 0;
}














