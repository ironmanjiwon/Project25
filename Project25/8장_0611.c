//p.307

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer()
{
	int value;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &value);
	return value;
}

int main(void)
{
	int x = get_integer();
	int y = get_integer();
	int result = x + y;
	printf("두 수의 합 = %d\n", result);

	return 0;
}

//정수를 입력하세요 : 10
//정수를 입력하세요 : 20
//두 수의 합 = 30


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer()
{
	int value;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &value);
	return value;
}

int get_max(int x, int y)
{
	if (x > y)
		return(x);
	else
		return(y);
}

int main(void)
{
	int a = get_integer();
	int b = get_integer();

	printf("두 수 중에서 큰 수는 %d입니다.\n", get_max(a, b));
	return 0;
}

//정수를 입력하세요 : 10
//정수를 입력하세요 : 20
//두 수 중에서 큰 수는 20입니다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer()
{
	int value;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &value);
	return value;
}

int power(int x, int y)
{
	int i, result = 1;

	for (i = 0; i < y; i++)
		result *= x;

	return result;
}

int main(void)
{
	int x = get_integer();
	int y = get_integer();
	int result = power(x, y);
	printf("%d의 %d제곱 = %d\n", x, y, result);

	return 0;
}

//정수를 입력하세요 : 10
//정수를 입력하세요 : 2
//10의 2제곱 = 100


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int compute_sum(int n);

int main(void)
{
	int sum;
	sum = compute_sum(100);
	printf("1부터 100까지의 합 = %d \n", sum);
	return 0;
}
int complete_sum(int n)
{
	int i, result = 0;
	for (i = 1; i <= n; i++)
		result += i;

	return result;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double FtoC(double temp_f);

int main(void)
{
	double c, f;
	f = 32.0;
	c = FtoC(f);
	printf("화씨온도 %lf은 섭씨온도 %lf에 해당한다. \n", f, c);
	return 0;
}

double FtoC(double temp_f)
{
	double temp_c;
	temp_c = (5.0 * (temp_f - 32.0)) / 9.0;
	return temp_c;
}

//화씨온도 32.000000은 섭씨온도 0.000000에 해당한다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int check_prime(int);

int main(void)
{
	int k;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &k);

	if (check_prime(k) == 1)
		printf("소수입니다.\n");
	else
		printf("소수입니다.\n");

	return 0;
}

int check_prime(int n)
{
	int is_prime = 1;
	int i;

	for (i = 2; i < n; ++i)
	{
		if (n % i == 0)
		{
			is_prime = 0;
			break;
		}
	}
	return is_prime;
}

//정수를 입력하세요 : 31
//소수입니다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int compute_sum(int n);

int main(void)
{
	int sum;
	sum = compute_sum(100);
	printf("1부터 100까지의 합 = %d \n", sum);
	
	return 0;
}
int compute_sum(int n)
{
	int n;
	int result = 0;

	for (i = 1; i <= n; i++)
		result += i;
	
	return result;
}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum = 123;

int main(void)
{
	int sum = 321;
	printf("sum = %d\n", sum);

	return 0;
}

//sum = 321


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int check_prime(int n);

int main(void)
{
	int n, flag = 0;
	int i;
	printf("양의 정수를 입력하세요: ");
	scanf("%d", &n);

	for (i = 2; i < n; i++)
	{
		if (check_prime(i) == 1)
		{
			if (check_prime(n - i) == 1)
			{
				printf("%d = %d + %d\n", n, i, n - i);
				flag = 1;
			}
		}
	}
	if (flag == 0)
		printf("%d은 소수들의 합으로 표시될 수 없습니다.\n", n);
	return 0;
}

	int check_prime(int n)
	{
		int is_prime = 1;
		int i;

		for (i = 2; i < n; ++i)
		{
			if (n % i == 0)
			{
				is_prime = 0;
				break;
			}
		}
		return is_prime;
	}

//양의 정수를 입력하세요: 33
//33 = 2 + 31
//33 = 31 + 2


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sub(void)
{
	int auto_count = 0;
	static int static_count = 0;

	auto_count++;
	static_count++;
	printf("auto_count=%d\n", auto_count);
	printf("static_count=%d\n", static_count);
}

int main(void)
{
	sub();
	sub();
	sub();
	sub();
	
	return 0;
}

