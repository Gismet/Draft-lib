#include "template.hpp"

/**
 * Description: calculate a^n modulo m
 * Source: https://cp-algorithms.com/algebra/binary-exp.html
 * Time: O(logn)
 * Space: O(1)
 */

const int MOD = 1e9 + 7;

ll powmod(ll a, ll b, ll m)
{
    a %= m;
    ll res = 1;
    while (b > 0)
    {
        if (b & 1) // set bit
            res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return res;
}

int main()
{
    ll a, b;
    std::cin >> a >> b;
    std::cout << powmod(a, b, MOD);

    return 0;
}