// exam9.cpp : �ܼ� ���� ���α׷��� ���� �������� �����մϴ�.
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

