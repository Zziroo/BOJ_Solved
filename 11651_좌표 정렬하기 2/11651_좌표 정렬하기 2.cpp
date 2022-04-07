// 11651_좌표 정렬하기 2.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N;
vector<pair<int, int>> points;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	points.resize(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> points[i].second >> points[i].first;
	}

	stable_sort(points.begin(), points.end());

	for (int i = 0; i < N; ++i)
	{
		cout << points[i].second << " " << points[i].first << "\n";
	}
}
