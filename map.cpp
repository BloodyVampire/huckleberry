#include"map.h"
string toJsonArray(vector<string>& a)
{
	string res = "[";
	for (int i = 0; i < int(a.size()); ++i)
	{
		res += a[i];
		if (i + 1 < int(a.size()))
			res += ",";
	}
	res += "]";
	return res;
}
int main(int argv, char** argc)
{
	ifstream in;
	in.open(argc[1]);
	ofstream out;
	out.open(argc[2]);
	string s;
	Address addr;
	vector<string> res;
	while (infile >> s)
	{
		addr = s;
		res.push_back(addr.toJson());
	}
	out << toJsonArray(res);
	in.close();
	out.close();
	return 0;
}