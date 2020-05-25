#include<iostream>
using namespace std;

int64_t gcd(int64_t, int64_t);
int64_t lcm(int64_t, int64_t);

int main()
{
  int64_t a, b;
  cin >> a >> b;

  cout << lcm(a, b) << endl;
  
  return 0;
}

int64_t gcd(int64_t a, int64_t b)
{
  int64_t r = a % b;
  int64_t gcd = b;
 
  int64_t tmp;
  while (r != 0)
  {
    tmp = r;
    r = gcd % r;
    gcd = tmp;
  } 
  
  return gcd;
}

// a, bの最小公倍数をL, 最大公約数をGとしたとき、LG=ab -> L=ab/G
int64_t lcm(int64_t a, int64_t b)
{
  return a * b / gcd(a, b);
}

// 2^5を2つ掛ける可能性がある場合はintでは収まらない
