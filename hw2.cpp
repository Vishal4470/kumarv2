#include <iostream>
#include <bits/stdc++.h>
/// Vishal Kumar
/// HW #2
/// No, you can not compute 99999999999999 + 99999999999999 on a
/// 32-bit machine using integer because there would be an overflow.
/// This type can only handle a max value of about 2,000,000,000.

using namespace std;

string sumLarge (string stra, string strb)
{
    string str = ""; // store result
    int n1 = stra.length(), n2 = strb.length(), carry = 0;
    int difference = n2 - n1;
    if (stra.length() > strb.length()) /// makes sure str2 > str1
        swap(stra, strb);

    for (int v=n1-1; v>=0; v--)
    {
        int sum = ((stra[v]-'0') + (strb[v+difference]-'0') + carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    for (int v=n2-n1-1; v>=0; v--)
    {
        int sum = ((strb[v]-'0') + carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if (carry)
        str.push_back(carry + '0');

    reverse(str.begin(), str.end()); /// Reverses the sum output.
    /// Derives from the stdc++.h, which is a header file.
    return str;
}
int main()
{
    string stra, strb;
    cout << "Enter first number: " << endl;
    cin >> stra;
    cout << "Enter second number: " << endl;
    cin >> strb;
    cout << "Sum: " << endl;
    cout << sumLarge(stra, strb);


    return 0;
}
