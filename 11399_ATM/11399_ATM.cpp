// 11399_ATM.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <algorithm>
#include <iostream>

using namespace std;

int N;
int P[1'000];

int main()
{
	ios_base::sync_with_stdio(false);
	cout.tie(nullptr);
	cin.tie(nullptr);

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> P[i];
	}

	sort(P, P + N);

	int totalTime = 0;

	for (int i = 0; i < N; ++i)
	{
		totalTime += (N - i) * P[i];
	}

	cout << totalTime;
}
