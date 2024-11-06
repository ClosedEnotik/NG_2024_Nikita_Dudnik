#include <iostream>
using namespace std;
int main()
{
    int number;

    cout << "How much money do you make?: ";
    cin >> number;

    if (number > 1000 and number < 999999) {
        cout << "You`re good" << endl;
    }

    if (number < 1000 ) {
        cout << "You must work more" << endl;
    }

    if (number > 1000000) {
        cout << "So you`re a millionaire " << endl;
    }

    return 0;
}
