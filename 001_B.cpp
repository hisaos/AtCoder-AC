#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;
  float km = (float)m / 1000;
  
  if (km < 0.1)
    cout << "00" << endl;
  else if (0.1 <= km && km <= 5)
  {
    if (km < 1)
      cout << '0' << (int)(km * 10) << endl;
    else
      cout << (int)(km * 10) << endl;
  }
  else if (6 <= km && km <= 30)
    cout << (int)(km + 50) << endl;
  else if (35 <= km && km <= 70)
    cout << (int)((km - 30) / 5 + 80) << endl;
  else if (km > 70)
    cout << "89" << endl;
  
  return 0;
}

// 最初はmをkmに直さずにmで進めようとしたが、逆に煩雑だった
// AtCoderのA, B問題くらいは問題にだいたいアルゴリズムを書いてくれてるので、素直に従おう
// ずっとfloatを使ってたけど、AtCoderのC++入門では実数はdoubleなので今後はdoubleを使う。
// イキってfloatを使うと答えで小数点の精度が足りずに詰む。
// doubleには接尾辞なし。fとかつけない。
// return 0; 忘れてACしてたけどええんかな？
