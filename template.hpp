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
#include <bit>

using namespace __gnu_pbds;

typedef tree<int, null_type, std::less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef tree<int, null_type, std::less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_mset;

#define IO                                 \
    std::ios_base::sync_with_stdio(false); \
    std::cin.tie(NULL);

#define ll long long
#define vv std::vector
#define pp std::pair
#define mkp std::make_pair
#define ppi std::pair<int, int>
#define vvi std::vector<std::vector<int>>
#define all(a) a.begin(), a.end()
#define hashMap std::unordered_map
#define hashSet std::unordered_set
#define FOR(i, a, b) for (int i = a; i < b; i++)
#define FOR1(i, b) for (int i = 0; i < b; i++)
#define FOR2(i, a) for (const int &i : a)
#define SORT(x) std::sort(x.begin(), x.end())
#define SORTR(x) std::sort(x.rbegin(), xrend());
vv<vv<int>> dirs_4 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}};
vv<vv<int>> dirs_8 = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}, {-1, 1}, {1, 1}, {1, -1}, {-1, -1}};

/*constants*/
#define PI 3.14159265358979323846
#define E 2.71828182845904523536
const int MOD1 = 1e9 + 7;

#endif