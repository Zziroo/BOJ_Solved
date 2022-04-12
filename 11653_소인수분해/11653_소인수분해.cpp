// 11653_소인수분해.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
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

	if (1 == N)
	{
		return 0;
	}

	for (int i = 2; i <= N; ++i)
	{
		while (0 == N % i)
		{
			cout << i << "\n";

			N /= i;
		}

		if (1 == N)
		{
			break;
		}
	}
}
