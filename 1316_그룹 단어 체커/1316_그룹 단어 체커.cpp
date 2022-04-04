// 1316_그룹 단어 체커.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

bool alphabet[26];
char cha[102];
int N;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	int count = 0;

	for (int i = 0; i < N; ++i)
	{
		cin >> cha;

		bool isGroupWord = true;

		int index = 0;
		int prevAlphabetIndex = 0;

		while ('\0' != cha[index])
		{
			int alphabetIndex = cha[index] - 'a';

			if (prevAlphabetIndex != alphabetIndex)
			{
				if (alphabet[alphabetIndex])
				{
					isGroupWord = false;

					break;
				}
			}

			prevAlphabetIndex = alphabetIndex;

			alphabet[alphabetIndex] = true;

			++index;
		}

		if (isGroupWord)
		{
			++count;
		}

		fill_n(cha, 102, '\0');
		fill_n(alphabet, 26, false);
	}

	cout << count;
}
