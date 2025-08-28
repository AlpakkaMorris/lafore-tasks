#include <iostream>

int global_count {0};

void counter_global();
void counter_staticlocal();

int main()
{
    for (int i = 1; i <= 60; i++) counter_global();
    for (int j = 1; j <= 60; j++) counter_staticlocal();
    std::cout << std::endl;
}

void counter_global()
{
    global_count++;
    std::cout << global_count << " ";
}
   
void counter_staticlocal()
{
    static int local_count {0};
    local_count++;
    std::cout << local_count << " ";
}
