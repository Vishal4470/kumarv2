#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>

/// Vishal Kumar
/// HW #4 - Binary Search from Array

using namespace std;

const int size = 8;
int V[size] = {0};
int numSearch;
int mid = V[4];
int low = V[0];
int high = V[8];

void read_txt()
{
    int a, i = 0;
    char text[15];

ifstream fileIn; // Used to open file
cout << "Enter file name: " << endl;
cin >> text;

fileIn.open(text, ios::in);
if (fileIn.fail())
{
    cerr << "File can not be retrieved";
    cin.get();
    exit(1);
}
cout << "Initial array:";
while(fileIn >> a)
{
    V[i++] = a;
    cout << setw(5) << a; // Sets width
}
cout << endl;
fileIn.close(); /// Closes file
}
void print_txt()
{
    int a, i = 0;
    ofstream fileOut;
    fileOut.open("sorted.txt", ios::out);

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

int binarySearch()
{
    int low = 0;
    int mid = size/2;
    int high = size - 1;

    cout << "\nEnter number to find:";
    int numSearch;
    cin >> numSearch;

    while(low <= high)
    {
        mid = (low + high)/2;
        if(numSearch == V[mid])
        {
            cout << "Found:" << numSearch; /// Number exists in array
            return mid;
        }
        else if(numSearch>V[mid])
        {
            cout << "Searching.." << endl;
            low = mid + 1;
        }
        cout << "Not found"; /// Number searched does not exist in array
        return 0;
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
    binarySearch();
    return 0;
}
