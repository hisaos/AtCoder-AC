#include<iostream>
#include<vector>
using namespace std;

int main()
{
  int64_t n, m;
  cin >> n >> m;
  
  if (n == 1 && m == 1) cout << 1;
  else if (n == 1) cout << m - 2;
  else if (m == 1) cout << n - 2;
  else cout << (n - 2) * (m - 2);
  return 0;
}

// 条件付けは厳しい方から先に置かないとバグる
// 掛け算の結果がintの範囲外になるときはllかint64_tを使う

