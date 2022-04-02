// 5622_다이얼.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

char cha[16];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> cha;

	int index = 0;
	int elapsedTime = 3;
	int totalTime = 0;

	while ('\0' != cha[index])
	{
		int serialNum = cha[index] - 'A';

		if (serialNum >= 18)
		{
			serialNum = serialNum >= 22 ? 22 : serialNum - 1;
		}

		serialNum /= 3;

		totalTime += serialNum + 3;

		++index;
	}

	cout << totalTime;
}
