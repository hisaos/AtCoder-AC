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
