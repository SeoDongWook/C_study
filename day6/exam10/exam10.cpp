// exam10.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


void printSum(int a, int b)
{
	int sum = a + b;
	printf_s("printSum : %d \n", sum);
}


int getSum(int a, int b)
{
	return a + b;
}

int main() // int �Լ��� return ���� �������Ѵ�.
{
	int a, b;
	int sum;

	scanf("%d %d", &a, &b);
	printSum(a, b); //�Լ� ȣ��

	sum = getSum(a, b);

	printf_s("getSum: %d \n", sum);

    return 0;
}

