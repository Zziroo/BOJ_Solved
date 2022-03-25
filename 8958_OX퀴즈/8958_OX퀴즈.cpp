// 8958_OX퀴즈.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int testCase;
char test[82];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> testCase;

	for (int i = 0; i < testCase; ++i)
	{
		cin >> test;

		int accrueScore = 0;
		int index = 0;
		int sumScore = 0;

		while ('\0' != test[index])
		{
			if ('O' == test[index])
			{
				sumScore += ++accrueScore;
			}
			else
			{
				accrueScore = 0;
			}

			++index;
		}

		cout << sumScore << "\n";
	}
}
