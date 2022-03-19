// 10871_X보다 작은 수.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;
int X;
int arr[10'002];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N >> X;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N; ++i)
	{
		if (arr[i] < X)
		{
			cout << arr[i] << " ";
		}
	}
}
