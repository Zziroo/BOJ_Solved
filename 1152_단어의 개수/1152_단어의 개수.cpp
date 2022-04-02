// 1152_단어의 개수.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

char cha[1'000'002];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin.getline(cha, sizeof(cha), '\n');

	bool isWord = false;

	int count = 0;
	int index = 0;

	while ('\0' != cha[index])
	{
		if (' ' != cha[index])
		{
			if (false == isWord)
			{
				isWord = true;

				++count;
			}
		}
		else
		{
			isWord = false;
		}

		++index;
	}

	cout << count;
}
