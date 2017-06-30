// exam11.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
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

	printf("평균 %d, 나머지 %d\n", nAvg, nRem);

    return 0;
}

