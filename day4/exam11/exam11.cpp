// exam11.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	//Exercise 3-2 (87.page) Vitamin �߱���

	int nNum, nAge;
	double dbHitRate;

	printf("���ȣ�� �Է��ϼ���:");  scanf_s("%d",&nNum);
	printf("Ÿ���� �Է��ϼ���:");  scanf_s("%lf",&dbHitRate);
	printf("���̸� �Է��ϼ���:");  scanf_s("%d",&nAge);

	printf("%d�� ������ Ÿ���� %lf, ���̴� %d�Դϴ�.\n", nNum, dbHitRate, nAge);


    return 0;
}

