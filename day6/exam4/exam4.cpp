// exam4.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int nIndex = 0;
	int result = 0;
	while (nIndex <= 100) {

		if ((nIndex % 2) != 0) {
			printf_s("%d\n", nIndex);
			result += nIndex;
		}
	
		nIndex++;
	}
	printf_s("1~100 �� Ȧ������ �� ����  %d  �Դϴ�.",result);

    return 0;
}

