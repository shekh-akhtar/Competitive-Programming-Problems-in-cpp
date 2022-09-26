#include <iostream>
using namespace std;

bool palindrome(int x) // palindrome function to check palindrome or not
{
    int rem = 0, temp = x, result = 0;
    while (x)
    {
        rem = x % 10;
        x = x / 10;
        result = (result * 10) + rem;
    }
    if (result == temp)
        return true;
    else
        return false;
}

int main()
{
    int number;
    bool n;
    cout << "Enter a number : ";
    cin >> number;
    if (number < 0)
    {
        cout << "false";
    }
    else
    {
        n = palindrome(number);
        n == true ? cout << "true" : cout << "false";
    }

    return 0;
}