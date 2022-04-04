// 2292_벌집.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int N;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	int count = 0;
	int compareNum = 1;
	int order = 0;

	while (true)
	{
		++count;

		compareNum += 6 * order;

		if (N <= compareNum)
		{
			break;
		}

		++order;
	}

	cout << count;
}