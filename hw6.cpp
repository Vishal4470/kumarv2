///Vishal Kumar
/// HW #6
#include "hw6.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <iomanip>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

using namespace std;

int user_id[5], user_zipcode[5], user_phonenumber[5];
string user_firstname[5], user_lastname[5], user_address[5], user_bloodtype[5];

int i=0;
char*pch, line[300];
char pick1, pick2, pick3;

int read_Database()
{
    char filetext[15];

     fstream fileread;

     cout << "Enter file name to read:" << endl;
     cin >> filetext;

     fileread.open(filetext, ios::in);
     if(fileread.fail())
     {
         cerr << "File can not be retrieved";
         cin.get();
         exit(1);
     }

     cout << "Initial text:" << endl;
     cout << fixed << setprecision(0);
     while(fileread.good())
     {
         fileread.getline(line, 300);
         pch=strtok(line, ", ");
         while(pch=NULL)
         {
         user_id[i]=atoi(pch);
         pch = strtok(NULL, ", ");
         user_firstname[i]= pch;
         pch = strtok(NULL, ", ");
         user_lastname[i]= pch;
         pch = strtok(NULL, ", ");
         user_phonenumber[i]= atoi(pch);
         pch = strtok(NULL, ", ");
         user_zipcode[i]= atoi(pch);
         pch = strtok(NULL, ", ");
         user_address[i]= pch;
         pch = strtok(NULL, ", ");
         user_bloodtype[i]= pch;
         pch = strtok(NULL, ", ");
         i += 1;

         }

    }
cout << user_bloodtype[1];
fileread.close();

}

void output_id()
{
    cout << "User ID: ";
    for(i=0; i<5; i++)
    {
        cout << user_id[i] << ", ";
    }
    cout << endl;
    ofstream userIDtext;
    userIDtext.open("userID.txt", ios::out);

    for(i=0; i<5; i++)
    {
        userIDtext << user_id[i] << ", ";
    }
    userIDtext.close();

}
void output_firstname()
{
    cout << "First Name: ";
    for(i=0; i<5; i++)
    {
        cout << user_firstname[i] << ", ";
    }
    cout << endl;

    ofstream userFirstNametext;
    userFirstNametext.open("userFirstName.txt", ios::out);

    for(i=0; i<5; i++)
    {
        userFirstNametext << user_firstname[i]<<", ";
    }
    userFirstNametext.close();
}

void output_lastname()
{
    cout << "Last Name: ";
    for(i=0; i<5; i++)
    {
        cout << user_lastname[i] << ", ";
    }
    cout << endl;

    ofstream userLastNametext;
    userLastNametext.open("userLastName.txt", ios::out);

    for(i=0; i<5; i++)
    {
        userLastNametext << user_lastname[i]<<", ";
    }
    userLastNametext.close();
}

void output_phonenumber()
{
    cout << "Phone number: ";
    for(i=0; i<5; i++)
    {
        cout << user_phonenumber[i] << ", ";
    }
    cout << endl;

    ofstream userPhoneNumbertext;
    userPhoneNumbertext.open("userPhoneNumber.txt", ios::out);

    for(i=0; i<5; i++)
    {
        userPhoneNumbertext << user_phonenumber[i]<<", ";
    }
    userPhoneNumbertext.close();
}

void output_zipcode()
{
    cout << "Zip code: ";
    for(i=0; i<5; i++)
    {
        cout << user_zipcode[i] << ", ";
    }
    cout << endl;

    ofstream userZipcodetext;
    userZipcodetext.open("userZipcode.txt", ios::out);

    for(i=0; i<5; i++)
    {
        userZipcodetext << user_zipcode[i]<<", ";
    }
    userZipcodetext.close();
}

void output_address()
{
    cout << "Address: ";
    for(i=0; i<5; i++)
    {
        cout << user_address[i] << ", ";
    }
    cout << endl;

    ofstream userAddresstext;
    userAddresstext.open("userAddress.txt", ios::out);

    for(i=0; i<5; i++)
    {
        userAddresstext << user_address[i]<<", ";
    }
    userAddresstext.close();
}

void output_bloodtype()
{
    cout << "Blood type: ";
    for(i=0; i<5; i++)
    {
        cout << user_bloodtype[i] << ", ";
    }
    cout << endl;

    ofstream userBloodTypetext;
    userBloodTypetext.open("userBloodType.txt", ios::out);

    for(i=0; i<5; i++)
    {
        userBloodTypetext << user_bloodtype[i]<<", ";
    }
    userBloodTypetext.close();
}

int output_pickinfo()
{
    cout << "Information requests:";
    cout << "A) ID Numbers\n";
    cout << "B) First Names\n";
    cout << "C) Second Names\n";
    cout << "D) Phone Numbers\n";
    cout << "E) Zip Codes\n";
    cout << "F) Addresses\n";
    cout << "G) Blood Type\n";
    cout << "Pick three entries to read";
}
int main()
{
    read_Database();
    cout << "This is your database profile reader";
    output_pickinfo();
    cout << "*Pick 1:";
    cin >> pick1;
    cout << "Pick 2:";
    cin >> pick2;
    cout << "Pick 3:";
    cin >> pick3;
    cout << "Your data selected:" << endl;

    switch(pick1)
    {
    case 'A' | 'a':
        output_id();
        break;
    case 'B' | 'b':
        output_firstname();
        break;
    case 'C' | 'c':
        output_lastname();
        break;
    case 'D' | 'd':
        output_phonenumber();
        break;
    case 'E' | 'e':
        output_zipcode();
        break;
    case 'F' | 'f':
        output_address();
        break;
    case 'G' | 'g':
        output_bloodtype();
        break;
    default:
        cout << "Not a valid pick";
    }

    switch(pick2)
    {
    case 'A' | 'a':
        output_id();
        break;
    case 'B' | 'b':
        output_firstname();
        break;
    case 'C' | 'c':
        output_lastname();
        break;
    case 'D' | 'd':
        output_phonenumber();
        break;
    case 'E' | 'e':
        output_zipcode();
        break;
    case 'F' | 'f':
        output_address();
        break;
    case 'G' | 'g':
        output_bloodtype();
        break;
    default:
        cout << "Not a valid pick";
    }

    switch(pick3)
    {
    case 'A' | 'a':
        output_id();
        break;
    case 'B' | 'b':
        output_firstname();
        break;
    case 'C' | 'c':
        output_lastname();
        break;
    case 'D' | 'd':
        output_phonenumber();
        break;
    case 'E' | 'e':
        output_zipcode();
        break;
    case 'F' | 'f':
        output_address();
        break;
    case 'G' | 'g':
        output_bloodtype();
        break;
    default:
        cout << "Not a valid pick";
    }

return 0;
}
