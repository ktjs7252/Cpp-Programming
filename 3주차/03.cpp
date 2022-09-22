#include <iostream>
#include <vector>
#include <string>
#include<cstdlib>
#include<ctime>

using namespace std;

vector<vector<int>> v;

void go_z_find()
{
	for (int i = 0; i < v.size(); i += 2)
	{
		for (int j = 0; j < v[i].size(); j += 2)
		{
			cout << v[i][j] << " ";
			cout << v[i][j + 1] << " ";
			cout << v[i + 1][j] << " ";
			cout << v[i + 1][j + 1] << " ";
			cout << "\n";
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	srand(time(NULL));

	for (int i = 0; i < 4; i++)
	{
		vector<int> tmp;
		for (int j = 0; j < 4; j++)
		{
			tmp.push_back(rand() % 5);
		}
		v.push_back(tmp);
	}

	cout << "2차원 벡터 출력\n";
	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].size(); j++)
		{
			cout << v[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";
	cout << "2차원 벡터 z방향 탐색\n";
	go_z_find();


	return 0;
}
