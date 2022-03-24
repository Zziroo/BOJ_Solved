// 1546_평균.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

double N;
double arr[1'002];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	double maxScore = 0;

	for (int i = 0; i < N; ++i)
	{
		cin >> arr[i];

		if (maxScore <= arr[i])
		{
			maxScore = arr[i];
		}
	}

	double averageScore = 0;

	for (int i = 0; i < N; ++i)
	{
		arr[i] = (arr[i] / maxScore) * 100;
		averageScore += arr[i];
	}

	averageScore /= N;

	cout << fixed;
	cout.precision(15);
	cout << averageScore;
}
