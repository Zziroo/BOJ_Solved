// 14681_사분면 고르기.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int x, y;
int quadrant;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> x;
	cin >> y;

	if (x > 0)
	{
		if (y > 0)
		{
			quadrant = 1;
		}
		else
		{
			quadrant = 4;
		}
	}
	else
	{
		if (y > 0)
		{
			quadrant = 2;
		}
		else
		{
			quadrant = 3;
		}
	}

	cout << quadrant;
}
