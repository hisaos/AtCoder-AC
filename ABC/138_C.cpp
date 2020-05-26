#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  vector<double> a(n);
  for (int i = 0; i < n; i ++)
    cin >> a.at(i);
  
  sort(a.begin(), a.end());
  
  double tmp = (a.at(0) + a.at(1)) / 2;
  for (int i = 2; i < n; i ++)
    tmp = (tmp + a.at(i)) / 2;
  
  cout << tmp;
  
  return 0;
}

// 価値の小さいものから順に錬成
// 錬成後の具材の価値を数直線上にプロットした時、小さいものから錬成していけば一貫してプロットは右に行く
