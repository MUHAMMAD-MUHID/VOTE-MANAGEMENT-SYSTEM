#pragma once
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
struct provisional_Assembly
{
    int id = 0;
    string name, address, symbol, party;
};
void sindh_candidates(provisional_Assembly pa);
void punjab_candidates(provisional_Assembly pa);
void balouchistan_candidates(provisional_Assembly pa);
void kpk_candidates(provisional_Assembly pa);

void menu_provinces_pa(provisional_Assembly pa)
{
    int confirm;
    do 
    {
        int option;
        cout << "\nWELCOME TO PROVISIONAL ASSEMBLY PORTAL";
        cout << "\nSELECT PROVINCES \n1.SINDH \n2.PUNJAB \n3.BALOUCHISTAN \n4.KHYBER PAKHTUNKHWA(KPK)";
        cin >> option;
        switch (option)
        {
        case 1:
        {
            sindh_candidates(pa);
            break;
        }
        case 2:
        {
            punjab_candidates(pa);
            break;
        }
        case 3:
        {
            balouchistan_candidates(pa);
            break;
        }
        case 4:
        {
            kpk_candidates(pa);
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
void sindh_candidates(provisional_Assembly pa)
{
    int option, confirm;
    cout << "\nSelect The Option For \n1.ADD \n2.VIEW \n3.SEARCH";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        cout << "\n*** REGISTRATION OF CANDIDATE ***";
        ofstream fout("SINDH_PA.txt", ios::app);
        cout << "\nEnter I'D OF THE CANDIDATE : ";
        cin >> pa.id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nEnter The NAME OF THE CANDIDATE : ";
        getline(cin, pa.name);
        cout << "\nEnter The ADDRESS OF THE CANDIDATE : ";
        getline(cin, pa.address);
        cout << "\nSYMBOL ALLOCATED : ";
        cin >> pa.symbol;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nCANDIDATE AFFILIATED WITH PARTY : ";
        getline(cin, pa.party);
        fout << "\n" << pa.id << "\t" << pa.name << "\t" << pa.address << "\t" << pa.symbol << "\t" << pa.party;
        fout.close();
    }
    break;
    case 2:
    {
        ifstream fin("SINDH_PA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nCANDIDATES:\n";
            while (fin >> pa.id)
            {
                fin.ignore();
                getline(fin, pa.name, '\t');
                getline(fin, pa.address, '\t');
                fin >> pa.symbol;
                fin.ignore();
                getline(fin, pa.party);

                cout << "\nId OF THE CONTESTING CANDIDATE : " << pa.id << "\nNAME OF THE CONTESTING CANDIDATE : " << pa.name
                    << "\nADDRESS OF THE CONTESTING CANDIDATE : " << pa.address << "\nSYMBOL ALLOCATED : " << pa.symbol
                    << "\nAFFILIATED WITH PARTY : " << pa.party << "\n\n-------------------------------------------------\n\n";
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
        ifstream fin("SINDH_PA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nENTER NAME TO SEARCH : ";
            cin.ignore();
            getline(cin, search_name);
            while (fin >> pa.id)
            {
                fin.ignore();
                getline(fin, pa.name, '\t');
                getline(fin, pa.address, '\t');
                fin >> pa.symbol;
                fin.ignore();
                getline(fin, pa.party);

                if (pa.name == search_name)
                {
                    cout << "\nId OF THE CONTESTING CANDIDATE : " << pa.id << "\nNAME OF THE CONTESTING CANDIDATE : " << pa.name
                        << "\nADDRESS OF THE CONTESTING CANDIDATE : " << pa.address << "\nSYMBOL ALLOCATED : " << pa.symbol << "\nAFFILIATED WITH PARTY : " << pa.party;
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
void punjab_candidates(provisional_Assembly pa)
{
    int option, confirm;
    cout << "\nSelect The Option For \n1.ADD \n2.VIEW \n3.SEARCH";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        cout << "\n*** REGISTRATION OF CANDIDATE ***";
        ofstream fout("PUNJAB_PA.txt", ios::app);
        cout << "\nEnter I'D OF THE CANDIDATE : ";
        cin >> pa.id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nEnter The NAME OF THE CANDIDATE : ";
        getline(cin, pa.name);
        cout << "\nEnter The ADDRESS OF THE CANDIDATE : ";
        getline(cin, pa.address);
        cout << "\nSYMBOL ALLOCATED : ";
        cin >> pa.symbol;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nCANDIDATE AFFILIATED WITH PARTY : ";
        getline(cin, pa.party);
        fout << "\n" << pa.id << "\t" << pa.name << "\t" << pa.address << "\t" << pa.symbol << "\t" << pa.party;
        fout.close();
    }
    break;
    case 2:
    {
        ifstream fin("PUNJAB_PA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nCANDIDATES:\n";
            while (fin >> pa.id)
            {
                fin.ignore();
                getline(fin, pa.name, '\t');
                getline(fin, pa.address, '\t');
                fin >> pa.symbol;
                fin.ignore();
                getline(fin, pa.party);

                cout << "\nId OF THE CONTESTING CANDIDATE : " << pa.id << "\nNAME OF THE CONTESTING CANDIDATE : " << pa.name
                    << "\nADDRESS OF THE CONTESTING CANDIDATE : " << pa.address << "\nSYMBOL ALLOCATED : " << pa.symbol
                    << "\nAFFILIATED WITH PARTY : " << pa.party << "\n\n-------------------------------------------------\n\n";
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
        ifstream fin("PUNJAB_PA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nENTER NAME TO SEARCH : ";
            cin.ignore();
            getline(cin, search_name);
            while (fin >> pa.id)
            {
                fin.ignore();
                getline(fin, pa.name, '\t');
                getline(fin, pa.address, '\t');
                fin >> pa.symbol;
                fin.ignore();
                getline(fin, pa.party);

                if (pa.name == search_name)
                {
                    cout << "\nId OF THE CONTESTING CANDIDATE : " << pa.id << "\nNAME OF THE CONTESTING CANDIDATE : " << pa.name
                        << "\nADDRESS OF THE CONTESTING CANDIDATE : " << pa.address << "\nSYMBOL ALLOCATED : " << pa.symbol << "\nAFFILIATED WITH PARTY : " << pa.party;
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
void balouchistan_candidates(provisional_Assembly pa)
{
    int option, confirm;
    cout << "\nSelect The Option For \n1.ADD \n2.VIEW \n3.SEARCH";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        cout << "\n*** REGISTRATION OF CANDIDATE ***";
        ofstream fout("BALOUCHISTAN_PA.txt", ios::app);
        cout << "\nEnter I'D OF THE CANDIDATE : ";
        cin >> pa.id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nEnter The NAME OF THE CANDIDATE : ";
        getline(cin, pa.name);
        cout << "\nEnter The ADDRESS OF THE CANDIDATE : ";
        getline(cin, pa.address);
        cout << "\nSYMBOL ALLOCATED : ";
        cin >> pa.symbol;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nCANDIDATE AFFILIATED WITH PARTY : ";
        getline(cin, pa.party);
        fout << "\n" << pa.id << "\t" << pa.name << "\t" << pa.address << "\t" << pa.symbol << "\t" << pa.party;
        fout.close();
    }
    break;
    case 2:
    {
        ifstream fin("BALOUCHISTAN_PA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nCANDIDATES:\n";
            while (fin >> pa.id)
            {
                fin.ignore();
                getline(fin, pa.name, '\t');
                getline(fin, pa.address, '\t');
                fin >> pa.symbol;
                fin.ignore();
                getline(fin, pa.party);

                cout << "\nId OF THE CONTESTING CANDIDATE : " << pa.id << "\nNAME OF THE CONTESTING CANDIDATE : " << pa.name
                    << "\nADDRESS OF THE CONTESTING CANDIDATE : " << pa.address << "\nSYMBOL ALLOCATED : " << pa.symbol
                    << "\nAFFILIATED WITH PARTY : " << pa.party << "\n\n-------------------------------------------------\n\n";
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
        ifstream fin("BALOUCHISTAN_PA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nENTER NAME TO SEARCH : ";
            cin.ignore();
            getline(cin, search_name);
            while (fin >> pa.id)
            {
                fin.ignore();
                getline(fin, pa.name, '\t');
                getline(fin, pa.address, '\t');
                fin >> pa.symbol;
                fin.ignore();
                getline(fin, pa.party);

                if (pa.name == search_name)
                {
                    cout << "\nId OF THE CONTESTING CANDIDATE : " << pa.id << "\nNAME OF THE CONTESTING CANDIDATE : " << pa.name
                        << "\nADDRESS OF THE CONTESTING CANDIDATE : " << pa.address << "\nSYMBOL ALLOCATED : " << pa.symbol << "\nAFFILIATED WITH PARTY : " << pa.party;
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
void kpk_candidates(provisional_Assembly pa)
{
    int option, confirm;
    cout << "\nSelect The Option For \n1.ADD \n2.VIEW \n3.SEARCH";
    cin >> option;
    switch (option)
    {
    case 1:
    {
        cout << "\n*** REGISTRATION OF CANDIDATE ***";
        ofstream fout("KPK_PA.txt", ios::app);
        cout << "\nEnter I'D OF THE CANDIDATE : ";
        cin >> pa.id;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nEnter The NAME OF THE CANDIDATE : ";
        getline(cin, pa.name);
        cout << "\nEnter The ADDRESS OF THE CANDIDATE : ";
        getline(cin, pa.address);
        cout << "\nSYMBOL ALLOCATED : ";
        cin >> pa.symbol;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "\nCANDIDATE AFFILIATED WITH PARTY : ";
        getline(cin, pa.party);
        fout << "\n" << pa.id << "\t" << pa.name << "\t" << pa.address << "\t" << pa.symbol << "\t" << pa.party;
        fout.close();
    }
    break;
    case 2:
    {
        ifstream fin("KPK_PA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nCANDIDATES:\n";
            while (fin >> pa.id)
            {
                fin.ignore();
                getline(fin, pa.name, '\t');
                getline(fin, pa.address, '\t');
                fin >> pa.symbol;
                fin.ignore();
                getline(fin, pa.party);

                cout << "\nId OF THE CONTESTING CANDIDATE : " << pa.id << "\nNAME OF THE CONTESTING CANDIDATE : " << pa.name
                    << "\nADDRESS OF THE CONTESTING CANDIDATE : " << pa.address << "\nSYMBOL ALLOCATED : " << pa.symbol
                    << "\nAFFILIATED WITH PARTY : " << pa.party << "\n\n-------------------------------------------------\n\n";
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
        ifstream fin("KPK_PA.txt");
        try
        {
            if (!fin.is_open())
            {
                throw runtime_error("file not open :(");
            }
            cout << "\nENTER NAME TO SEARCH : ";
            cin.ignore();
            getline(cin, search_name);
            while (fin >> pa.id)
            {
                fin.ignore();
                getline(fin, pa.name, '\t');
                getline(fin, pa.address, '\t');
                fin >> pa.symbol;
                fin.ignore();
                getline(fin, pa.party);

                if (pa.name == search_name)
                {
                    cout << "\nId OF THE CONTESTING CANDIDATE : " << pa.id << "\nNAME OF THE CONTESTING CANDIDATE : " << pa.name
                        << "\nADDRESS OF THE CONTESTING CANDIDATE : " << pa.address << "\nSYMBOL ALLOCATED : " << pa.symbol << "\nAFFILIATED WITH PARTY : " << pa.party;
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




