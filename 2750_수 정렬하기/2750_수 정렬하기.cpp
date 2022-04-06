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

void InsertionSort(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		int temp = arr[i];

		int j = 0;

		for (j = i - 1; j >= 0 && arr[j] > temp; --j)
		{
			arr[j + 1] = arr[j];
		}

		arr[j + 1] = temp;
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

	InsertionSort(arr, N);

	for (int i = 0; i < N; ++i)
	{
		cout << arr[i] << "\n";
	}
}
