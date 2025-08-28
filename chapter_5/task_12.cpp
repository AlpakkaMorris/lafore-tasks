#include <iostream>

struct fraction
{
    int num;
    int denom;
};

fraction fadd(fraction&, fraction&);
fraction fsub(fraction&, fraction&);
fraction fmul(fraction&, fraction&);
fraction fdiv(fraction&, fraction&);

char slash = '/';
char op;
char is_continue;

int main()
{
    fraction f1 {0, 0}, f2 {0, 0}, f3 {0, 0};
    do
    {
        std::cout << "Vvedite vyrazhenie: ";
        std::cin >> f1.num >> slash >> f1.denom
                 >> op >>
                    f2.num >> slash >> f2.denom;
        
        switch (op)
        {
            case '+':
                f3 = fadd(f1, f2);
                std::cout << "Summa ravna " << f3.num << slash << f3.denom << std::endl;
                break;
            case '-':
                f3 = fsub(f1, f2);
                std::cout << "Raznitca ravna " << f3.num << slash << f3.denom << std::endl;
                break;
            case '*':
                f3 = fmul(f1, f2);
                std::cout << "Proizvedeniye ravno " << f3.num << slash << f3.denom << std::endl;
                break;
            case '/':
                f3 = fdiv(f1, f2);
                std::cout << "Chastnoye ravno " << f3.num << slash << f3.denom << std::endl;
                break;
        }
        
        std::cout << "Prodolzhit' vypolnenie programmy? (y/n) ";
        std::cin >> is_continue;
    } while (is_continue != 'n');
}

fraction fadd(fraction& f1, fraction& f2)
{
    fraction f3 {f1.num * f2.denom + f1.denom * f2.num, f1.denom * f2.denom};
    return f3;
}

fraction fsub(fraction& f1, fraction& f2)
{
    fraction f3 {f1.num * f2.denom - f2.num * f1.denom, f1.denom * f2.denom};
    return f3;
}

fraction fmul(fraction& f1, fraction& f2)
{
    fraction f3 {f1.num * f2.num, f1.denom * f2.denom};
    return f3;
}

fraction fdiv(fraction& f1, fraction& f2)
{
    fraction f3 {f1.num * f2.denom, f1.denom * f2.num};
    return f3;
}
