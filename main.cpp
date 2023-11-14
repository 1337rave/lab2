#include <iostream>

using namespace std;

#define MIN(x, y) ((x) < (y) ? (x) : (y))

#define MAX(x, y) ((x) > (y) ? (x) : (y))

#define SQUARE(x) ((x) * (x))

#define POWER(x, n) pow((x), (n))

#define IS_EVEN(x) ((x) % 2 == 0)

#define IS_ODD(x) ((x) % 2 != 0)

int main() {

    int a = 5, b = 8;

    cout << "Smaller of " << a << " and " << b << ": " << MIN(a, b) << endl;
    cout << "Larger of " << a << " and " << b << ": " << MAX(a, b) << endl;
    cout << a << " squared: " << SQUARE(a) << endl;
    cout << a << " raised to the power of 3: " << POWER(a, 3) << endl;

    if (IS_EVEN(a))
        cout << a << " is an even number." << endl;
    else
        cout << a << " is an odd number." << endl;

    if (IS_ODD(b))
        cout << b << " is an odd number." << endl;
    else
        cout << b << " is an even number." << endl;

    return 0;
}
//