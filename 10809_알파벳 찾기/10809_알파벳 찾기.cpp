// 10809_알파벳 찾기.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

char cha[102];

int alphabet[26];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	fill_n(alphabet, 26, -1);

	cin >> cha;

	int index = 0;

	while ('\0' != cha[index])
	{
		int alphaIndex = cha[index] - 'a';

		if (-1 != alphabet[alphaIndex])
		{
			++index;

			continue;
		}

		alphabet[alphaIndex] = index;

		++index;
	}

	for (int i = 0; i < 26; ++i)
	{
		cout << alphabet[i] << " ";
	}
}
