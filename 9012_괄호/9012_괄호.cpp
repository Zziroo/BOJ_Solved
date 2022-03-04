// 9012_괄호.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stack>

using namespace std;

int N;
stack<char> vps;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	cin >> N;

	for (int i = 0; i < N; ++i)
	{
		string str;
		cin >> str;

		// 입력 받은 문자열 스택에 저장
		for (auto it = str.begin(); it != str.end();)
		{
			vps.push(str.back());
			str.pop_back();
		}

		// VPS인지 확인하기 위한 변수
		int sum = 0;
		// 체크 변수
		bool isCheckedVPS = false;
		for (size_t i = 0; i < vps.size();)
		{
			char cha = vps.top();
			vps.pop();
			
			if (sum < 0)
			{
				isCheckedVPS = false;
				break;
			}

			if (cha == '(')
			{
				sum += 1;
			}
			else if (cha == ')')
			{
				sum -= 1;
			}
		}

		// sum == 0 일 때만 VPS
		if (sum == 0)
		{
			isCheckedVPS = true;
		}
		else
		{
			isCheckedVPS = false;
		}

		// 출력
		if (isCheckedVPS)
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}

		// 나머지 스택 제거
		for (size_t i = 0; i < vps.size();)
		{
			vps.pop();
		}
	}
}
