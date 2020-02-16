#include<bits/stdc++.h>
using namespace std;

int main()
{
  int xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;
  
  double area;
  
  area = abs((double)((xb - xa) * (yc - ya) - (yb - ya) * (xc - xa))) / 2;
  cout << fixed << setprecision(1) << area << endl;
  
  return 0;
}

// ヒント「3 点 (0,0), (a,b), (c,d) で構成される三角形の面積は、|ad−bc|/2」を思いっきりそのまま実装。ヘロンの公式とかいらんかったんや！
// 面積を求めるところの式は最初、(double)abs((xb - xa) * (yc - ya) - (yb - ya) * (xc - xa)) / 2 としていた
// が、これだとint abs(int x)が呼ばれて誤差が出る。
// double abs(double x) を呼ぶには、引数をdoubleにキャストしないとダメ。
