#include <iostream>
#include <vector>

void print_vec(const std::vector<double>& vec)
{
    std::cout << "Roots: ";
    for (auto v : vec)
    {
        std::cout << v << " ";
    }

    std::cout << std::endl;
}

std::vector <double> compute_square_roots(double a, double b, double c)
{
    if (a == 0)
    {
        double x = -c / b;
        return { x };
    }
    else
    {
        double d = b * b - 4 * a * c;
        if (d == 0)
        {
            double d = b * b - 4 * a * c;
            double x = -b / 2 * a;
            return { x };
        }
        else
        {
            if (d > 0)
            {
                double x1 = (-b + std::sqrt(d)) / (2 * a);
                double x2 = (-b - std::sqrt(d)) / (2 * a);
                return { x1, x2 };
            }
            else
            {
                return {};
            }
        }
    }
}

int main()
{
    for (;;)
    {
        double a = 0.0;
        double b = 0.0;
        double c = 0.0;

        std::cin >> a;
        std::cin >> b;
        std::cin >> c;

        print_vec(compute_square_roots(a, b, c));

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