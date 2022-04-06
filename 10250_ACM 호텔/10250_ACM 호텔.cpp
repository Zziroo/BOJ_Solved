// 10250_ACM 호텔.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int T;
int H;
int W;
int N;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> T;

	for (int i = 0; i < T; ++i)
	{
		cin >> H >> W >> N;

		int x = 0;
		int y = 0;
		int roomNum = 0;

		if (0 == (N % H))
		{
			x = N / H;

			y = H;
		}
		else
		{
			x = (N / H) + 1;

			y = N % H;
		}

		roomNum = (y * 100) + x;

		cout << roomNum << "\n";
	}
}
