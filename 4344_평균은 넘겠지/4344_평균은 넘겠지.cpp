// 4344_평균은 넘겠지.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int C;
int score[1'002];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> C;

	for (int i = 0; i < C; ++i)
	{
		int N;
		
		cin >> N;

		float averageScore = 0;
		
		for (int j = 0; j < N; ++j)
		{
			cin >> score[j];

			averageScore += score[j];
		}

		averageScore /= (float)N;

		int count = 0;

		for (int j = 0; j < N; ++j)
		{
			if (score[j] > averageScore)
			{
				++count;
			}
		}

		float aboveHalfClassAverage = ((float)count / (float)N) * 100;

		cout<<fixed;
		cout.precision(3);
		cout << aboveHalfClassAverage << "%\n";

		for (int j = 0; j < N; ++j)
		{
			score[j] = 0;
		}
	}
}
