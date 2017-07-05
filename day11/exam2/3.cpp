#include "stdafx.h"

extern void win32_Printf(HWND, TCHAR *, ...);

void testProc3(HWND hWnd)
{
	static int nCount = 0; //static 으로 선언했기 때문에 함수 밖을 빠져나가도 데이터는 사라지지 않는다. 
	                       //하지만 함수 밖에선 접근 못함.
	double ary[] = { 0.1,0.3,0.5,0.7,0.9 };
	win32_Printf(hWnd,L"%lf",ary[nCount]);
	nCount++;
}