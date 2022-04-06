// 2750_수 정렬하기.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;
int arr[1'002];

void SwapNum(int& lhs, int& rhs)
{
	int temp = lhs;
	lhs = rhs;
	rhs = temp;
}

void QuickSort(int arr[], int start, int end)
{
	if (start >= end)
	{
		return;
	}

	int pivot = start;
	int high = pivot + 1;
	int low = end;
	int temp = 0;

	while (high <= low)
	{
		while (high <= end && arr[high] <= arr[pivot])
		{
			++high;
		}

		while (low > start && arr[low] >= arr[pivot])
		{
			--low;
		}

		if (high > low)
		{
			SwapNum(arr[low], arr[pivot]);
		}
		else
		{
			SwapNum(arr[high], arr[low]);
		}
	}

	QuickSort(arr, start, low - 1);
	QuickSort(arr, low + 1, end);
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

	QuickSort(arr, 0, N - 1);

	for (int i = 0; i < N; ++i)
	{
		cout << arr[i] << "\n";
	}
}
