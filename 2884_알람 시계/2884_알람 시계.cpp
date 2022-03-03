// 2884_알람 시계.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int H, M;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> H >> M;

	if (M < 45)
	{
		--H;
		M += 15;

		if (H < 0)
		{
			H = 23;
		}
	}
	else
	{
		M -= 45;
	}

	cout << H << " " << M;
}
