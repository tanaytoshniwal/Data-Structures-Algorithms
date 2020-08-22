#include <bits/stdc++.h>
using namespace std;

#define iambatman                \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

int main() {
    iambatman int testcases;
    scanf("%d", &testcases);
    while (testcases--) {
        int chef_power, rick_power, countc = 1, countr = 1;
        scanf("%d %d", &chef_power, &rick_power);
        if (rick_power < 10) printf("1 1\n");
        else if (chef_power < 10 && rick_power >= 10) printf("0 1\n");
        else {
            int chef_rem = (chef_power % 9 == 0) ? 0 : 1;
            int rick_rem = (rick_power % 9 == 0) ? 0 : 1;
            countc = chef_rem + (chef_power / 9);
            countr = rick_rem + (rick_power / 9);
            if (countc < countr) printf("0 %d\n", countc);
            else printf("1 %d\n", countr);
        }
    }
    return 0;
}