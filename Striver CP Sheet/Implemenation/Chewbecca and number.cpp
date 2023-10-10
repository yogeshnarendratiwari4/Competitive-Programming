#include <iostream>
using namespace std;
typedef long long var;

int count(var &num)
{
    int c = 0;
    while (num % 10 == 0)
    {
        c++;
        num = num / 10;
    }
    return c;
}

var solve(var num)
{
    var number = 0;
    var cnt = count(num);
    while (num)
    {
        number = number * 10 + num % 10;
        num = num / 10;
    }

    var ans = 0;
    if (number % 10 == 9)
    {
        ans = ans * 10 + 9;
        number /= 10;
    }

    while (number)
    {
        var t = number % 10;
        number = number / 10;

        var x = t > 9 - t ? 9 - t : t;
        ans = ans * 10 + x;
    }

    while (cnt--)
    {
        ans = ans * 10 + 0;
    }
    return ans;
}

int main()
{
    var number;
    cin >> number;

    cout << solve(number) << endl;
}