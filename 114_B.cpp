#include<iostream>
using std::cout;
using std::cin;
using std::endl;

#include<string>
using std::string;

#include<cmath>
using std::abs;

#include<cstdlib>
using std::stoi;

int main()
{
  string s;
  cin >> s;
  
  const int favorite = 753;
  int min_diff = 1000;
  
  for (int i = 0; i < s.size() - 2; i ++)
  {
    int tmp = abs(favorite - stoi(s.substr(i, 3)) );
    if (tmp < min_diff) min_diff = tmp;
  }
        
  cout << min_diff << endl;
  return 0;
}

// absはcmath, atoiやstoiはcstdlib
// atoi->*char、stoi->string
// substrはstring、s.substr(i, len)で使える
// 差の絶対値で比較とかやるときに、使い捨ての変数を使う場合は最初からその使い捨ての変数に必要な処理を施した値を入れておくこと。
// 前から3文字ずつ見る時、ループの始点終端はs.size()じゃなくてs.size() - 2。忘れると結果が変になる。
