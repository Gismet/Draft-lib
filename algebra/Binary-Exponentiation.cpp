#include "template.hpp"

/**
 * Description: calculate a^n
 * Source: https://cp-algorithms.com/algebra/binary-exp.html
 * Time: O(log n)
 * Space: O(1)
 * Related: Modular multiplication, multiplication of matrices
 */

ll binpow(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1) // set bit
            res = res * a;
        a = a * a; // next power
        b >>= 1;
    }
    return res;
}

/*ll recBinpow(ll a, ll b)
{
    if(b == 0)
        return 1;
    ll res = recBinpow(a, b / 2);
    if(b % 2)
        return res * res * a;
    else
        return res * res;
}*/

int main()
{
    ll a, b;
    std::cin >> a >> b;
    std::cout << binpow(a, b);

    return 0;
}