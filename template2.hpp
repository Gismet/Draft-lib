#ifndef MY_TEMPLATE
#define MY_TEMPLATE

#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <string>
#include <cmath>
#include <numeric>
#include <assert.h>
#include <functional>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ctime>
#include <chrono>
#include <climits>
#include <iomanip>

using namespace __gnu_pbds;

typedef tree<int, null_type, std::less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef tree<int, null_type, std::less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_mset; // lower_bound(x - 1)

#define IO                                 \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);

#define i64 int64_t
#define i32 int32_t
#define ui unsigned int
#define ull unsigned long long
#define lb std::lower_bound
#define ub std::upper_bound
#define pb push_back
#define ins insert
#define fr first
#define sc second
#define ll long long
#define ld long double
#define vv std::vector
#define pp std::pair
#define mkp std::make_pair
#define ppi std::pair<int, int>
#define vvi std::vector<std::vector<int>>
#define all(a) a.begin(), a.end()
#define allr(a) a.rbegin(), a.rend()
#define sze(a) (int(x.size()))
#define hashMap std::unordered_map
#define hashSet std::unordered_set
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FOR0(i, b) for (int i = 0; i < b; i++)
#define FOR1(i, a) for (const int &i : a)
#define ROF(i, a, b) for (int i = a; i >= b; i--)
#define SORT(x) std::sort(x.begin(), x.end())
#define SORTR(x) std::sort(x.rbegin(), x.rend());
#define yes std::cout << "YES\n";
#define no std::cout << "NO\n";
vv<vv<int>> dirs_4 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
vv<vv<int>> dirs_8 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, -1}};

const int MOD1 = int(1e9) + 7;
const ld EPS = 1e-9;

/*Debug*/
#define LOG(_ii) std::cerr << #_ii << ": " << _ii << '\n';

struct CPU_timer
{
    clock_t begin;

    void start()
    {
        begin = std::clock();
    }

    double get_time()
    {
        clock_t finish = clock();
        double duration = double(finish - begin) / CLOCKS_PER_SEC;
        return duration;
    }
};

#define test(tt)    \
    IO int tt;      \
    std::cin >> tt; \
    while (tt--)

/*
    1.get ith bit => x & (1<<i)
    2.set ith bit to 1 => x | (1<<i)
    3.set ith bit to 0 => x & ~(1<<i)
    4.invert ith bit => x ^ (1<<i)
    5.set the last one bit (1) to zero => x & (x - 1) for example 110100 -> 110000
    6.for long long bit mask, use 1LL<<i
*/

#endif