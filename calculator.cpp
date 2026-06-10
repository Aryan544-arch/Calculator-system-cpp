#include <iostream>
#include <cmath>
#include "file.hpp"
#include <climits>

void showMainMenu()
{
    std::cout << std::endl
              << std::endl
              << "Press" << std::endl
              << std::endl;
    std::cout << "1 for Basic Operations" << std::endl;
    std::cout << "2 for Advanced Operations" << std::endl;
    std::cout << "3 for Array Operations" << std::endl;
    std::cout << "4 for Exit" << std::endl;
    return;
}

void basicOperationMenu()
{
    while (true)
    {
        std::cout << std::endl
                  << std::endl
                  << "Press" << std::endl
                  << std::endl;
        std::cout << "1 to Add 2 numbers" << std::endl;
        std::cout << "2 to Subtract 2 numbers" << std::endl;
        std::cout << "3 to Multiply 2 numbers" << std::endl;
        std::cout << "4 to Divide 2 numbers" << std::endl;
        std::cout << "5 to go Main Menu" << std::endl;
        int n;
        std::cout << "Enter Choice: ";
        std::cin >> n;
        if (n == 5)
            break;
        switch (n)
        {
        case 1:
        {
            double a, b;
            std::cout << "Enter 2 Numbers: ";
            std::cin >> a >> b;
            std::cout << "Result: " << add(a, b) << std::endl;
            break;
        }
        case 2:
        {
            double a, b;
            std::cout << "Enter 2 Numbers: ";
            std::cin >> a >> b;
            std::cout << "Result: " << subtract(a, b) << std::endl;
            break;
        }
        case 3:
        {
            double a, b;
            std::cout << "Enter 2 Numbers: ";
            std::cin >> a >> b;
            std::cout << "Result: " << multiply(a, b) << std::endl;
            break;
        }
        case 4:
        {
            double a, b;
            std::cout << "Enter 2 Numbers: ";
            std::cin >> a >> b;
            std::cout << "Result: " << divide(a, b) << std::endl;
            break;
        }
        default:
            std::cout << "Wrong Input" << std::endl;
        }
    }
}

double add(double a, double b)
{
    return a + b;
}

double subtract(double a, double b)
{
    return a - b;
}

double multiply(double a, double b)
{
    return a * b;
}

double divide(double a, double b)
{
    if (b == 0)
    {
        std::cout << "Division by zero not possible" << std::endl;
        return 0;
    }
    return a / b;
}

void advancedOperationMenu()
{
    while (true)
    {
        std::cout << std::endl
                  << std::endl
                  << "Press" << std::endl
                  << std::endl;
        std::cout << "1 to find Power" << std::endl;
        std::cout << "2 for Factorial" << std::endl;
        std::cout << "3 to check Number is Prime" << std::endl;
        std::cout << "4 to go Main Menu" << std::endl;
        int n;
        std::cout << "Enter Choice: ";
        std::cin >> n;
        if (n == 4)
            break;
        switch (n)
        {
        case 1:
        {
            int base;
            std::cout << "Enter Base: ";
            std::cin >> base;
            int exp;
            std::cout << "Enter Exponential: ";
            std::cin >> exp;
            if (exp < 0)
            {
                std::cout << "Negative exponent not suported\n";
            }
            else
                std::cout << "Result: " << findPower(base, exp) << std::endl;
            break;
        }
        case 2:
        {
            int num;
            std::cout << "Enter Number: ";
            std::cin >> num;
            if (num < 0)
            {
                std::cout << "Factorial not defined\n";
            }
            else
                std::cout << "Result: " << fact(num) << std::endl;
            break;
        }
        case 3:
        {
            int num;
            std::cout << "Enter Number: ";
            std::cin >> num;
            if (isPrime(num))
            {
                std::cout << "Prime" << std::endl;
            }
            else
            {
                std::cout << "Not Prime" << std::endl;
            }
            break;
        }
        default:
            std::cout << "Wrong Input" << std::endl;
        }
    }
}

int findPower(int a, int b)
{
    if (b == 0)
        return 1;
    return a * findPower(a, b - 1);
}

long long int fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

bool isPrime(int n)
{
    if (n < 2)
        return false;
    int size = sqrt(n);
    for (int i = 2; i <= size; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void arrayOperationMenu()
{
    int size;
    std::cout << "Enter Size: ";
    std::cin >> size;
    if (size < 1)
    {
        std::cout << "Invalid Size\n";
        return;
    }
    int *arr = new int[size];
    bool check = false;
    while (true)
    {
        std::cout << std::endl
                  << std::endl
                  << "Press" << std::endl
                  << std::endl;
        std::cout << "1 to Input Array" << std::endl;
        std::cout << "2 to Print Array" << std::endl;
        std::cout << "3 to Find Maximum Number" << std::endl;
        std::cout << "4 to Find Minimum Number" << std::endl;
        std::cout << "5 to Reverse Array" << std::endl;
        std::cout << "6 to move Zeros" << std::endl;
        std::cout << "7 to move Even Numbers" << std::endl;
        std::cout << "8 to count Element" << std::endl;
        std::cout << "9 to go Main Menu" << std::endl;
        int n;
        std::cout << "Enter Choice: ";
        std::cin >> n;
        if (n == 9)
        {
            delete[] arr;
            break;
        }
        switch (n)
        {
        case 1:
        {
            std::cout << "Enter Elements: ";
            inputArray(arr, size);
            check = true;
            break;
        }
        case 2:
        {
            if (!check)
                std::cout << "Input Array First" << std::endl;
            else
                printArray(arr, size);
            break;
        }
        case 3:
        {
            if (!check)
                std::cout << "Input Array First" << std::endl;
            else
                std::cout << "Maximum Element: " << findMax(arr, size) << std::endl;
            break;
        }
        case 4:
        {
            if (!check)
                std::cout << "Input Array First" << std::endl;
            else
                std::cout << "Minimum Element: " << findMin(arr, size) << std::endl;
            break;
        }
        case 5:
        {
            if (!check)
                std::cout << "Input Array First" << std::endl;
            else
            {
                reverseArray(arr, size);
                printArray(arr, size);
            }
            break;
        }
        case 6:
        {
            if (!check)
                std::cout << "Input Array First" << std::endl;
            else
            {
                moveZeros(arr, size);
                printArray(arr, size);
            }
            break;
        }
        case 7:
        {
            if (!check)
                std::cout << "Input Array First" << std::endl;
            else
            {
                moveEven(arr, size);
                printArray(arr, size);
            }
            break;
        }
        case 8:
        {
            if (!check)
                std::cout << "Input Array First" << std::endl;
            else
            {
                int element;
                std::cout << "Enter Element: ";
                std::cin >> element;
                std::cout << "Element Count: " << countElement(arr, size, element) << std::endl;
            }
            break;
        }
        default:
            std::cout << "Wrong Input" << std::endl;
        }
    }
}

void inputArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int findMax(int *arr, int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}

int findMin(int *arr, int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
}

void reverseArray(int *arr, int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

void moveZeros(int *arr, int n)
{
    for (int i = 0, j = 0; j < n; j++)
    {
        if (arr[j] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
}

void moveEven(int *arr, int n)
{
    for (int i = 0, j = 0; j < n; j++)
    {
        if (arr[j] % 2 == 0)
        {
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
        }
    }
}

int countElement(int *arr, int n, int element)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == element)
        {
            count++;
        }
    }
    return count;
}