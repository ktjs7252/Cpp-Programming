#include <iostream>
#include <vector>
#include <string>

using namespace std;

int countdigit(vector<int> num)
{
	return num.size();
}
int countdigit(string s)
{
	vector<int> v;
	for (int i = 0; i < s.size(); i++)
	{
		v.push_back(stoi(s.substr(i,1)));
	}
	return countdigit(v);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> arr = { 1,2,3,4,5 };
	string s = "12345";

	cout << "숫자 12345의 자릿수는? " << countdigit(arr)<<"\n";
	cout << "문자열 12345의 자릿수는 ? " << countdigit(s) << "\n";



	return 0;
}
