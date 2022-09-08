#include <iostream>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b, sum,answer;
	char word;
	cout << "산수 문제를 자동으로 출제합니다.\n";
	cin >> a >> b;
	cout << "연산자 입력하기(+, -, *, /)\n";
	cin >> word;
	cout << "결과 입력하기\n";
	cin >> answer;

	if (word == '+')
	{
		sum = a + b;
	}
	else if (word == '-')
	{
		sum = a - b;
	}
	else if (word == '*')
	{
		sum = a*b;
	}
	else if (word == '/')
	{
		sum = a / b;
	}

	if (answer == sum)
	{
		cout << "맞았습니다.\n";
	}
	else
	{
		cout << "틀렸습니다.\n";
	}
	



	
	
	return 0;
}
