#include<iostream>
using namespace std;

int main()
{
  char c;
  while (cin >> c)
  {
    if (c == '1') cout << '9';
    else cout << '1';
  }
  
  return 0;
}
    
// 標準入力から文字列の各文字を一文字ずつ見ていくとき、while (cin >> c){}とやるとひと手間
