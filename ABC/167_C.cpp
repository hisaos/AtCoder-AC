#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
  int n, m, x;
  cin >> n >> m >> x;
  
  vector<vector<int>> a(n, vector<int>(m + 1));
  for (int i = 0; i < n; i ++)
  {
    for (int j = 0; j < m + 1; j ++)
    {
      cin >> a.at(i).at(j);
    }
  }
    
  int min_sum = 13 * 100000;
  
  const int mask = (int)pow(2, n) - 1;
  for (int k = 0; k <= mask; k ++)
  {
    vector<int> skills(m);
    int price = 0;
    
    for (int i = 0; i < n; i ++)
    {
      int bit = (int)pow(2, i);
      if ((mask & k & bit) == 0)
      {
        continue;
      }
      
      price += a.at(i).at(0);

      for (int j = 1; j < m + 1; j ++)
      {
        skills.at(j - 1) += a.at(i).at(j);
      }
    }
    
    bool flag = true;
    for (int j = 0; j < m; j ++)
    {
      if (skills.at(j) < x)
      {
        flag = false;
        break;
      }
    }
    
    if (flag)
    {
      if (price < min_sum) min_sum = price;
    }
  }
  
  if (min_sum == 13 * 100000) cout << -1 << endl;
  else cout << min_sum << endl;
  
  return 0;
}

// ビット演算のやり方
// mask = 0b11111111として、10進数kを2進数表記したときのビット列だけ取り出したいとき->mask & k
// 長さnのビット列の全パターンを網羅しつつ、第i番目のビットが立っているときに処理を行いたいとき、kを2^nまでぶん回してmask & k & pow(2, i) (i: [0, n-1])して求めた
