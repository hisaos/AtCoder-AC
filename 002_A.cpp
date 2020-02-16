#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  if (a > b)
    cout << a << endl;
  else
    cout << b << endl;
}

// つまりmax(int a, int b)の実装
// 本問では a == b がないので等しい場合は考えてない
