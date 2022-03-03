// 9498_시험 성적.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

using namespace std;

int grade;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> grade;

	if (grade >= 90)
	{
		cout << "A";
	}
	else if (80 <= grade && grade < 90)
	{
		cout << "B";
	}
	else if (70 <= grade && grade < 80)
	{
		cout << "C";
	}
	else if (60 <= grade && grade < 70)
	{
		cout << "D";
	}
	else
	{
		cout << "F";
	}
}
