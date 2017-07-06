#include "stdafx.h"
#include "../../engine/utils.h"

void swapString(TCHAR **str1,TCHAR **str2)
{
	TCHAR *szTemp;

	szTemp = *str1;
	*str1 = *str2;
	*str2 = szTemp;
}

//���ڿ� ��� �Լ�
void aryPrintf(HWND hWnd, TCHAR **ary, int nCount)
{
	int i;
	for (int i = 0; i < nCount; i++)
	{
		win32_Printf(hWnd, L"%s", ary[i]);

	}
}
void procTest5(HWND hWnd)
{
	int val = 100;
	int *ip = &val;
	int **ipp = &ip;
	int ***ippp = &ipp;

	
	win32_Printf(hWnd, L"%d %d / %d", val, *ip,*ipp);
	win32_Printf(hWnd, L"%d / %d", ip, ipp);
	win32_Printf(hWnd, L"%d %d / %d", *ippp, **ippp, ***ippp);

	TCHAR *szStr[2] = {
		L"�ȳ��ϼ���.", L"���� ����� �Դϴ�."
	};

	win32_Printf(hWnd, L"%s %s", szStr[0], szStr[1]);
	swapString(&szStr[0], &szStr[1]);


	/* // ���ڿ� ���� �ٲٱ�
	TCHAR *szTemp;

	szTemp - szStr[0];
	szStr[0] = szStr[1];
	szStr[1] = szStr[0]; */

	
	win32_Printf(hWnd, L"%s %s", szStr[0], szStr[1]);

	TCHAR *ptr_ary[] = { L"����",L"��",L"Ƽ���",L"������",L"�Ƹ�������" };

	aryPrintf(hWnd,ptr_ary,sizeof(ptr_ary)/sizeof(ptr_ary[0]));
}