// 1085_직사각형에서 탈출.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int x;
int y;
int w;
int h;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> x >> y >> w >> h;

	int distanceX = 0;
	int distanceY = 0;

	if (x <= w / 2)
	{
		distanceX = x;
	}
	else
	{
		distanceX = w - x;
	}

	if (y <= h / 2)
	{
		distanceY = y;
	}
	else
	{
		distanceY = h - y;
	}

	int result = distanceX <= distanceY ? distanceX : distanceY;

	cout << result;
}
