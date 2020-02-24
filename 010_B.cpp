#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  // むしった花びらの数入れ
  int petalCount = 0;
  
  for (int i = 0; i < n; i ++)
  {
    // 花びらの数を取ってくる。vectorはいらない
    int tmp;
    cin >> tmp;
	  
    // 条件から、最初にtmpが偶数か、tmp=3k-1 (k >= 1、自然数)かのどちらでもない数になるまでtmpをデクリメントしつつ、petalCountをインクリメント
    while ( ( (tmp % 2) == 0) || ( (tmp % 3) == 2) )
    {
      tmp --;
      petalCount ++;
    }
  }
  
  cout << petalCount << endl;
  
  return 0;
}
