#include<iostream>
#include<ctime>


using namespace std;

long long int dp[10001] = {0};

long long int next_fib(long long int);

int main()
{
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;

    int n;
    cin >> n;

    time_t start = time(NULL);

    for (int i = 1; i <= n; ++i)
    {
        cout << next_fib(i) << " ";
    }

    time_t end = time(NULL);

    cout << endl << "Time: " << (end - start) << " s";
}

long long int next_fib(long long int n)
{
    if (dp[n] == 1)
    {
        return 1;
    }
    else
    {
        dp[n] = dp[n-1] + dp[n-2];
        return dp[n];
    }
}