#include <vector>  
#include <list>  
#include <map>  
#include <set>  
#include <deque>  
#include <queue>  
#include <stack>  
#include <bitset>  
#include <algorithm>  
#include <functional>  
#include <numeric>  
#include <utility>  
#include <complex>  
#include <sstream>  
#include <iostream>  
#include <iomanip>  
#include <cstdio>  
#include <cmath>  
#include <cstdlib>  
#include <cstring>  
#include <ctime>  
#include <cassert>  
using namespace std;
struct node   //节点类型
{
	int value;
	node *left;
	node *right;
	node() :left(NULL), right(NULL) {}
};
int key1 = 0, key2 = 0, key3 = 0;
node *newnode() { return new node(); }
void delet_tree(node *u)
{
	if (u == NULL)
		return;
	else
	{
		delet_tree(u->left);
		delet_tree(u->right);
		delete u;
	}
}
void addnode(int value, node *root)
{
	node * u = root;
	while (true)
	{
		if (value < u->value)
		{
			if (u->left == NULL)
			{
				u->left = newnode();
				u = u->left;
				u->value = value;
				return;
			}
			else
			{
				u = u->left;
			}
		}
		else
		{
			if (u->right == NULL)
			{
				u->right = newnode();
				u = u->right;
				u->value = value;
				return;
			}
			else
			{
				u = u->right;
			}
		}
	}
}
void preorder(node *root)
{
	if (root == NULL)
	{
		return;
	}
	else
	{
		if (key1 == 0)
		{
			cout << root->value;
			++key1;
		}
		else
			cout << ' ' << root->value;
		preorder(root->left);
		preorder(root->right);
	}
}

void inorder(node *root)
{
	if (root == NULL)
	{
		return;
	}
	else
	{
		inorder(root->left);
		if (key2 == 0)
		{
			cout << root->value;
			++key2;

		}
		else
		{
			cout << ' ' << root->value;
		}
		inorder(root->right);
	}

}

void postorder(node *root)
{
	if (root == NULL)
	{
		return;
	}
	else
	{
		postorder(root->left);
		postorder(root->right);
		if (key3 == 0)
		{
			cout << root->value;
			++key3;

		}
		else
			cout << ' ' << root->value;
	}

}

int main()
{
	int t = 0;
	cin >> t;
	while (t--)
	{
		int N = 0;
		key1 = 0;
		key2 = 0;
		key3 = 0;
		cin >> N;
		node *root = newnode();
		int temp = 0;
		cin >> temp;
		root->value = temp;
		for (int i = 1; i < N; ++i)
		{
			cin >> temp;
			addnode(temp, root);
		}
		preorder(root);
		cout << endl;
		inorder(root);
		cout << endl;
		postorder(root);
		cout << endl << endl;
		delet_tree(root);

	}
	return 0;
}