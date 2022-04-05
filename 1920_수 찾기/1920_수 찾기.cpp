// 1920_수 찾기.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <algorithm>
#include <iostream>

using namespace std;

int N;
int M;
int arr[100'002];

bool BinarySearch(int arr[], int size, int target)
{
	int start = 0;
	int end = size - 1;

	while (start <= end)
	{
		int pivot = (start + end) / 2;

		if (target == arr[pivot])
		{
			return true;
		}
		else if (arr[pivot] < target)
		{
			start = pivot + 1;
		}
		else
		{
			end = pivot - 1;
		}
	}

	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N);

	cin >> M;

	int compareNum = 0;

	for (int i = 0; i < M; ++i)
	{
		cin >> compareNum;

		cout << BinarySearch(arr, N, compareNum) << "\n";
	}
}
