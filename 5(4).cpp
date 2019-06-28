#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void big(string &s)
{
	for (int p = 0; p < s.length(); p++)
	{
		if (s[p] == 'A')
			s[p] = 'a';
		if (s[p] == 'E')
			s[p] = 'e';
		if (s[p] == 'Y')
			s[p] = 'y';
		if (s[p] == 'U')
			s[p] = 'u';
		if (s[p] == 'I')
			s[p] = 'i';
		if (s[p] == 'O')
			s[p] = 'o';
	}

}
int main()
{
	string sa("NAM RAK VLETEL V KARMAN"),sb("TECHET RECHKA PECHET PECHKA");
	big(sa);
	big(sb);
	bool a = false;	if ((sa == "NaM rAk VlEtEl v KaRmAn ") ||(sb=="TeChEt ReChKa pEcHeT pEcHkA"))
		a = true;
	if (!a)
		cout << "ERROR" << endl;
	else
		cout << "Good" << endl;
	system("pause");
	return 0;
}
