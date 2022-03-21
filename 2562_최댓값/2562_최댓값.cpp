// 2562_최댓값.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int arr[10];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int max = 0;

	for (int i = 0; i < 9; ++i)
	{
		cin >> arr[i];

		if (arr[i] >= max)
		{
			max = arr[i];
		}
	}

	int count = 0;

	for (int i = 0; i < 9; ++i)
	{
		++count;

		if (max == arr[i])
		{
			break;
		}
	}

	cout << max << "\n" << count;
}
