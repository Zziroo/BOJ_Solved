// 2581_소수.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;

int M;
int N;
vector<int> primes;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> M >> N;

	for (int i = M; i <= N; ++i)
	{
		int count = 0;

		for (int j = 1; j <= i; ++j)
		{
			if (0 == i % j)
			{
				++count;
			}
		}

		if (2 == count)
		{
			primes.push_back(i);
		}
	}

	if (0 == primes.size())
	{
		cout << "-1";

		return 0;
	}

	int sumNum = 0;

	for (size_t i = 0; i < primes.size(); ++i)
	{
		sumNum += primes[i];
	}

	cout << sumNum << "\n" << primes[0];
}
