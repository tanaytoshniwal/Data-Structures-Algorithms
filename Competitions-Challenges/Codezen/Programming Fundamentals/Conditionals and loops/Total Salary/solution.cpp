#include<iostream>
using namespace std;

int main() {
    double n;
    char c;
    cin >> n >> c;
    double hra = .2*n;
    double da = .5*n;
    double allow = (c=='A')?1700:(c=='B')?1500:1300;
    double pf = .11*n;
    printf("%.0f", n+hra+da+allow-pf);
    return 0;
}
