#include <iostream>

long hms_to_secs(int hours, int minutes, int seconds);

int main()
{
    int h = 1, m = 1, s = 1;
    std::cout << "Vvedite poocheryodno chasy, minuty i secundy: \n";
    std::cin >> h >> m >> s;
    while (h > 0 && m > 0 && s > 0)
    {
        std::cout << h << ":" << m << ":" << s << std::endl;
        std::cout << hms_to_secs(h, m, s);
        std::cout << "Vvedite poocheryodno chasy, minuty i secundy: \n";
        std::cin >> h >> m >> s;
    };
}

long hms_to_secs(int h, int m, int s)
{
    return (h * 3600 + m * 60 + s);
}
