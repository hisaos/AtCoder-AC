#include<iostream>
using namespace std;

bool isPrime(int x);

int main()
{
  int x;
  cin >> x;
  
  while(1)
  {
    if (isPrime(x)) break;
    x ++;
  }
  
  cout << x << endl;
  return 0;
}

bool isPrime(int x)
{
  if (x == 2) return true;
  if (x % 2 == 0) return false;

  for (int i = 2; i < x / 2; i ++)
    if (x % i == 0) return false;

  return true;
}

// x入力してxも含めて素数判定する場合は、先にx++してはいけない
// 素数判定関数で偶数を弾くのはいいけど、x==2の場合だけは特例にするのを忘れない
