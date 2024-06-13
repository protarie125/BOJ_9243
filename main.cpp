#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;

ll n;
string s, a, e;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> n;
  cin >> s >> a;
  e = s;
  if (1 == n % 2) {
    for (auto&& x : e) {
      if ('0' == x) {
        x = '1';
      } else if ('1' == x) {
        x = '0';
      }
    }
  }

  if (a == e) {
    cout << "Deletion succeeded";
  } else {
    cout << "Deletion failed";
  }

  return 0;
}