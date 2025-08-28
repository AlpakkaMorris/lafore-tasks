#include <iostream>



double power(double n, int p);

int main()
{
    int kol = 0;
    std::cout << "Skol'ko chisel budem vozvodit' v stepen'?\n";
    std::cin >> kol;
    do
    {
        double a = 0;
        int b = 0;
        std::cout << "Vvedi chislo i pokazatel' stepeni: \n";
        std::cin >> a >> b;
        
        std::cout << "Otvet raven " << power(a, b) << std::endl;
        kol--;
    } while (kol != 0);
    
}

double power(double n, int p = 2)
{
    double res = n;
    for (int i = 1; i < p; i++)
    {
        res *= n;
    }
    return res;
}
