// exam8.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
//

#include "stdafx.h"


void dumpBuf(int nBuf[],int nSize)
{
	for (int i = 0; i < nSize; i++) {
		printf("%d ", nBuf[i]);
	}
}


int main()
{
	int nBuf[] = {1,2,3,4,5,6,7,8,};
	int nBufSize = sizeof(nBuf) / sizeof(nBuf[0]);
	int num = nBufSize;

	dumpBuf(nBuf, nBufSize);

	bool bLoop = true;
	while (bLoop) {

		int nIndex;
		printf("������ ��ġ�� �Է��ϼ��� :");
		scanf("%d", &nIndex);

		for (int i = nIndex; i < nBufSize; i++) {
			nBuf[i - 1] = nBuf[i];
		}
		nBuf[--num] = 0;

		dumpBuf(nBuf, nBufSize);

	}

    return 0;
}

