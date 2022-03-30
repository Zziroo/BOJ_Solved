// 1157_단어 공부.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

char result;
char cha[1'000'002];
int alphabet[28];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> cha;

	int index = 0;

	while ('\0' != cha[index])
	{
		int temp = 0;

		if (cha[index] - 'A' <= 25)
		{
			temp = cha[index] - 'A';
		}
		else
		{
			temp = cha[index] - 'a';
		}

		++alphabet[temp];
		++index;
	}

	int maxCount = 0;

	for (int i = 0; i < 26; ++i)
	{
		if (alphabet[i] > maxCount)
		{
			maxCount = alphabet[i];

			result = i + 'A';
		}
	}

	int sameMaxCount = 0;

	for (int i = 0; i < 26; ++i)
	{
		if (maxCount == alphabet[i])
		{
			++sameMaxCount;

			if (2 == sameMaxCount)
			{
				cout << "?";
				return 0;
			}
		}
	}

	cout << result;
}
