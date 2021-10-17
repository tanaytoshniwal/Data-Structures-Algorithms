#include <bits/stdc++.h>
using namespace std;

void TakeInput(int*, int);
void CountInput(int*, int);

int main() {
    int ArrSize;

    cout << "\n_________________________________";
    cout << "\nPlease Enter total elements: ";
    cin >> ArrSize;
    cout << "---------------------------------\n";

    int Arr[ArrSize];
    TakeInput(Arr, ArrSize);
    sort(Arr, Arr + ArrSize);
    CountInput(Arr, ArrSize);

    return 0;
}

void TakeInput(int Arr[], int Size) {
    for (int i = 0; i < Size; i++) {
        cin >> Arr[i];
    }
}

void CountInput(int Arr[], int Size) {
    int q, p;

    cin >> q;
    for (int i = 0;i < Size;i++) {
        cin >> p;
        int j = 0, count = 0, sum = 0;

        while(Arr[j] <= p && j < Size) {
            count++;
            sum += Arr[j];
            j++;
        }
        cout << count << " " << sum << endl;
    }
}