// exam4.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


int main()
{
	int ary[] = { 2,8,15,1,8,10,5,19,19,3,5,6,6,2,8,2,12 };
	int count[20] = { 0 }; //0���� �ʱ�ȭ 

	/*for (int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++) {
		for (int j = 0; j < sizeof(ary) / sizeof(ary[0]); j++) {
			if (i + 1 == ary[j])
				count[i]++;
		}
		printf("%d = %d ��\n",i + 1, count[i]);
	}*/

	/* for (int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++) {
		for (int j = 0; j < sizeof(ary) / sizeof(ary[0]); j++) {
			if (count[j+1] == ary[j])
				count[i]++;
		}

	}*/

	for (int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++) {
		printf("%d", ary[i]);
		count[ary[i] - 1]++;
	}
	printf("\n");
	for (int i = 0; i < 20; i++) {
		printf("%d = %d��\n", i + 1, count[i]);
	}

    return 0;
}

