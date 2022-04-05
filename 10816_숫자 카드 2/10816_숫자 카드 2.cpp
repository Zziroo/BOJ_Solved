// 10816_숫자 카드 2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <algorithm>
#include <iostream>

using namespace std;

int N;
int M;
int arr[500'002];

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

	int temp = 0;

	for (int i = 0; i < M; ++i)
	{
		cin >> temp;

		cout << upper_bound(arr, arr + N, temp) - lower_bound(arr, arr + N, temp) << " ";
	}


}