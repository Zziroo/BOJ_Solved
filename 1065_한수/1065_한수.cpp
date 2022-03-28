// 1065_한수.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;
int countNum;

void CheckArithmeticSequence(int num)
{
	if (num < 100)
	{
		++countNum;
		return;
	}
	else
	{
		int checkNum = num;
		int index = 0;
		int arr[4] = { 0 };

		while (true)
		{
			arr[index] = checkNum % 10;

			if (checkNum < 10)
			{
				break;
			}

			checkNum /= 10;

			++index;
		}

		int arithmeticNum = arr[1] - arr[0];

		for (int i = 1; i < index; ++i)
		{
			if (arr[i] + arithmeticNum != arr[i + 1])
			{
				return;
			}
		}

		++countNum;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	for (int i = 1; i <= N; ++i)
	{
		CheckArithmeticSequence(i);
	}

	cout << countNum;
}
