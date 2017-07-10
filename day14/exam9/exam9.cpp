// exam9.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
enum season
{
	spring, summer, fall, winter
};


int main()
{
	season ss;
	ss = spring;
	int test = fall;

	printf("%d \n", ss);
	printf("%d \n", test+3);

    return 0;
}

