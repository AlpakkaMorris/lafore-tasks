#include <iostream>

void swap(int& a, int& b);

inline void cout_text(int a, int b, int type) //type 1 - do, type 2 - posle 
{
    switch (type)
    {
        case 1:
            std::cout << "Peremennuye do peremeny mest: ";
            std::cout << "a = " << a << ", b = " << b << std::endl;
            break;
        case 2:
            std::cout << "Peremennuye posle peremeny mest: ";
            std::cout << "a = " << a << ", b = " << b << std::endl;
            break;
    }
}

int main()
{
    int a{0}, b{0};
    std::cout << "Vvedite dve peremennuye: \n";
    std::cin >> a >> b;
    cout_text(a, b, 1);
    swap(a, b);
    cout_text(a, b, 2);
    return 0;
}

void swap(int& a, int& b)
{
    int temp {0};
    temp = a; a = b; b = temp;
}


