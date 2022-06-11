//p.307

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer()
{
	int value;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &value);
	return value;
}

int main(void)
{
	int x = get_integer();
	int y = get_integer();
	int result = x + y;
	printf("�� ���� �� = %d\n", result);

	return 0;
}

//������ �Է��ϼ��� : 10
//������ �Է��ϼ��� : 20
//�� ���� �� = 30


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer()
{
	int value;
	printf("������ �Է��ϼ���: ");
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

	printf("�� �� �߿��� ū ���� %d�Դϴ�.\n", get_max(a, b));
	return 0;
}

//������ �Է��ϼ��� : 10
//������ �Է��ϼ��� : 20
//�� �� �߿��� ū ���� 20�Դϴ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_integer()
{
	int value;
	printf("������ �Է��ϼ���: ");
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
	printf("%d�� %d���� = %d\n", x, y, result);

	return 0;
}

//������ �Է��ϼ��� : 10
//������ �Է��ϼ��� : 2
//10�� 2���� = 100


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int compute_sum(int n);

int main(void)
{
	int sum;
	sum = compute_sum(100);
	printf("1���� 100������ �� = %d \n", sum);
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
	printf("ȭ���µ� %lf�� �����µ� %lf�� �ش��Ѵ�. \n", f, c);
	return 0;
}

double FtoC(double temp_f)
{
	double temp_c;
	temp_c = (5.0 * (temp_f - 32.0)) / 9.0;
	return temp_c;
}

//ȭ���µ� 32.000000�� �����µ� 0.000000�� �ش��Ѵ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int check_prime(int);

int main(void)
{
	int k;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &k);

	if (check_prime(k) == 1)
		printf("�Ҽ��Դϴ�.\n");
	else
		printf("�Ҽ��Դϴ�.\n");

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

//������ �Է��ϼ��� : 31
//�Ҽ��Դϴ�.


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int compute_sum(int n);

int main(void)
{
	int sum;
	sum = compute_sum(100);
	printf("1���� 100������ �� = %d \n", sum);
	
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
	printf("���� ������ �Է��ϼ���: ");
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
		printf("%d�� �Ҽ����� ������ ǥ�õ� �� �����ϴ�.\n", n);
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

//���� ������ �Է��ϼ���: 33
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

	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &x);

	result = factorial(x);
	printf("%d!�� %d�Դϴ�.\n", x, result);

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

//������ �Է��ϼ��� : 5
//factorial(5)
//factorial(4)
//factorial(3)
//factorial(2)
//factorial(1)
//5!�� 120�Դϴ�.


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
	printf("x�� n�� ���� �Է��ϼ���: ");
	scanf_s("%d %d", &x, &n);

	for (int i = 0; i <= n; i++)
		sum += power(x, i) / factorial(i);

	printf("e^%d = %.3lf\n", x, sum);
	return 0;
}

//x�� n�� ���� �Է��ϼ��� : 2 100
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
	printf("\n **********Welcome to �������� ATM ***********\n");
	printf("<1> �ܰ� Ȯ��\n");
	printf("<2> �Ա�\n");
	printf("<3> ����\n");
	printf("<4> ����\n");
	printf("****�ϳ��� �����Ͻÿ�****\n\n");
}

void checkBalace(int balance)
{
	printf("****�ܰ�� %d�Դϴ�.\n\n", balance);
}

int moneyDeposit(int balance)
{
	int deposit;
	printf("****�Ա� �ݾ��� �Է��ϼ���\n");
	scanf_s("%d", &deposit);

	balance += deposit;
	printf("\n���ο� �ܰ�� %d�Դϴ�.\n\n", balance);

	return balance;
}

int moneyWithdraw(int balance)
{
	int withdraw;
	int back = 1;

	while (back)
	{
		printf("��� �ݾ��� �Է��ϼ���: \n");
		scanf_s("%d", &withdraw);

		if (withdraw < balance)
		{
			back = 0;
			balance -= withdraw;
			printf("\n���ο� �ܰ�� %d�Դϴ�.\n\n", balance);
		}

		else
		{
			printf("\n%d ���Ϸ� �Է��ϼ���.\n\n", balance);
		}
	}
	return balance;
}

void menuExit()
{
	printf("����!!\n");
}

void errorMessage() {
	printf("�����Դϴ�!!\n");
}