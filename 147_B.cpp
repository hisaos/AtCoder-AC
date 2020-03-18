#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  
  int len = s.size();
  int count = 0;
  for (int i = 0; i < len / 2; i ++)
    if (s.at(i) != s.at(len - (i + 1)) ) count ++;
  
  cout << count << endl;
  
  return 0;
}

// 左半分と右半分を後ろから読んだ文字列のハミング距離を求める
// 難しく考えずに左端と右端から順に文字を比べていって違うやつを見つけたらインクリメントでOK
