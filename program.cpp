#include <iostream>

using namespace std;

int main()
{
	const double RATE_1 = 0;
	const double RATE_2 = .10;
	const double RATE_3 = .20;

	int TITHE_1;
	int TITHE_2;
	TITHE_1 = 0;
	TITHE_2 = 0;

	double income;
	cout << "Please enter your income:" << endl;
	cin >> income;

	cout << "Thank you!";

	if (income <= 45000)
	{
		cout << "No tithes suggested, thank you for your support and please pray for us!";
	}
	else (income >= 80000);

		TITHE_2 = RATE_2 * income;
		cout << "Your total suggested tithe for the year is" << " " << TITHE_2 << endl;
		cout << "Thank you for your donation!";

		return 0;
}