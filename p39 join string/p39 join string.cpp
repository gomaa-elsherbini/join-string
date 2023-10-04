#include <iostream>
#include <string>
#include <vector>
using namespace std;


string joinString(vector <string> vString, string delim)
{
	string s = "";
	for (int i = 0; i < vString.size(); i++)
	{
		if (i < vString.size()-1)
			s += vString[i] + delim;
		else
			s += vString[i];
	}
	return s;
}

int main()
{
	vector <string> vString = { "Mohammad", "Fadi", "Ali", "Maherr", "Gomaa", "sayed"};
	
	cout << joinString(vString, " | ");


	system("pause>0");
	return 0;

}