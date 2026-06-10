#ifndef FILE_HPP
#define FILE_HPP

void showMainMenu();

void basicOperationMenu();

double add(double, double);
double subtract(double, double);
double multiply(double, double);
double divide(double, double);

void advancedOperationMenu();

int findPower(int, int);
long long int fact(int);
bool isPrime(int);

void arrayOperationMenu();

void inputArray(int *, int);
void printArray(int *, int);
int findMax(int *, int);
int findMin(int *, int);
void reverseArray(int *, int);
void moveZeros(int *, int);
void moveEven(int *, int);
int countElement(int *, int, int);

#endif