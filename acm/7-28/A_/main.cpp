#include <iostream>
#include <string>
using namespace std;
int t_find(const string &s, char a)
{
	for (int i = 0; i<s.size(); ++i)
	{
		if (s[i] == a)
			return i;
	}
}
string post_order(string q, string z)
{
	if (q.size() == 0 || z.size() == 0)
	{
		return q + z;
	}
	else
	{
		char root = q[0];
		int index = t_find(z, root);
		string l_z = string(z.begin(), z.begin() + index);
		string r_z = string(z.begin() + index + 1, z.end());
		string l_q = string(q.begin() + 1, q.begin() + l_z.size() + 1);
		string r_q = string(q.begin() + l_z.size() + 1, q.end());

		return post_order(l_q, l_z) + post_order(r_q, r_z) + root;
	}


}
int main()
{
	string q, z;
	while (cin >> q >> z)
	{
		cout << post_order(q, z) << endl;
	}
	return 0;
}
