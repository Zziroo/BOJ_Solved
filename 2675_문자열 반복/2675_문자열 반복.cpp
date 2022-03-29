// 2675_문자열 반복.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int T;
int R;
char cha[22];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		cin >> R >> cha;

		int index = 0;

		while ('\0' != cha[index])
		{
			for (int j = 0; j < R; ++j)
			{
				cout << cha[index];
			}

			++index;
		}

		cout << "\n";
	}
}
