#include <iostream>

int a = 0, b = 0;
void zeroSmaller(int& num1, int& num2); 

int main()
{
    std::cin >> a >> b;
    zeroSmaller(a, b);
    std::cout << a << std::endl << b << std::endl;
    return 0;
}

void zeroSmaller(int& a, int& b)
{
    if (a > b) b = 0;
    else a = 0;
}
