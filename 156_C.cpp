#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  vector<int> x(n);
  int Sx = 0;
  int max = 0;
  int min = 101;
  
  for (int i = 0; i < n; i ++)
  {
    cin >> x.at(i);
    Sx += x.at(i);
    if (max < x.at(i)) max = x.at(i);
    if (min > x.at(i)) min = x.at(i);
  }

  int rally_min = 1000000000;
  
  for (int i = min; i <= max; i ++)
  {
    int temp = 0;
    for (int j = 0; j < n; j ++)
    {
      temp += (x.at(j) - i) * (x.at(j) - i);
    }
    if (temp < rally_min) rally_min = temp;
  }
  
  cout << rally_min << endl;
  
  return 0;
}

// 数直線上に住人を並べたときにカバーする範囲の内側に最適の点はあろうという仮定で、最初に座標を取ってくるときにmax, minもついでに取っておく
// ベタベタに集会場所を1ずつ移動させつつ各住人の消費エネルギーの総和を取っていく方法ではTLEかと思ったら、それで間に合った
// 2乗はmath関数じゃなくて2回掛けた
