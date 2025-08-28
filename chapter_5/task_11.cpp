#include <iostream>

struct sterling
{
    int f;
    int sh;
    int p;
};

sterling get_sterling_values();
sterling sum_sterling_values(sterling, sterling);
void return_sterling_values(sterling);


int main()
{
    sterling s1, s2, ssum;
    s1 = get_sterling_values();
    s2 = get_sterling_values();
    ssum = sum_sterling_values(s1, s2);
    return_sterling_values(ssum);
    return 0;
}

sterling get_sterling_values()
{
    sterling temp {0, 0, 0};
    std::cout << "Vvedite funty, shillingi i pensy: ";
    std::cin >> temp.f >> temp.sh >> temp.p;
    return temp;
}

sterling sum_sterling_values(sterling s1, sterling s2)
{
    sterling temp {0, 0, 0};
    temp.f = s1.f + s2.f;
    temp.sh = s1.sh + s2.sh;
    temp.p = s1.p + s2.p;
    return temp;
}

void return_sterling_values(sterling s)
{
    std::cout << "Summa dvuh valyut ravna ";
    std::cout << s.f << "/" << s.sh << "/" << s.p << std::endl;
}
