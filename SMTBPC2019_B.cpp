#include<iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  //1円単位の税込価格nを108で割って、それに100を掛けて税抜価格として...とやるが、
  double n_double = (double)n;
  double x_one = n_double / 108;

  //整数の税抜価格の候補を求めるときの誤差としては、100を掛けたときのfloorとceilで十分と思われる
  //108で割ったものの小数点込みのところに100掛けてるので値の振れ幅は1より大きな幅にならないはず
  //真の値がある場合はfloorかceilのどっちかに引っかかる
  double x_proto = x_one * 100;
  int x_int_proto_1 = (int)x_proto;
  int x_int_proto_2 = x_int_proto_1 + 1;
  
  //1.08を掛けた値をintキャストでfloorして、nと比較。
  if (n == (int)(x_int_proto_1 * 1.08)) cout << x_int_proto_1 << endl;
  else if(n == (int)(x_int_proto_2 * 1.08)) cout << x_int_proto_2 << endl;
  else cout << ":(" << endl;
  
  return 0;
}
