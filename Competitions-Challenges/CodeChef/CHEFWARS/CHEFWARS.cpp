#include <bits/stdc++.h>
using namespace std;
#define iambatman                \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);               \
    cout.tie(NULL);

#define success printf("1\n")

#define failure printf("0\n")

int main() {
    iambatman int testcases;
    scanf("%d", &testcases);
    while (testcases--) {
        int power, health;
        scanf("%d %d", &health, &power);
        if (power >= health) success;
        else {
            while (power > 0 && health >= 0) {
                health -= power;
                power = (power == 1) ? 0 : power / 2;
            }
            (health > 0) ? failure : success;
        }
    }
    return 0;
}