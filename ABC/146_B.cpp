#include<bits/stdc++.h>
using namespace std;

int main()
{
  const int Adigit = (int)'A';
  const int Zdigit = (int)'Z';
  
  int n;
  string s;
  
  cin >> n;
  cin >> s;
  
  int c;
  int len = s.size();
  for (int i = 0; i < len; i ++)
  {
    c = (int)s.at(i) + n;
    if (c > Zdigit) c = c % (Zdigit + 1) + Adigit;
    cout << (char)c;
  }
  cout << endl;
  
  return 0;
}

// ある文字列を境界として使うとき、const int型に'A'とか'Z'とかをintにキャストした値を入れておくと便利
// 'Z'と'a'の間には6つ記号が挟まっていることに注意。
// (int)'a'というキャスト
