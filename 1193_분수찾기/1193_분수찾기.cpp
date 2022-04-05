// 1193_분수찾기.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int X;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> X;

	int compareNum = 0;
	int count = 0;
	int index = 0;

	while (true)
	{
		++index;
		++count;

		compareNum += count;

		if (X <= compareNum)
		{
			break;
		}
	}

	int gapTwoNum = compareNum - X;
	int modNum = index % 2;

	if (0 == modNum)
	{
		cout << index - gapTwoNum << "/" << 1 + gapTwoNum;
	}
	else
	{
		cout << 1 + gapTwoNum << "/" << index - gapTwoNum;
	}
}
