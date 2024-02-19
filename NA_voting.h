#pragma once
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct National_Assembly
{
    int id = 0;
    string name, address, symbol, party;
};
void sindh_candidates(National_Assembly na);
void punjab_candidates(National_Assembly na);
void balouchistan_candidates(National_Assembly na);
void kpk_candidates(National_Assembly na);
void menu_provinces_na(National_Assembly na)
{
    int confirm;
    do
    {
        int option;
        cout << "\nWELCOME TO PROVISIONAL ASSEMBLY PORTAL"; 
        cout << "\nSELECT PROVINCES \n1.SINDH \n2.PUNJAB \n3.BALOUCHISTAN \n4.KHYBER PAKHTUNKHWA(KPK) \n5.EXIT";
        cin >> option;
        switch (option)
        {
        case 1:
        {
            sindh_candidates(na);
            break;
        }
        case 2:
        {
            punjab_candidates(na);
            break;
        }
        case 3:
        {
            balouchistan_candidates(na);
            break;
        }
        case 4:
        {
            kpk_candidates(na);
            break;
        }
        default:
            cout << "OOPS! Invalid Operation selected.";
            break;
        }
        cout << "\nENTER 1 TO continue.";
        cin >> confirm;
    } while (confirm == 1);
}
void sindh_candidates(National_Assembly na)
{
    int option, confirm;
    cout << "\nSelect The Option For \n1.ADD \n2.VIEW \n3.SEARCH";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        cout << "\n*** REGISTRATION OF CANDIDATE ***";
        ofstream fout("SINDH_NA.txt", ios::app);
        cout << "\nEnter I'D OF THE CANDIDATE : ";
        cin >> na.id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nEnter The NAME OF THE CANDIDATE : ";
        getline(cin, na.name);
        cout << "\nEnter The ADDRESS OF THE CANDIDATE : ";
        getline(cin, na.address);
        cout << "\nSYMBOL ALLOCATED : ";
        cin >> na.symbol;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nCANDIDATE AFFILIATED WITH PARTY : ";
        getline(cin, na.party);
        fout << "\n" << na.id << "\t" << na.name << "\t" << na.address << "\t" << na.symbol << "\t" << na.party;
        fout.close();
    }
    break;
    case 2:
    {
        ifstream fin("SINDH_NA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nCANDIDATES:\n";
            while (fin >> na.id)
            {
                fin.ignore();
                getline(fin, na.name, '\t');
                getline(fin, na.address, '\t');
                fin >> na.symbol;
                fin.ignore();
                getline(fin, na.party);

                cout << "\nId OF THE CONTESTING CANDIDATE : " << na.id << "\nNAME OF THE CONTESTING CANDIDATE : " << na.name
                    << "\nADDRESS OF THE CONTESTING CANDIDATE : " << na.address << "\nSYMBOL ALLOCATED : " << na.symbol
                    << "\nAFFILIATED WITH PARTY : " << na.party << "\n\n-------------------------------------------------\n\n";
            }
        }
        catch (runtime_error e)
        {
            cout << e.what();
        }
        fin.close();
    }
    break;
    case 3:

        string search_name;
        ifstream fin("SINDH_NA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nENTER NAME TO SEARCH : ";
            cin.ignore();
            getline(cin, search_name);
            while (fin >> na.id)
            {
                fin.ignore();
                getline(fin, na.name, '\t');
                getline(fin, na.address, '\t');
                fin >> na.symbol;
                fin.ignore();
                getline(fin, na.party);

                if (na.name == search_name)
                {
                    cout << "\nId OF THE CONTESTING CANDIDATE : " << na.id << "\nNAME OF THE CONTESTING CANDIDATE : " << na.name
                        << "\nADDRESS OF THE CONTESTING CANDIDATE : " << na.address << "\nSYMBOL ALLOCATED : " << na.symbol << "\nAFFILIATED WITH PARTY : " << na.party;
                }

            }
        }
        catch (runtime_error e)
        {
            cout << e.what();
        }
        break;
    }
}
void punjab_candidates(National_Assembly na)
{
    int option, confirm;
    cout << "\nSelect The Option For \n1.ADD \n2.VIEW \n3.SEARCH";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        cout << "\n*** REGISTRATION OF CANDIDATE ***";
        ofstream fout("PUNJAB_NA.txt", ios::app);
        cout << "\nEnter I'D OF THE CANDIDATE : ";
        cin >> na.id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nEnter The NAME OF THE CANDIDATE : ";
        getline(cin, na.name);
        cout << "\nEnter The ADDRESS OF THE CANDIDATE : ";
        getline(cin, na.address);
        cout << "\nSYMBOL ALLOCATED : ";
        cin >> na.symbol;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nCANDIDATE AFFILIATED WITH PARTY : ";
        getline(cin, na.party);
        fout << "\n" << na.id << "\t" << na.name << "\t" << na.address << "\t" << na.symbol << "\t" << na.party;
        fout.close();
    }
    break;
    case 2:
    {
        ifstream fin("PUNJAB_NA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nCANDIDATES:\n";
            while (fin >> na.id)
            {
                fin.ignore();
                getline(fin, na.name, '\t');
                getline(fin, na.address, '\t');
                fin >> na.symbol;
                fin.ignore();
                getline(fin, na.party);

                cout << "\nId OF THE CONTESTING CANDIDATE : " << na.id << "\nNAME OF THE CONTESTING CANDIDATE : " << na.name
                    << "\nADDRESS OF THE CONTESTING CANDIDATE : " << na.address << "\nSYMBOL ALLOCATED : " << na.symbol
                    << "\nAFFILIATED WITH PARTY : " << na.party << "\n\n-------------------------------------------------\n\n";
            }
        }
        catch (runtime_error e)
        {
            cout << e.what();
        }
        fin.close();
    }
    break;
    case 3:

        string search_name;
        ifstream fin("PUNJAB_NA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nENTER NAME TO SEARCH : ";
            cin.ignore();
            getline(cin, search_name);
            while (fin >> na.id)
            {
                fin.ignore();
                getline(fin, na.name, '\t');
                getline(fin, na.address, '\t');
                fin >> na.symbol;
                fin.ignore();
                getline(fin, na.party);

                if (na.name == search_name)
                {
                    cout << "\nId OF THE CONTESTING CANDIDATE : " << na.id << "\nNAME OF THE CONTESTING CANDIDATE : " << na.name
                        << "\nADDRESS OF THE CONTESTING CANDIDATE : " << na.address << "\nSYMBOL ALLOCATED : " << na.symbol << "\nAFFILIATED WITH PARTY : " << na.party;
                }

            }
        }
        catch (runtime_error e)
        {
            cout << e.what();
        }
        break;
    }
}
void balouchistan_candidates(National_Assembly na)
{
    int option, confirm;
    cout << "\nSelect The Option For \n1.ADD \n2.VIEW \n3.SEARCH";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        cout << "\n*** REGISTRATION OF CANDIDATE ***";
        ofstream fout("BALOUCHISTAN_NA.txt", ios::app);
        cout << "\nEnter I'D OF THE CANDIDATE : ";
        cin >> na.id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nEnter The NAME OF THE CANDIDATE : ";
        getline(cin, na.name);
        cout << "\nEnter The ADDRESS OF THE CANDIDATE : ";
        getline(cin, na.address);
        cout << "\nSYMBOL ALLOCATED : ";
        cin >> na.symbol;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nCANDIDATE AFFILIATED WITH PARTY : ";
        getline(cin, na.party);
        fout << "\n" << na.id << "\t" << na.name << "\t" << na.address << "\t" << na.symbol << "\t" << na.party;
        fout.close();
    }
    break;
    case 2:
    {
        ifstream fin("BALOUCHISTAN_NA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nCANDIDATES:\n";
            while (fin >> na.id)
            {
                fin.ignore();
                getline(fin, na.name, '\t');
                getline(fin, na.address, '\t');
                fin >> na.symbol;
                fin.ignore();
                getline(fin, na.party);

                cout << "\nId OF THE CONTESTING CANDIDATE : " << na.id << "\nNAME OF THE CONTESTING CANDIDATE : " << na.name
                    << "\nADDRESS OF THE CONTESTING CANDIDATE : " << na.address << "\nSYMBOL ALLOCATED : " << na.symbol
                    << "\nAFFILIATED WITH PARTY : " << na.party << "\n\n-------------------------------------------------\n\n";
            }
        }
        catch (runtime_error e)
        {
            cout << e.what();
        }
        fin.close();
    }
    break;
    case 3:

        string search_name;
        ifstream fin("BALOUCHISTAN_NA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nENTER NAME TO SEARCH : ";
            cin.ignore();
            getline(cin, search_name);
            while (fin >> na.id)
            {
                fin.ignore();
                getline(fin, na.name, '\t');
                getline(fin, na.address, '\t');
                fin >> na.symbol;
                fin.ignore();
                getline(fin, na.party);

                if (na.name == search_name)
                {
                    cout << "\nId OF THE CONTESTING CANDIDATE : " << na.id << "\nNAME OF THE CONTESTING CANDIDATE : " << na.name
                        << "\nADDRESS OF THE CONTESTING CANDIDATE : " << na.address << "\nSYMBOL ALLOCATED : " << na.symbol << "\nAFFILIATED WITH PARTY : " << na.party;
                }

            }
        }
        catch (runtime_error e)
        {
            cout << e.what();
        }
        break;
    }
}
void kpk_candidates(National_Assembly na)
{
    int option, confirm;
    cout << "\nSelect The Option For \n1.ADD \n2.VIEW \n3.SEARCH";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        cout << "\n*** REGISTRATION OF CANDIDATE ***";
        ofstream fout("KPK_NA.txt", ios::app);
        cout << "\nEnter I'D OF THE CANDIDATE : ";
        cin >> na.id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nEnter The NAME OF THE CANDIDATE : ";
        getline(cin, na.name);
        cout << "\nEnter The ADDRESS OF THE CANDIDATE : ";
        getline(cin, na.address);
        cout << "\nSYMBOL ALLOCATED : ";
        cin >> na.symbol;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nCANDIDATE AFFILIATED WITH PARTY : ";
        getline(cin, na.party);
        fout << "\n" << na.id << "\t" << na.name << "\t" << na.address << "\t" << na.symbol << "\t" << na.party;
        fout.close();
    }
    break;
    case 2:
    {
        ifstream fin("KPK_NA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nCANDIDATES:\n";
            while (fin >> na.id)
            {
                fin.ignore();
                getline(fin, na.name, '\t');
                getline(fin, na.address, '\t');
                fin >> na.symbol;
                fin.ignore();
                getline(fin, na.party);

                cout << "\nId OF THE CONTESTING CANDIDATE : " << na.id << "\nNAME OF THE CONTESTING CANDIDATE : " << na.name
                    << "\nADDRESS OF THE CONTESTING CANDIDATE : " << na.address << "\nSYMBOL ALLOCATED : " << na.symbol
                    << "\nAFFILIATED WITH PARTY : " << na.party << "\n\n-------------------------------------------------\n\n";
            }
        }
        catch (runtime_error e)
        {
            cout << e.what();
        }
        fin.close();
    }
    break;
    case 3:

        string search_name;
        ifstream fin("KPK_NA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nENTER NAME TO SEARCH : ";
            cin.ignore();
            getline(cin, search_name);
            while (fin >> na.id)
            {
                fin.ignore();
                getline(fin, na.name, '\t');
                getline(fin, na.address, '\t');
                fin >> na.symbol;
                fin.ignore();
                getline(fin, na.party);

                if (na.name == search_name)
                {
                    cout << "\nId OF THE CONTESTING CANDIDATE : " << na.id << "\nNAME OF THE CONTESTING CANDIDATE : " << na.name
                        << "\nADDRESS OF THE CONTESTING CANDIDATE : " << na.address << "\nSYMBOL ALLOCATED : " << na.symbol << "\nAFFILIATED WITH PARTY : " << na.party;
                }

            }
        }
        catch (runtime_error e)
        {
            cout << e.what();
        }
        break;
    }
}




