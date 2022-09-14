#include <iostream>
#include <string>
#include <vector>

using namespace std;

int cnt[26] = { 3,2,1,2,4,3,1,3,1,1,3,1,3,2,1,2,2,2,1,2,1,1,1,2,2,1 };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string person1, person2;
	cin >> person1 >> person2;

	string gunghab="";  
	// 이름의 길이가 같지 않다면 남은 알파벳의 위치가 정해지지 않았으므로
	// 이름의 길이가 같다는 가정
	for (int i = 0; i < person1.size(); i++)
	{
		gunghab += person1[i];
		gunghab += person2[i];
	}

	vector<int> v;

	for (int i = 0; i < gunghab.size(); i++)
	{
		v.push_back(cnt[gunghab[i] - 65]);
		cout << v[i]<<" ";
	}
	cout << "\n";

	while (1)
	{
		vector<int> tmp;
		if (v.size() == 2)
		{
			break;
		}
		for (int i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
			if (i == v.size() - 1) break;

			int idx = v[i] + v[i + 1];
			if (idx >= 10) idx -= 10;
			tmp.push_back(idx);
			
		}
		cout << "\n";
		v.clear();
		v = tmp;
	}

	cout << v[0] << v[1]<<"%";

	return 0;
}
