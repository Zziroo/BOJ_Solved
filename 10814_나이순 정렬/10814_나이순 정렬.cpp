// 10814_나이순 정렬.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N;
vector<pair<int, string>> members;

bool Compare(pair<int, string> lhs, pair<int, string> rhs)
{
	if (lhs.first < rhs.first)
	{
		return true;
	}

	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	members.resize(N);

	for (int i = 0; i < N; ++i)
	{
		cin >> members[i].first >> members[i].second;
	}

	stable_sort(members.begin(), members.end(), Compare);

	for (int i = 0; i < N; ++i)
	{
		cout << members[i].first << " " << members[i].second << "\n";
	}
}
