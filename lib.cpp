// [0, n-1]の和を返す
int sum_from_zero(int n)
{
  int s = 0;
  for (int i = 0; i < n; i ++)
    s += i;
  return s;
}

// nを1番目としてnから降順にr番目までの数の和を返す
int rev_sum(int n, int r)
{
  int s = 0;
  for (int i = n; i > n - r; -- i)
    s += i;
  return s;
}

// n!(階乗)
int factorial(int n)
{
  if (n == 1) return 1;
  else return n * factorial(n - 1);
}

// nCr(組み合わせ)
int combination(int n, int r)
{
  return factorial(n) / (factorial(n - r) * factorial(r));
}

// a, bの最大公約数
int gcd(int a, int b)
{
  int r = a % b;
  int gcd = b;
 
  int tmp;
  while (r != 0)
  {
    tmp = r;
    r = gcd % r;
    gcd = tmp;
  } 
  
  return gcd;
}
