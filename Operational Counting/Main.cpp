
#include <iostream>

using namespace std;

int num;

void sumAdd(int);
void sumCalc(int);

int main()
{
    cout << "Enter a number, please." << endl;
    cin >> num;
    sumAdd(num);
    sumCalc(num);
}

void sumAdd(int x) {
    int total = 0;
    int numOps = 0;

    for (int i = 1; i <= num; ++i) {
        total += i;
        numOps += 1;
    }
    cout << "Total using 1 + 2 + ... + n method: " << total << endl;
    cout << "It took " << numOps - 1 << " total operations.\n" << endl;
}
void sumCalc(int x) {
    int numOps2 = 0;

    int ans = (x + 1);
    numOps2 += 1;
    ans = x * ans;
    numOps2 += 1;
    ans = ans / 2;
    numOps2 += 1;
    cout << "Total using (X*(X+1))/2 method: " << ans << endl;
    cout << "It took " << numOps2 << " total operations.\n" << endl;
}