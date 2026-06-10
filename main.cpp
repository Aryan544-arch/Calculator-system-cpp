#include <iostream>
#include "file.hpp"
int main()
{
    while (true)
    {
        showMainMenu();
        int n;
        std::cout << "Enter Choice: ";
        std::cin >> n;
        switch (n)
        {
        case 1:
            basicOperationMenu();
            break;
        case 2:
            advancedOperationMenu();
            break;
        case 3:
            arrayOperationMenu();
            break;
        case 4:
            return 0;
        default:
            std::cout << "Wrong Input" << std::endl;
        }
    }
}