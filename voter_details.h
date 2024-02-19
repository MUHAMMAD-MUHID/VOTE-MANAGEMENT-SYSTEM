#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct voter
{
	int serirel = 0;
	long long int cnic;
	string name, gender,pollingstation;
	int na, pa, age, block;
};

void add_v(voter v)
{
	cout << "\n*** REGISTRATION OF CANDIDATE ***";
	ofstream fout("VOTER_RECORD.txt", ios::app);
	
	cout << "\nEnter Seriel Number Of voter : ";
	cin >> v.serirel;
	
	cout << "\nEnter The CINIC Of The Voter : ";
	cin >> v.cnic;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "\nEnter The Nmae Of The Voter : ";
	getline(cin, v.name);

	cout << "\nEnter The gender Of The Voter : ";
	cin >> v.gender;

	cout << "\nEnter Age Of The Voter : ";
	cin >> v.age;
	
	cout << "\nEnter Block Number : ";
	cin >> v.block;

	cout << "\nEnter NA Constituency Number : ";
	cin >> v.na;
	
	cout << "\nEnter PA Constituency Number : ";
	cin >> v.pa;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << "\nPolling Station : ";
	getline(cin, v.pollingstation);
	
	fout << "\n" << v.serirel << "\t" << v.cnic << "\t" << v.name << "\t" << v.gender << "\t" << v.age << "\t" << v.block << "\t" << v.na
		<< "\t" << v.pa << "\t" << v.pollingstation;
	fout.close();
}
void view_v(voter v)
{
	ifstream fin("VOTER_RECORD.txt");
	try
	{
		if (!fin.is_open())
		{
			throw runtime_error("file not open :(");
		}
		while (fin >> v.serirel >> v.cnic)
		{
			fin.ignore();
			getline(fin, v.name, '\t');
			fin >> v.gender >> v.age >> v.block >> v.na >> v.pa;
			fin.ignore();
			getline(fin, v.pollingstation);

			cout << "\nSeriel Number Of voter : " << v.serirel << "\nCINIC Of The Voter : " << v.cnic << "\nNmae Of The Voter : " << v.name
				<< "\nGender Of The Voter : " << v.gender << "\nAge Of The Voter : " << v.age << "\nBlock Number : " << v.block
				<< "\nNA Constituency Number : " << v.na << "\nPA Constituency Number : " << v.pa << "\nPolling Station : " << v.pollingstation
				<< "\n\n---------------------------------------------------\n\n";
		}
	}
	catch (runtime_error e)
	{
		cout << e.what();
	}
	
	fin.close();
}
void search_v(voter v)
{
	string search_name;
	ifstream fin("VOTER_RECORD.txt");
	if (!fin.is_open())
	{
		cout << "OOPS! file doesn't exit :(";
	}
	else
	{
		cout << "\nENTER NAME TO SEARCH : ";
		cin.ignore();
		getline(cin, search_name);
		while (fin >> v.serirel >> v.cnic)
		{
			fin.ignore();
			getline(fin, v.name,'\t');
			fin >> v.gender >> v.age >> v.block >> v.na >> v.pa;
			fin.ignore();
			getline(fin, v.pollingstation);
			if (v.name == search_name)
			{
				cout << "\nSeriel Number Of voter : " << v.serirel << "\nCINIC Of The Voter : " << v.cnic << "\nName Of The Voter : " << v.name
					<< "\nGender Of The Voter : " << v.gender << "\nAge Of The Voter : " << v.age << "\nBlock Number : " << v.block
					<< "\nNA Constituency Number : " << v.na << "\nPA Constituency Number : " << v.pa << "\nPolling Station : " << v.pollingstation;
			}
		}
	}

}
void other_info(voter v)
{
	int option, count = 0;
	ifstream fin("VOTER_RECORD.txt");
	cout << "\nSelect The Option For \n1.TOTAL MALE VOTERS \n2.TOTAL FEMALE VOTERS \n3.TOTAL VOTERS.";
	cin >> option;
	switch (option)
	{
	case 1:
	{
		count = 0;
		while (fin >> v.gender)
		{
			if (v.gender == "male")
			{
				count++;
			}
		}
		cout << "\nTOTAL MALE VOTERS ARE : " << count;
	}
	break;
	case 2:
	{
		count = 0;
		while (fin >> v.gender)
		{
			if (v.gender == "female")
			{
				count++;
			}
		}
		cout << "\nTOTAL FEMALE VOTERS ARE : " << count;
		
	}
		break;
	case 3:
	{
		count = 0;
		while (fin >> v.gender)
		{
			if (v.gender == "female" || v.gender == "male" )
			{
				count++;
			}
		}
		cout << "\nTOTAL VOTERS ARE : " << count;
	}
		break;
	default:
		cout << "\nOOPS! Invalid Operation selected.";
		break;
	}
}
void menu_v(voter v)
{
	int option, confirm;
	cout << "\n WELCOME TO VOTER DETAILS PORTAL";
	do
	{
		cout << "\nSelect The Option For \n1.ADD \n2.VIEW \n3.SEARCH \n4.VOTER OTHER INFORMATION";
		cin >> option;
		switch (option)
		{
		case 1:
			add_v(v);
			break;
		case 2:
			view_v(v);
			break;
		case 3:
			search_v(v);
			break;
		case 4:
			other_info(v);
			break;
		default:
			cout << "OOPS! Invalid Operation selected.";
			break;
		}
		cout << "\nENTER 1 TO continue.";
		cin >> confirm;
	} while (confirm == 1);
	
}

