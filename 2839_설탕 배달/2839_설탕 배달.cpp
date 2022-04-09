// 2839_설탕 배달.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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

	int a = 0;
	int b = 0;

	a = N / 5;

	while (true)
	{
		if (a < 0)
		{
			cout << "-1";

			return 0;
		}

		if (0 == (N - (a * 5)) % 3)
		{
			b = (N - (a * 5)) / 3;

			break;
		}

		--a;
	}

	cout << a + b;
}
