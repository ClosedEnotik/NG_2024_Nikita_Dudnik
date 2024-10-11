#include <iostream>

int main() {
    int number;

    std::cout << "How much money do you make?: ";
    std::cin >> number;

    if (number > 1000 and number < 999999) {
        std::cout << "You`re good" << std::endl;
    }

    if (number < 1000 ) {
        std::cout << "You must work more" << std::endl;
    }

    if (number > 1000000) {
        std::cout << "So you`re a millionaire " << std::endl;
    }

    return 0;
}
