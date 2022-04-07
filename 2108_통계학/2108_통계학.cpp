// 2108_통계학.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <cmath>
#include <iostream>

using namespace std;

int N;
int arr[500'002];
int countArr[8'002];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	int mean = 0;
	int median = 0;
	int mode = 0;
	int range = 0;

	int sumNum = 0;

	int temp = 0;

	for (int i = 0; i < N; ++i)
	{
		cin >> temp;

		sumNum += temp;

		++countArr[4'000 + temp];
	}

	mean = round((double)sumNum / N);

	int flag = 0;
	int maxFrequency = 0;

	for (int i = 0; i < 8002; ++i)
	{
		if (countArr[i] > maxFrequency)
		{
			maxFrequency = countArr[i];

			flag = i;
		}
	}

	for (int i = flag + 1; i < 8002; ++i)
	{
		if (maxFrequency == countArr[i])
		{
			flag = i;

			break;
		}
	}

	mode = flag - 4000;

	int index = 0;

	for (int i = 0; i < 8002; ++i)
	{
		while (0 != countArr[i])
		{
			arr[index] = i - 4000;

			++index;

			--countArr[i];
		}
	}

	median = arr[N / 2];

	int minNum = arr[0];
	int maxNum = arr[N - 1];

	range = maxNum - minNum;

	cout << mean << "\n";

	cout << median << "\n";

	cout << mode << "\n";

	cout << range;
}
