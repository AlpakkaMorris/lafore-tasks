#include <iostream>

const double PI = 3.14159265358979323846; 
float circarea(float radius);

int main() 
{
    float r = 0;
    std::cout << "Vvedite radius kruga: ";
    std::cin >> r;
    std::cout << "Ploshad' ravna " << circarea(r) << std::endl;
    return 0;
}

float circarea(float radius)
{
    return radius * radius * PI;
}
