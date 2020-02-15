#include<bits/stdc++.h>
using namespace std;

int main()
{
  string S, T;
  int a, b;
  string U;
  
  cin >> S >> T;
  cin >> a >> b;
  cin >> U;

  if (S == U) a--;
  else b--;
  
  cout << a << " " << b << endl;
  
  return 0;
}
