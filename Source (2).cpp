#include "Pair.h"

int main()
{
	system("color F0");
	system("chcp 1251 >> null");

	Pair a, b;

	cout << "input a:\n";  cin >> a; 
	cout << "_____________________________________________________________\n";
	cout << "\n" << setw(20) << "\"output a\": " << setw(7) << a << endl;
	cout << "_____________________________________________________________\n";

	cout << "\ninput b:\n";  cin >> b;
	cout << "_____________________________________________________________\n";
	cout << "\n" << setw(20) << "\"output b\": " << setw(7) << b << endl;
	cout << "_____________________________________________________________\n";


	cout << "\n" << setw(20) << "\"output a = a - b\": " << setw(7) << "a = " << a << " - " << b << " == ";
	a = a - b;
	cout << a << endl;
	cout << "_____________________________________________________________\n";

	cout << "\n" << setw(20) << "\"output a++\": " << setw(7) << a++ << endl;
	cout << "\n" << setw(20) << "\"output a\": " << setw(7) << a << endl;
	cout << "_____________________________________________________________\n";

	cout << "\n" << setw(20) << "\"output a + 3\": " << setw(7) << a + 3 << endl;
	cout << "\n" << setw(20) << "\"output a\": " << setw(7) << a << endl;
	cout << "_____________________________________________________________\n";

	cout << "\n" << setw(20) << "\"output a + 2.5\": " << setw(7) << a + 2.5 << endl;
	cout << "\n" << setw(20) << "\"output a\": " << setw(7) << a << endl;
	cout << "_____________________________________________________________\n";

	cout << "\n" << setw(20) << "\"output a = b + 3\": " << setw(7) << "a = " << b << " + " << 3 << " == ";
	a = b + 3;
	cout << a << endl;
	cout << "_____________________________________________________________\n";

	return 0;
}