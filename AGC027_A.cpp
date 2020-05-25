#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
  int n, x;
  cin >> n >> x;
  
  vector<int> a(n);
  for (int i = 0; i < n; i ++)
    cin >> a.at(i);
  
  sort(a.begin(), a.end());
  
  int happy = 0;
  for (int i = 0; i < n; i ++)
  {
    if (x < a.at(i)) break;
    else if (i == n - 1 && a.at(i) != x) break;
    x -= a.at(i);
    happy ++;
  }
  
  cout << happy;
  
  return 0;
}

// どの番号の子にどう配ったかまでは要求されてないので、要求数が少ない子から順に取っていく貪欲法でOK。
// ただしループ抜けチェックは持っているキャンディが要求数を下回っただけでなく最後の一人にちょうど配れないかのチェックも必要。
