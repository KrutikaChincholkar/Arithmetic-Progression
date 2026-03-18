#include <iostream>
using namespace std;

int main() {
    int a, d, n, nth;

    cout << "Enter first term: ";
    cin >> a;

    cout << "Enter common difference: ";
    cin >> d;

    cout << "Enter term number (n): ";
    cin >> n;

    nth = a + (n - 1) * d;

    cout << "The " << n << "th term of the AP is: " << nth;

    return 0;
}
