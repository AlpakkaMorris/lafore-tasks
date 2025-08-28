#include <iostream>

struct Distance
{
    int feet;
    float inches;
};

Distance returnBigger(Distance, Distance);
void distanceBuild(Distance);

int main()
{
    Distance d1, d2, d3;
    std::cout << "Vvedite futy 1: "; std::cin >> d1.feet;
    std::cout << "Vvedite inches 1: "; std::cin >> d1.inches;
    std::cout << "Vvedite futy 2: "; std::cin >> d2.feet;
    std::cout << "Vvedite inches 2: "; std::cin >> d2.inches;
    d3 = returnBigger(d1, d2);
    distanceBuild(d3);
    return 0;
}

Distance returnBigger(Distance d1, Distance d2)
{
    Distance d3;
    if (d1.feet == d2.feet)
    {
        if (d1.inches > d2.inches) return d1;
        else return d2;
    }
    else
    {
        if (d1.feet > d2.feet) return d1;
        else return d2;
    }
}

void distanceBuild(Distance d)
{
    std::cout << d.feet << "\'-" << d.inches << "\"";
}
