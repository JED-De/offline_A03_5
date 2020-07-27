#include <iostream>
using namespace std;

int main()
{
	char eingabe;
	cout << "Bitte geben Sie das Zeichen ein: ? ";
	cin >> eingabe;

	if (int(eingabe) >= int('a') && int(eingabe) <= int('z'))
	{
		cout << "Es wurde ein Kleinbuchstabe (a-z) eingegeben." << endl;
	}
	else
	{
		cout << "KEIN Kleinbuchstabe (a-z)." << endl;
	}

	system("PAUSE");
	return 0;
}