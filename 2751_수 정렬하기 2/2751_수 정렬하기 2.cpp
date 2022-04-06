// 2751_수 정렬하기 2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;
int arr[1'000'002];
int mergeSortArr[1'000'002];

void SwapNum(int& lhs, int& rhs)
{
	int temp = lhs;
	lhs = rhs;
	rhs = temp;
}

void Merge(int arr[], int start, int mid, int end)
{
	int i = start;
	int j = mid + 1;
	int k = start;

	while (i <= mid && j <= end)
	{
		if (arr[i] <= arr[j])
		{
			mergeSortArr[k] = arr[i];
			++i;
		}
		else
		{
			mergeSortArr[k] = arr[j];
			++j;
		}
		++k;
	}

	if (i > mid)
	{
		for (int l = j; l <= end; ++l)
		{
			mergeSortArr[k] = arr[l];
			++k;
		}
	}
	else
	{
		for (int l = i; l <= mid; ++l)
		{
			mergeSortArr[k] = arr[l];
			++k;
		}
	}

	for (int l = start; l <= end; ++l)
	{
		arr[l] = mergeSortArr[l];
	}
}

void MergeSort(int arr[], int start, int end)
{
	int mid = 0;

	if (start < end)
	{
		mid = (start + end) / 2;
		MergeSort(arr, start, mid);
		MergeSort(arr, mid + 1, end);
		Merge(arr, start, mid, end);
	}
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

	MergeSort(arr, 0, N - 1);

	for (int i = 0; i < N; ++i)
	{
		cout << arr[i] << "\n";
	}
}