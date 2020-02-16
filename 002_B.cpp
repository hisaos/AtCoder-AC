#include<bits/stdc++.h>
using namespace std;

int main()
{
  string voice;
  cin >> voice;
  
  int len = voice.size();
  
  for(int i = 0; i < len; i++)
  {
    char v = voice.at(i);
    if (v == 'a' || v == 'i' || v == 'u' || v == 'e' || v == 'o');
    else
      cout << voice.at(i);
  }
  cout << endl;
  return 0;
}
