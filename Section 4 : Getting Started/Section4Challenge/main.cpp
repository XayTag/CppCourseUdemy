#include <iostream>

int main()
{
    int favnumber;

    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favnumber;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
    std::cout << "No really!!, " << favnumber << " is my favorite number!" << std::endl;

    std::cin.ignore(255, '\n');
    std::cin.get();
    return 0;
}
