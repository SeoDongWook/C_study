// exam3.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int ary[] = { 2,8,15,1,8,5,19,19,3,5,6,6,2,8,2,12 };

	int nNum;
	int count=0;

	printf("���ϴ� ���ڸ� �Է�:"); scanf("%d", &nNum);

	for (int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++) {
		if (nNum == ary[i])
			count++;
	}
	printf("�Է��� ����%d�� ������ %d �� �Դϴ�.\n", nNum,count); 

    return 0;
}

