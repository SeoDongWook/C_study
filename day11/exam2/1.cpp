#include "stdafx.h"

extern void win32_Printf(HWND, TCHAR *, ...);

int addTen(int b)
{
	b += 10;
	return b;
}

void addTen2(int *b) // 여기 사용된 포인터 *b의 주소값은 이후 지워지겠지만 주소에 입력된 값은 남아있게 된다. 이게 포인터의 원리
{
	*b += 10; 
}

void addTen3(int &b)
{
	b += 10;
}

void testProc1(HWND hWnd)
{
	win32_Printf(hWnd, L"testproc1");

	int val_a, c;
	val_a = 5;
	c = addTen(val_a);
	
	win32_Printf(hWnd, L"%d",c);

	addTen2(&c); // 주소값을 넘기기 위해 &c 입력.
	win32_Printf(hWnd, L"%d", c);

	addTen3(c);
	win32_Printf(hWnd, L"%d", c);
}