// 1181_단어 정렬.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int N;
string word;
vector<pair<int, string>> words;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		cin >> word;

		int count = 0;

		for (size_t j = 0; j < word.length(); ++j)
		{
			++count;
		}

		words.emplace_back(make_pair(count, word));
	}

	stable_sort(words.begin(), words.end());

	string str;

	for (size_t i = 0; i < words.size(); ++i)
	{
		if (str != words[i].second)
		{
			cout << words[i].second << "\n";

			str = words[i].second;
		}
	}
}