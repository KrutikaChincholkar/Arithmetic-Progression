#include <iostream>
using namespace std;

int main() {
    int a, d, n;
    float sum;

    cout << "Enter first term: ";
    cin >> a;

    cout << "Enter common difference: ";
    cin >> d;

    cout << "Enter number of terms: ";
    cin >> n;

    sum = (n * (2 * a + (n - 1) * d)) / 2.0;

    cout << "Sum of first " << n << " terms = " << sum;

    return 0;
}
