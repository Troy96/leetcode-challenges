#include <iostream>

using namespace std;

int rev(int n);
long revUtil(long n);

int main()
{
    int res = rev(-35545);
    cout << res;
    return 0;
}

int rev(int n)
{

    long num;
    long rev;
    num = n;
    if (num > 0)
        rev = revUtil(num);
    else
    {
        num = num * -1;
        rev = revUtil(num);
        rev = rev * -1;
    }
    (rev > INT_MAX || rev < INT_MIN) ? rev = 0 : rev;
    return rev;
}

long revUtil(long num)
{
    int digit;
    long rev = 0;
    while (num > 0)
    {
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    }
    return rev;
}
