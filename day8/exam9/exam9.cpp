// exam9.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int ary[5] = { 10, 20, 30, 40, 50 };
	int *pAry;

	pAry = ary; // pAry�����Ϳ� �迭�� ����.

	for (int i = 0; i < 5; i++) {
		printf("%d %d \,", pAry[i], *(pAry+i));
	}

    return 0;
}

