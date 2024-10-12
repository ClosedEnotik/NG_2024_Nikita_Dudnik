#include <iostream>
#include <thread>
#include <chrono>
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

void printTriangle1() {
    std::cout << "*    \n";
    std::cout << "**   \n";
    std::cout << "***  \n";
    std::cout << "**** \n";
    std::cout << "*****\n";
}


void printTriangle2() {
    std::cout << "*****\n";
    std::cout << "**** \n";
    std::cout << "***  \n";
    std::cout << "**   \n";
    std::cout << "*    \n";
}


void printTriangle3() {
    std::cout << "*****\n";
    std::cout << " ****\n";
    std::cout << "  ***\n";
    std::cout << "   **\n";
    std::cout << "    *\n";
}


void printTriangle4() {
    std::cout << "    *\n";
    std::cout << "   **\n";
    std::cout << "  ***\n";
    std::cout << " ****\n";
    std::cout << "*****\n";
}

int main() {
    while (true) {
        clearScreen();
        printTriangle1();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));

        clearScreen();
        printTriangle2();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));

        clearScreen();
        printTriangle3();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));

        clearScreen();
        printTriangle4();
        std::this_thread::sleep_for(std::chrono::milliseconds(400));
    }

    return 0;
}
