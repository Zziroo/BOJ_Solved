// 2869_달팽이는 올라가고 싶다.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int A;
int B;
int V;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> A >> B >> V;

	int elapsedDate = 0;

	++elapsedDate;

	V -= A;

	int climbDistance = A - B;

	elapsedDate += V / climbDistance;

	if (0 != (V % climbDistance))
	{
		++elapsedDate;
	}

	cout << elapsedDate;
}
