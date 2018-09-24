#include <iostream>
#include <cmath>

using namespace std;

int main()
{
  int a, b;
  char op;

  cout << "Enter first integer: " << endl;
  cin >> a;
  cout << "Enter second integer: " << endl;
  cin >> b;
  cout << "Enter operator: 1: +, 2: -, 3: *, 4: /, 5: %  " << endl;
  // 1=add, 2=subtract, 3=multiply, 4=divide, 5=remainder
  cin >> op;
  cout << a << " " << op << " " << b << " = " << endl;

  switch(op)
   {
    case '+':
    // "add"
    cout << a + b;
    break;

    case '-':
    // "subtract"
    cout << a - b;
    break;

    case '*':
    // "multiply"
    cout << a * b;
    break;

    case '/':
    // "divide"
    if (b != 0)
    {
      cout << a / b;
    }
    else
    {
    cout << "Cannot divide by 0";
    }
    break;

    case '%':
    // "remainder"
    cout << a / b << " R" << a % b;
    break;
    default:
    cout << "Invalid command";
    break;
  }
  return 0;
}
