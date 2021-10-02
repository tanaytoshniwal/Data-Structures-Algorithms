#include<iostream>
#include<ctime>

using namespace std;

int fib(int);

int main()
{
    int n;
    cin >> n;

    time_t start = time(NULL);

    for (int i = 1; i <= n; ++i)
    {
        cout << fib(i) << " ";
    }

    time_t end = time(NULL);

    cout << endl << "Time: " << (end - start) << " s";
}

int fib(int n)
{
    if (n==1 || n==2)
    {
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}