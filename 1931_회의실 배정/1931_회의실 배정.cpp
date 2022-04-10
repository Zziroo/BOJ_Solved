// 1931_회의실 배정.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N;
vector<pair<int, int>> conferences;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	conferences.resize(N);

	int start = 0;
	int end = 0;

	for (int i = 0; i < N; ++i)
	{
		cin >> start >> end;

		conferences[i].first = end;
		conferences[i].second = start;
	}

	sort(conferences.begin(), conferences.end());

	int elapsedTime = 0;
	int result = 0;

	for (int i = 0; i < N; ++i)
	{
		if (elapsedTime <= conferences[i].second)
		{
			elapsedTime = conferences[i].first;
			++result;
		}
	}

	cout << result;
}
