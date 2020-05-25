#include<bits/stdc++.h>
using namespace std;

int main()
{
  int deg, dis;
  
  cin >> deg >> dis;
  
  int W;
  double wSpeed = round(((double)dis / 60) * 10) / 10;
  
  if (0.0 <= wSpeed && wSpeed <= 0.2)
  {
    cout << "C 0" << endl;
    return 0;
  }
  else if (0.3 <= wSpeed && wSpeed <= 1.5)
    W = 1;
  else if (1.6 <= wSpeed && wSpeed <= 3.3)
    W = 2;
  else if (3.4 <= wSpeed && wSpeed <= 5.4)
    W = 3;
  else if (5.5 <= wSpeed && wSpeed <= 7.9)
    W = 4;
  else if (8.0 <= wSpeed && wSpeed <= 10.7)
    W = 5;
  else if (10.8 <= wSpeed && wSpeed <= 13.8)
    W = 6;
  else if (13.9 <= wSpeed && wSpeed <= 17.1)
    W = 7;
  else if (17.2 <= wSpeed && wSpeed <= 20.7)
    W = 8;
  else if (20.8 <= wSpeed && wSpeed <= 24.4)
    W = 9;
  else if (24.5 <= wSpeed && wSpeed <= 28.4)
    W = 10;
  else if (28.5 <= wSpeed && wSpeed <= 32.6)
    W = 11;
  else if (32.7 <= wSpeed)
    W = 12;

  string Dir;
  int scaledDeg = deg * 10;
  
  if (1125 <= scaledDeg && scaledDeg < 3375)
    Dir = "NNE";
  else if (3375 <= scaledDeg && scaledDeg < 5625)
    Dir = "NE";
  else if (5625 <= scaledDeg && scaledDeg < 7875)
    Dir = "ENE";
  else if (7875 <= scaledDeg && scaledDeg < 10125)
    Dir = "E";
  else if (10125 <= scaledDeg && scaledDeg < 12375)
    Dir = "ESE";
  else if (12375 <= scaledDeg && scaledDeg < 14625)
    Dir = "SE";
  else if (14625 <= scaledDeg && scaledDeg < 16875)
    Dir = "SSE";
  else if (16875 <= scaledDeg && scaledDeg < 19125)
    Dir = "S";
  else if (19125 <= scaledDeg && scaledDeg < 21375)
    Dir = "SSW";
  else if (21375 <= scaledDeg && scaledDeg < 23625)
    Dir = "SW";
  else if (23625 <= scaledDeg && scaledDeg < 25875)
    Dir = "WSW";
  else if (25875 <= scaledDeg && scaledDeg < 28125)
    Dir = "W";
  else if (28125 <= scaledDeg && scaledDeg < 30375)
    Dir = "WNW";
  else if (30375 <= scaledDeg && scaledDeg < 32625)
    Dir = "NW";
  else if (32625 <= scaledDeg && scaledDeg < 34875)
    Dir = "NNW";
  else Dir = "N";
  
  cout << Dir << " ";
  cout << fixed << setprecision(1) << W << endl;
  
  return 0;
}

// 面倒。
// 角度を100倍して整数化してから比較して精度誤差を避ける方法は有効だった模様
// fixedとsetprecision(int n)は小数点以下の精度指定があるときに必須。マニピュレータと呼ぶらしい。
// cout << fixed << setprecision(10) で小数部10桁0埋めができる。
