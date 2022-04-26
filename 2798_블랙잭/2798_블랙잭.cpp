// 2798_블랙잭.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <algorithm>
#include <iostream>

using namespace std;

int N;
int M;
int arr[101];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N >> M;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N);

	int sum = 0;

	for (int i = 0; i < N - 2; ++i)
	{
		for (int j = i + 1; j < N - 1; ++j)
		{
			for (int k = j + 1; k < N; ++k)
			{
				if (arr[i] + arr[j] + arr[k] >= sum && arr[i] + arr[j] + arr[k] <= M)
				{
					sum = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}

	cout << sum;
}
