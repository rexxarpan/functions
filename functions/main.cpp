#include <iostream>

void func(double a)
{
    std::cout << "int func(double a)" << std::endl;
}

void compute_square_roots()
{
    double a = 0.0;
    double b = 0.0;
    double c = 0.0;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;

    //std::cout << a << b << c << std::endl;

    if (a == 0)
    {
        double x = -c / b;
        std::cout << "Root " << x << std::endl;
    }
    else
    {
        double d = b * b - 4 * a * c;
        if (d == 0)
        {
            double d = b * b - 4 * a * c;
            std::cout << "Desc " << d << std::endl;
            double x = -b / 2 * a;
            std::cout << "Root " << x << std::endl;
        }
        else
        {
            if (d > 0)
            {
                double x1 = (-b + std::sqrt(d)) / (2 * a);
                double x2 = (-b - std::sqrt(d)) / (2 * a);
                std::cout << "Root1 " << x1 << std::endl;
                std::cout << "Root2 " << x2 << std::endl;
            }
            else
            {
                std::cout << "Roots not found " << std::endl;
            }
        }
    }
}

int main()
{
    for (;;)
    {
        compute_square_roots();

        std::cout << "Should i continue 1/0" << std::endl;
        int flag{ 0 };
        std::cin >> flag;
        if (flag == 0)
        {
            break;
        }
    }
    return 0;
}