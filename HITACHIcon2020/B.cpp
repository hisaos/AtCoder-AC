#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  int a, b, m;
  cin >> a >> b >> m;
  
  vector<int> fridge(a);
  vector<int> washer(b);
  for (int i = 0; i < a; i ++)
    cin >> fridge.at(i);
  for (int j = 0; j < b; j ++)
    cin >> washer.at(j);
  
  int min_sum = 200001;
  int tmp_sum;
  
  // 割引券使用の場合を調べる
  int x, y, c;
  for (int i = 0; i < m; i ++)
  {
    cin >> x >> y >> c;
    tmp_sum = fridge.at(x - 1) + washer.at(y - 1) - c;
    if (tmp_sum < min_sum) min_sum = tmp_sum;
  }
  
  sort(fridge.begin(), fridge.end());
  sort(washer.begin(), washer.end());
  
  if (fridge.at(0) + washer.at(0) < min_sum) min_sum = fridge.at(0) + washer.at(0);
  
  cout << min_sum;
  
  return 0;
}

// 割引券を使う場合と使わない場合の場合分け
// 割引券を使わない場合は最安2つを買うのが最適
// 余計な組み合わせについては調べない枝刈り
