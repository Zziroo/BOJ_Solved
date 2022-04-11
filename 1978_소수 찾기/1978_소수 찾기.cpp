// 1978_소수 찾기.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;
int result;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int num = 0;

		cin >> num;

		int count = 0;

		for (int j = 1; j <= num; ++j)
		{
			if (0 == num % j)
			{
				++count;
			}
		}

		if (2 == count)
		{
			++result;
		}
	}

	cout << result;
}