//auto_count = 1
//static_count = 1
//auto_count = 1
//static_count = 2
//auto_count = 1
//static_count = 3
//auto_count = 1
//static_count = 4


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int factorial(int n);

int main(void)
{
	int x = 0, result;

	printf("정수를 입력하세요: ");
	scanf_s("%d", &x);

	result = factorial(x);
	printf("%d!은 %d입니다.\n", x, result);

	return 0;
}

int factorial(int n)
{
	printf("factorial(%d)\n", n);

	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}

//정수를 입력하세요 : 5
//factorial(5)
//factorial(4)
//factorial(3)
//factorial(2)
//factorial(1)
//5!은 120입니다.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fibbonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return (fibbonacci(n - 1) + fibbonacci(n - 2));
	}
}

int main(void)
{
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", fibbonacci(i));
	}
}

//0 1 1 2 3 5 8 13 21 34


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	printf("%d ", rand());
	printf("%d ", rand());
	printf("%d ", rand());
	printf("%d ", rand());
}

//41 18467 6334 26500


#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define MAX 45

int main(void)
{
	int i, k, lotto[6] = { 0 };
	int dup_check[MAX + 1] = { 0 };

	srand(time(NULL));
	for (i = 0; i < 6; i++)
	{
		k = 1 + (rand() % MAX);
		while (dup_check[k] == 1)
			k = 1 + (rand() % MAX);

		lotto[i] = k;
		dup_check[k] = 1;
		printf("%d ", lotto[i]);
	}
	return 0;
}

//40 1 13 14 21 31


#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

double power(int x, int y)
{
	double result = 1.0;
	for (int i = 0; i < y; i++)
		result *= x;
	
	return result;
}

double factorial(int n)
{
	double result = 1.0;
	
	if (n <= 1)
		return 1;
	for (int i = 1; i <= n; i++)
		result *= i;

	return result;
}

int main(void)
{
	double sum = 0.0;
	int x, n;
	printf("x와 n의 값을 입력하세요: ");
	scanf_s("%d %d", &x, &n);

	for (int i = 0; i <= n; i++)
		sum += power(x, i) / factorial(i);

	printf("e^%d = %.3lf\n", x, sum);
	return 0;
}

//x와 n의 값을 입력하세요 : 2 100
//e ^ 2 = 7.389


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void mainMenu();
void checkBalance(int balance);

int moneyDeposit(int balance);
int moneyWithdraw(int balance);

void menuExit();
void errorMessage();

int main()
{
	int option = 0;
	int balance = 10000;

	int again = 1;

	while (again)
	{
		mainMenu();

		scanf_s("%d", &option);

		switch (option)
		{
		case 1:
			checkBalance(balance);
			break;

		case 2:
			balance = moneyDeposit(balance);
			break;

		case 3:
			balance = moneyWithdraw(balance);
			break;

		case 4:
			menuExit();
			return 0;

		default:
			errorMessage();
			break;
		}
	}
	return 0;
}

void mainMenu()
{
	printf("\n **********Welcome to 광주은행 ATM ***********\n");
	printf("<1> 잔고 확인\n");
	printf("<2> 입금\n");
	printf("<3> 인출\n");
	printf("<4> 종료\n");
	printf("****하나를 선택하시오****\n\n");
}

void checkBalace(int balance)
{
	printf("****잔고는 %d입니다.\n\n", balance);
}

int moneyDeposit(int balance)
{
	int deposit;
	printf("****입금 금액을 입력하세요\n");
	scanf_s("%d", &deposit);

	balance += deposit;
	printf("\n새로운 잔고는 %d입니다.\n\n", balance);

	return balance;
}

int moneyWithdraw(int balance)
{
	int withdraw;
	int back = 1;

	while (back)
	{
		printf("출금 금액을 입력하세요: \n");
		scanf_s("%d", &withdraw);

		if (withdraw < balance)
		{
			back = 0;
			balance -= withdraw;
			printf("\n새로운 잔고는 %d입니다.\n\n", balance);
		}

		else
		{
			printf("\n%d 이하로 입력하세요.\n\n", balance);
		}
	}
	return balance;
}

void menuExit()
{
	printf("종료!!\n");
}

void errorMessage() {
	printf("오류입니다!!\n");
}