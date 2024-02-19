#include <iostream>
#include <fstream>
#include "NA_voting.h"
#include "PA_voting.h"
#include "voter_details.h"
using namespace std;

void number(int digits);
void sms_v();

int main()
{
	National_Assembly na;
	provisional_Assembly pa;
	voter v;
	int option, confirm;
	cout << "     WELCOME \n** ELECTION'S 2024 **" << endl;
	do {
		cout << "\nEnter\n1.NATIONAL ASSEMBLY CANDIDATES \n2.PROVISIONAL ASSEMBLY CANDIDATES \n3.VOTE FOR CANDIDATES \n4.8300 SMS";
		cin >> option;
		switch (option)
		{
		case 1:
			menu_provinces_na(na);
			break;
		case 2:
			menu_provinces_pa(pa);
			break;
		case 3:
			menu_v(v);
			break;
		case 4:
			sms_v();
			break;

		default:
			cout << "OOPS! Invalid Operation selected.";
			break;
		}

		cout << "\nEnter The 0 to Terminate Programme (1) to continue.";
		cin >> confirm;
	} while (confirm != 0);

	return 0;
}
void number(int digits)
{
	for (int i = 0; i < digits; ++i)
	{
		int numbers = rand() % 9 + 1;
		cout << numbers;
	}
}
void sms_v()
{
	long long int nic;
	int block = 0, na = 0, pa = 0, seriel = 0;
	cout << "\nENTER CINIC TO SEE VOTE DETAILS." << endl;
	cin >> nic;

	cout << "\nSeriel Number : "; number(4);
	cout << "\nBlock CODE : "; number(4);
	cout << "\nGAHRANA NUMBER : "; number(3);
	cout << "\nNA Constituency Number : "; number(2);
	cout << "\nPA Constituency Number : "; number(3);
}