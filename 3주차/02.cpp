#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef struct node {
	int data;
	node* left;
	node* right;
};

void inorder(node *t) //중위
{
	
	if (t->left != NULL)
	{
		inorder(t->left);
	}
	cout << t->data << " ";
	if (t->right != NULL)
	{
		inorder(t->right);
	}
}

void postorder(node* t) //후위
{

	if (t->left != NULL)
	{
		postorder(t->left);
	}
	if (t->right != NULL)
	{
		postorder(t->right);
	}
	cout << t->data << " ";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	node nodes[16];
	vector<int> v = {
		0,1,5,
		1,2,3,
		3,-1,4,
		5,6,8,
		6,-1,7,
		8,9,-1
	};

	for (int i = 0; i < 10; i++)
	{
		nodes[i].data = i;
		nodes[i].left = NULL;
		nodes[i].right = NULL;
	}

	for (int i = 0; i < v.size(); i += 3)
	{
		if (v[i + 1] != -1) {
			nodes[v[i]].left = &nodes[v[i + 1]];
		}
		if (v[i + 2] != -1) {
			nodes[v[i]].right = &nodes[v[i + 2]];
		}
	}

	
	inorder(&nodes[0]);
	cout << "\n";
	postorder(&nodes[0]);



	
	return 0;
}
