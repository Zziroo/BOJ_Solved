// 1110_더하기 사이클.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	int count = 0;
	int result = N;

	while (true)
	{
		++count;

		int a = 0;
		if (N < 10)
		{
			a = 0;
		}
		else
		{
			a = N / 10;
		}

		int b = N % 10;

		int c = (a + b) % 10;

		N = (b * 10) + c;

		if (result == N)
		{
			break;
		}
	}

	cout << count;
}
