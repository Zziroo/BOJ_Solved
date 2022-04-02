// 2941_크로아티아 알파벳.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

char cha[102];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> cha;

	int alphabetNum = 0;
	int index = 0;

	while ('\0' != cha[index])
	{
		if ('c' == cha[index])
		{
			if ('=' == cha[index + 1])
			{
				++index;
			}
			else if ('-' == cha[index + 1])
			{
				++index;
			}
		}
		else if ('d' == cha[index])
		{
			if ('z' == cha[index + 1] && '=' == cha[index + 2])
			{
				index += 2;
			}
			else if ('-' == cha[index + 1])
			{
				++index;
			}
		}
		else if ('l' == cha[index])
		{
			if ('j' == cha[index + 1])
			{
				++index;
			}
		}
		else if ('n' == cha[index])
		{
			if ('j' == cha[index + 1])
			{
				++index;
			}
		}
		else if ('s' == cha[index])
		{
			if ('=' == cha[index + 1])
			{
				++index;
			}
		}
		else if ('z' == cha[index])
		{
			if ('=' == cha[index + 1])
			{
				++index;
			}
		}

		++alphabetNum;
		++index;
	}

	cout << alphabetNum;
}