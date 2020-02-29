#include<bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  cin >> s;
  
  cout << (char)toupper(s.at(0));
  for(int i = 1; i < s.size(); i ++)
  {
    cout << (char)tolower(s.at(i));
  }
  cout << endl;
  return 0;
}

// uppercase, nouppercaseマニピュレータはhex等と組み合わせないと効果ない。一般の文字列変換問題には使えないので注意。
// toupper(), tolower()で文字の大文字、小文字化ができる。ただし戻り値がintなのでcharにキャストしないとcoutに通しても文字にならない。
