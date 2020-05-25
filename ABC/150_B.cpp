#include<bits/stdc++.h>
using namespace std;

int main()
{
  char one, two, three;
  int n;
  string s;
  
  cin >> n;
  cin >> s;
  
  int count = 0;
  for (int i = 0; i < n; i ++)
  {
    three = two;
    two = one;
    one = s.at(i);
    
    if (one == 'C' && two == 'B' && three == 'A') count ++;
  }
  
  cout << count << endl;
  
  return 0;
}

// 新しい情報を入れてスワップして古い情報を維持するときは、一番古いほうから情報更新していくのを忘れないように
// 反対にすることがよくある。反対にすると全部最新の情報で塗りつぶされてバグる
