#include<bits/stdc++.h>
using namespace std;

int main()
{
  const int price = 500;

  int k, x;
  cin >> k >> x;
  
  if (k * price >= x) cout << "Yes" << endl;
  else cout << "No" << endl;
  
  return 0;
}

// const使うときは関数の中?
