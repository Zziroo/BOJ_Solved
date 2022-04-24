// 2447_별 찍기 - 10.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;

void PrintStar(int row, int column, int num)
{
	if (1 == (row / num) % 3 && 1 == (column / num) % 3)
	{
		cout << " ";
	}
	else
	{
		if (0 == num / 3)
		{
			cout << "*";
		}
		else
		{
			PrintStar(row, column, num / 3);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	for (int row = 0; row < N; ++row)
	{
		for (int column = 0; column < N; ++column)
		{
			PrintStar(row, column, N);
		}

		cout << "\n";
	}
}