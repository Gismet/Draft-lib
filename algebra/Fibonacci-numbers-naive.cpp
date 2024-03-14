#include "template.hpp"

/**
 * Description: nth fibonacci number
 * Source: https://cp-algorithms.com/algebra/fibonacci-numbers.html
 * Time: O(n)
 * Space: O(1)
 */

int fib(int n)
{
    int a = 0;
    int b = 1;
    for (int i = 0; i < n; i++)
    {
        int tmp = a + b;
        a = b;
        b = tmp;
    }
    return a;
}

int main()
{
    int n;
    std::cin >> n;
    std::cout << fib(n);

    return 0;
}