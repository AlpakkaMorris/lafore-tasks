#include <iostream>



char power(char, int);
int power(int, int);
long power(long, int);
float power(float, int);

int main()
{
    char a1 = 128;
    int a2 = 32767;
    long a3 = 21474836;
    float a4 = 234.6;
    int b = 3;
    std::cout << "Vvedi chisla formatov char, int, long i float: \n";
    std::cin >> a1 >> a2 >> a3 >> a4;
    std::cout << "Vvedi pokazatel' stepeni: \n";
    std::cin >> b;
    std::cout << "Otvet raven " << power(a1, b) << std::endl;
    std::cout << "Otvet raven " << power(a2, b) << std::endl;
    std::cout << "Otvet raven " << power(a3, b) << std::endl;
    std::cout << "Otvet raven " << power(a4, b) << std::endl;

    
}

char power(char n, int p = 2)
{
    double res = n;
    for (int i = 1; i < p; i++)
    {
        res *= n;
    }
    std::cout << "char n\n";
    return res;
}

int power(int n, int p = 2)
{
    double res = n;
    for (int i = 1; i < p; i++)
    {
        res *= n;
    }
    std::cout << "int n\n";
    
    return res;
}

long power(long n, int p = 2)
{
    double res = n;
    for (int i = 1; i < p; i++)
    {
        res *= n;
    }
    std::cout << "long n\n";
    
    return res;
}

float power(float n, int p = 2)
{
    double res = n;
    for (int i = 1; i < p; i++)
    {
        res *= n;
    }
    std::cout << "float n\n";
    return res;
}
