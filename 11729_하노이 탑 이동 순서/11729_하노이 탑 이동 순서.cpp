// 11729_하노이 탑 이동 순서.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <cmath>
#include <iostream>

using namespace std;

int N;

void Hanoi(int num, int start, int via, int end)
{
	if (1 == num)
	{
		cout << start << " " << end << "\n";
	}
	else
	{
		Hanoi(num - 1, start, end, via);
		cout << start << " " << end << "\n";
		Hanoi(num - 1, via, start, end);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	cout << static_cast<int>(pow(2, N)) - 1 << "\n";
	Hanoi(N, 1, 2, 3);
}
