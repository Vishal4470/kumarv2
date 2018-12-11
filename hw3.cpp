#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

/// Vishal Kumar
/// HW #3 - Bubble Sorting an Array
using namespace std;

const int size = 11;
int V[size] = {0};

void read_txt()
{
    int a, i = 0;
    char text[20];

ifstream fileIn; /// Used to open file
cout << "Enter file name: " << endl;
cin >> text;

fileIn.open(text, ios::in);
if (fileIn.fail())
{
    cerr << "File can not be retrieved";
    cin.get();
    exit(1);
}
cout << "Initial Array:";
while(fileIn >> a)
{
    V[i++] = a;
    cout << setw(5) << a; /// Sets width
}
cout << endl;
fileIn.close(); /// Closes file
}
void print_txt()
{
    int a, i = 0;
    ofstream fileOut;
    fileOut.open("bubbletxt.txt", ios::out);

    for(i = 0; i < size; i++)
{
    fileOut << V[i];
    cout << setw(5) << V[i];
}
fileOut.close(); /// Closes file
}

void bubble_sort()
{
    int temp;
    for(int i = 0; i < size - 1; i++)
        for(int j = 0; j < size - 1; j++)
    {
        if(V[j] > V[j+1])
        {
            temp = V[j];
            V[j] = V[j+1];
            V[j+1] = temp;
        }
    }
}
int main()
{
    read_txt();
    cout << "Unsorted Text:\n";
    print_txt();
    bubble_sort();
    cout << "\nSorted Text: " << endl;
    print_txt();
    return 0;
}
