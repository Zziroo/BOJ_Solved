// 11047_동전 0.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;

int N;
int K;
vector<int> coins;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N >> K;

	coins.resize(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> coins[i];
	}

	int index = coins.size() - 1;
	int minCoinNum = 0;

	while (K > 0)
	{
		if (K - coins[index] >= 0)
		{
			K -= coins[index];
			++minCoinNum;
		}
		else
		{
			--index;
		}
	}

	cout << minCoinNum;
}
