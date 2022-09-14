#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	char board[5][5];
	int x, y;

	std::fill(&board[0][0], &board[3][3], ' ');

	for (int i = 0; i < 9; i++)
	{
		cout << "(x,y) 좌표 :";
		cin >> x >> y;
		board[x][y] = (i % 2 == 0) ? 'X' : 'O';

		for (int a = 0; a < 3; a++)
		{
			cout << "---|---|---\n";
			for (int b = 0; b < 3; b++)
			{
				cout << board[a][b];
				if (b == 2) {
					cout << "\n"; continue;
				}
				cout <<"  |";
			}
		}
		cout << "---|---|---\n";

	}


	return 0;
}
