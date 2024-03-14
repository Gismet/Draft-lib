#include "template.hpp"

/**
 * Description: nth Fibonacci number
 * Source: https://cp-algorithms.com/algebra/fibonacci-numbers.html
 * Time: O(logn)
 * Space: O(1)
 * Source problem: https://cses.fi/problemset/task/1722
 */


struct matrix
{
    ll mat[2][2];
    matrix friend operator*(const matrix &a, const matrix &b)
    {
        matrix c;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                c.mat[i][j] = 0;
                for (int k = 0; k < 2; k++)
                    c.mat[i][j] =(c.mat[i][j] +  (a.mat[i][k] * b.mat[k][j]) % MOD1) % MOD1;
            }
        }
        return c;
    }
};

matrix matpow(matrix base, ll n)
{
    matrix ans{{// identity matrix (identity element for matrix)
                {1, 0},
                {0, 1}}};

    while (n > 0)
    {
        if (n & 1)
            ans = ans * base;
        base = base * base;
        n >>= 1;
    }

    return ans;
}

ll fib(ll n)
{
    matrix base{{{1, 1},
                 {1, 0}}};
    return matpow(base, n).mat[0][1];
}

int main()
{
    ll n;
    std::cin >> n;
    std::cout << fib(n);

    return 0;
}