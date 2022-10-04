#include <iostream>
#include <ctime>
#include <cstdlib>
#include <array>
#include <string>
#include <vector>
#include <ctime>
#include <math.h>

using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//p353 1번
	int num;
	cout << "몇 개의 정수를 입력합니까? ";
	cin >> num;

	int* p = new int[num];

	for (int i = 0; i < num; i++) 
	{
		cout << "정수를 입력하시오 : ";
		cin >> p[i];
	}

	cout << "입력된 정수는: ";
	for (int i = 0; i < num; i++)
	{
		cout << p[i] << ", ";
	}

	//2번

	cout << "얼마나 많은 이름을 입력 하시겠습니까? ";
	cin >> num;

	string* s = new string[num];

	for (int i = 0; i < num; i++) 
	{
		cout << "이름 입력 # " << i + 1 << ": ";
		cin >> s[i];
	}
	cout << "\n";

	cout << "다음은 이름 목록입니다.\n";
	for (int i = 0; i < num; i++) 
	{
		cout << "이름 #" << i + 1 << ": " << s[i] << "\n";
	}
	
	


	return 0;
}
