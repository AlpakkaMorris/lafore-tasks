#include <iostream>

struct Time
{
    int hour;
    int minute;
    int second;
};

long time_to_secs(Time);
Time secs_to_time(int time_secs);

int main()
{
    char D = ':';
    int seconds {0};
    int i = 0;
    Time time1 {0, 0, 0};
    
    std::cout << "Vyberite nuzhnuyu funkciyu:\n 1. Perevod c hh:mm:ss v sekundy;\n 2. Perevod c sekund v hh.mm.ss ";
    std::cin >> i;
    switch (i)
    {
        case 1:
            std::cout << "Vvedite vremya v formate hh:mm:ss ";
            std::cin >> time1.hour >> D >> time1.minute >> D >> time1.second;
            std::cout << "Vremya v sekundakh: ";
            std::cout << time_to_secs(time1) << std::endl;
            break;
        case 2:
            std::cout << "Vvedite vremya v sekundakh: ";
            std::cin >> seconds;
            time1 = secs_to_time(seconds);
            std::cout << "Vremya v formate hh:mm:ss: ";
            std::cout << time1.hour << D << time1.minute << D << time1.second << std::endl;
            break;
    }
}

long time_to_secs(Time temp)
{
    return (temp.hour * 3600 + temp.minute * 60 + temp.second);
}

Time secs_to_time(int secs)
{
    Time temp {0, 0, 0};
    temp.hour = secs / 3600;
    temp.minute = (secs - temp.hour * 3600) / 60;
    temp.second = (secs - temp.hour * 3600 - temp.minute * 60);
    return temp;
}


