// 10818_최소, 최대.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	int min = 1'000'001;
	int max = -1'000'001;

	for (int i = 0; i < N; ++i)
	{
		int temp = 0;
		cin >> temp;

		if (temp <= min)
		{
			min = temp;
		}

		if (temp >= max)
		{
			max = temp;
		}
	}

	cout << min << " " << max;
}