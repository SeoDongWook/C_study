// exam7.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


void dumpBuf(int nBuf[])
{

	for (int i = 0; i < 16; i++) {
		printf("%d", nBuf[i]);
	}
}

int main()
{
	int nBuf[16] = {};
	// int count = 0;

	bool bLoop = true;
	while (bLoop) {
		int nIndex, nValue;
		printf("������ ��ġ�� ���� �Է��ϼ��� :");
		scanf("%d %d", &nIndex, &nValue);

		if (nIndex > 15) bLoop = false; // 15�̻��� �����.

		/*for (int i = 0; i < 1 + count; i++) {
			nBuf[nIndex + (i + 1) + count] = nBuf[nIndex + i + count];
			nBuf[nIndex] = nValue;
			count++;
		}*/ //�������̴���

		for (int i = 15; i > nIndex; i--) {
			
			nBuf[i] = nBuf[i - 1];

		}
		nBuf[nIndex] = nValue;

		dumpBuf(nBuf);

	}

    return 0;
}

