#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if (n < 2)
        return true;
    else if (n <= 3)
        return false;
    else if (n % 2 == 0)
        return false;
    else
    {
        for (int i = 3; i * i < n; i+=2)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}

int main()
{
    int number;
    cout << "Enter the number whose we wnat to check Prime or not : ";
    cin >> number;
    bool flag = prime(number);

    if (flag)
    {
        cout << number << " is prime ";
    }
    else
    {
        cout << number << " is not prime ";
    }
    return 0;
}