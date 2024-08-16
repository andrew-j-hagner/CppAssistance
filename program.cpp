#include <iostream>

using namespace std;

int main()
{
	const double RATE_2 = .10;
	const double RATE_3 = .20;

	int TITHE_2 = 0;
	int TITHE_3 = 0;

	double income;
	cout << "Please enter your income:" << endl;
	cin >> income;
	cout << "Thank you!" << endl;

	if (income <= 40000)
	{
		cout << "No tithes suggested, thank you for your support and please pray for us!" << endl;
	}
	else if (income <= 80000)
	{
		TITHE_2 = RATE_2 * income;
		cout << "Your total suggested tithe for the year is" << " " << TITHE_2 << endl;
		cout << "Thank you for your donation!" << endl;
	}
	else
	{
		TITHE_3 = RATE_3 * income;
		cout << "Your total suggested tithe for the year is" << " " << TITHE_3 << endl;
		cout << "Thank you for your donation!" << endl;
	}

	return 0;
}