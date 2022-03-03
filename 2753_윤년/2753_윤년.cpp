// 2753_윤년.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int year;
bool isLeapYear;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> year;

	if ((year % 100) == 0)
	{
		if ((year % 400) == 0)
		{
			isLeapYear = true;
		}
		else
		{
			isLeapYear = false;
		}
	}
	else
	{
		if ((year % 4) == 0)
		{
			isLeapYear = true;
		}
		else
		{
			isLeapYear = false;
		}
	}

	cout << isLeapYear;
}
