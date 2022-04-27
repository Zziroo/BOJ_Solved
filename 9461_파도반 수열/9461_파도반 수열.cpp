// 9461_파도반 수열.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int T;
int N;
long long arr[101];

void P(int num)
{
	if (num <= 3)
	{
		arr[num] = 1;
		return;
	}
	else if (num <= 5)
	{
		arr[num] = 2;
		return;
	}

	arr[num] = arr[num - 1] + arr[num - 5];
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> T;

	for (int i = 1; i < 101; ++i)
	{
		P(i);
	}

	for (int i = 0; i < T; ++i)
	{
		cin >> N;

		cout << arr[N] << "\n";
	}
}
