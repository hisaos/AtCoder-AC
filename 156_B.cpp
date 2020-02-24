#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, k;
  cin >> n >> k;
  
  int digits = 1;
  while (n >= k)
  {
    n /= k;
    digits ++;
  }

  cout << digits << endl;
  
  return 0;
}

// nをk進数で表現するにはkでnを割っていって余りを並べる、の応用。
