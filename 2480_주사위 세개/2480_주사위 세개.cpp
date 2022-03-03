// 2480_주사위 세개.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int dice[3];
int sum;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> dice[0] >> dice[1] >> dice[2];

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3 - i - 1; ++j)
		{
			if (dice[j] > dice[j + 1])
			{
				int temp = dice[j];
				dice[j] = dice[j + 1];
				dice[j + 1] = temp;
			}
		}
	}

	if (dice[0] == dice[1])
	{
		if (dice[0] == dice[2])
		{
			sum = 10'000 + (1'000 * dice[0]);
		}
		else
		{
			sum = 1'000 + (100 * dice[0]);
		}
	}
	else
	{
		if (dice[1] == dice[2])
		{
			sum = 1'000 + (100 * dice[2]);
		}
		else
		{
			sum = 100 * dice[2];
		}
	}

	cout << sum;
}
