
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <array>
#include <string>
#include <vector>
#include <ctime>
#include <math.h>

using namespace std;

inline double calc_volume(double radius)
{
	double result;
	result = (4.0 / 3.0 * 3.14 * pow(radius, 3));
	return result;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//160p 2번
	 
	double input, volume;

	cout << "반지름을 입력하시오: ";
	cin >> input;

	volume = calc_volume(input);

	cout << "구의 부피는 " << volume << "\n";




	//9번

	int a = rand() % 6;
	int b = rand() % 6;
	int result=a+b;

	cout << "사용자의 주사위: " << a << "+" << b << "=" << result;
	cout << "\n";

	if (result == 7 || result == 11)
	{
		cout << "사용자가 이겼습니다." << "\n";
	}
	else if (result == 2 || result == 3 || result == 12)
	{
		cout << "사용자가 졌습니다." << "\n";
	}
	
	

	//13번

	string s;

	cout << "암호를 입력하시오 : ";
	cin >> s;
	int big = 0, small = 0, num = 0;

	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z') {
			small = 1;
		}
		if (s[i] >= 'A' && s[i] <= 'Z') {
			big = 1;
		}
		if (s[i] >=48 && s[i] <=57) {
			num = 1;
		}
	}
	
	if (big == 1 && small == 1 && num == 1)
	{
		cout << "안전합니다\n";
	}
	else {
		cout << " 안전하지 않습니다.\n";
	}
	

	return 0;
}
