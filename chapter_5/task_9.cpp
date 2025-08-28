#include <iostream>


struct Time
{
    int hour;
    int minute;
    int second;
};

void swap(Time&, Time&);

inline void cout_text(Time a, Time b, int type) //type 1 - do, type 2 - posle 
{
    char D = ':';
    switch (type)
    {
        case 1:
            std::cout << "Peremennuye do peremeny mest: ";
            std::cout << "a = " << a.hour << D << a.minute << D << a.second <<  std::endl;
            std::cout << "b = " << b.hour << D << b.minute << D << b.second <<  std::endl;
            break;
        case 2:
            std::cout << "Peremennuye posle peremeny mest: ";
            std::cout << "a = " << a.hour << D << a.minute << D << a.second <<  std::endl;
            std::cout << "b = " << b.hour << D << b.minute << D << b.second <<  std::endl;
            break;
    }
}

int main()
{
    Time a, b;
    std::cout << "Vvedite pervoe vremya: \n";
    std::cin >> a.hour >> a.minute >> a.second;
    std::cout << "Vvedite vtoroe vremya: \n";
    std::cin >> b.hour >> b.minute >> b.second;
    cout_text(a, b, 1);
    swap(a, b);
    cout_text(a, b, 2);
    return 0;
}

void swap(Time& a, Time& b)
{
    Time temp {0, 0, 0};
    temp.hour = a.hour; a.hour = b.hour; b.hour = temp.hour;
    temp.minute = a.minute; a.minute = b.minute; b.minute = temp.minute;
    temp.second = a.second; a.second = b.second; b.second = temp.second;
}


