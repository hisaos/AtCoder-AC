#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  int odds = (n % 2 == 0) ? n / 2 : n / 2 + 1;
  
  double p;
  p = odds / (double)n;
  
  cout << setprecision(9) << fixed << p << endl;
  return 0;
}

// 小数点の桁数指定、cout << setprecision(n) << fixed << xはイディオム。
