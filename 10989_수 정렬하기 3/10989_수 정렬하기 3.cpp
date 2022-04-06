// 10989_수 정렬하기 3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;
int arr[10'002];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int temp = 0;

		cin >> temp;

		++arr[temp];
	}

	for (int i = 1; i < 10'001; ++i)
	{
		while (0 != arr[i])
		{
			cout << i << "\n";

			--arr[i];
		}
	}
}
