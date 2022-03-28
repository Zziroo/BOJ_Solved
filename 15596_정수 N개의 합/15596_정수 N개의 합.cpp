// 15596_정수 N개의 합.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <vector>

using namespace std;

long long sum(vector<int>& a)
{
	long long ans = 0;

	for (size_t i = 0; i < a.size(); ++i)
	{
		ans += a[i];
	}

	return ans;
}

int main()
{
	std::cout << "정수 N개의 합\n";
}