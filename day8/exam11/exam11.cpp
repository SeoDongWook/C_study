// exam11.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


void getAvg(int *pBuf, int *Avg, int *Rem)
{
	int nSum = 0;
	for (int i = 0; i < 5; i++) {
		nSum += pBuf[i];
	}

	*Avg = nSum / 5;
	*Rem = nSum % 5;
}

int main()
{
	int buf[5] = { 3,5,6,7,8 };

	int nAvg;
	int nRem;

	getAvg(buf, &nAvg, &nRem);

	printf("��� %d, ������ %d\n", nAvg, nRem);

    return 0;
}

