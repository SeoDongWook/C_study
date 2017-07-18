// exam3.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"


int main()
{
	int ary[5] = { 10,20,30,40,50 };
	int *ap = ary;
	
	printf("%d \n", *(ary + 1));

	printf("%d \n", *(ap + 1));
	ap = ap + 1;  // 포인터배열은 읽기 쓰기가 모두 가능하다.
	printf("%d \n", *(ap + 1));

	//ary = ary +1;    배열명은 읽기전용이라 쓰기를 할 수 없다.  ----> **포인터배열과 그냥 배열명의 유일한 차이점
    return 0;
}

