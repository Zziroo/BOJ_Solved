// 1929_소수 구하기.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int M;
int N;
bool arr[1'000'001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> M >> N;

	for (int i = 2; i <= N; ++i)
	{
		arr[i] = true;
	}

	for (int i = 2; i * i <= N; ++i)
	{
		if (arr[i])
		{
			for (int j = i * i; j <= N; j += i)
			{
				arr[j] = false;
			}
		}
	}

	for (int i = M; i <= N; ++i)
	{
		if (arr[i])
		{
			cout << i << "\n";
		}
	}
}
