#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;
int* func(string s, int f[6]) {
	for (int i = 0; i < 6; i++)
		f[i] = 0;
	for (int p = 0; p < s.length(); p++)
	{
		if (s[p] == 'a')
			f[0]++;
		if (s[p] == 'e')
			f[1]++;
		if (s[p] == 'y')
			f[2]++;
		if (s[p] == 'u')
			f[3]++;
		if (s[p] == 'i')
			f[4]++;
		if (s[p] == 'o')
			f[5]++;
	}
}
int main()
{
	int t1[6], t2[6];
	int arr[] = { 4,0,0,1,1,0 };
	int mas[] = { 0,3,0,0,0,3 };
	bool a = true; // bool — логический; Один из 4-х спецификаторов
	func("Nam rak vletel v karman", t1);
	func("Techet rechka pechet pechka", t2);
	for (int i = 0; i < 6; i++)
	{
		if (t1[i] != arr[i] || t2[i] != mas[i])
			a = false;
	}
	if (!a) {
		cout << " Not good :( " << endl;
		return 0;
	}
	else
		cout << " Good :) " << endl;
	system("pause");
	return 0;
}
