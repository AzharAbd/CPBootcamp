#include <cstdio>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main(){
  string s1;
  cin >> s1;
  bool yes = true;
  int idx = 0;
  while (idx < s1.length()){
    if (s1.compare(idx,3,"144") == 0){
      idx += 3;
    } else if (s1.compare(idx,2,"14") == 0){
      idx += 2;
    } else if (s1.compare(idx,1,"1") == 0){
      idx++;
    } else {
      yes = false;
      break;
    }
  }
  if (yes){
    printf("YES\n");
  } else {
    printf("NO\n");
  }
}
