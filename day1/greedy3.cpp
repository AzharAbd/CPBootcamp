#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;
  int o;
  int w;
  scanf("%d",&n);
  long int ans[n];
  scanf("%d",&o);
  scanf("%d",&w);
  bool benar = true;
  int sisa = n - w - o;
  int idx;
  idx = 0;
  //ans[idx] =sisa + 5;
  if (w > 0){
    ans[idx] = 1;
  } else{
    ans[idx] = 2;
  }
  idx++;
  int sum = ans[0];
  int sisasisa = 1;
  for (int i = 0; i < w; i++ ){
    ans[idx] = sum +1;
    sum += ans[idx];
    if (ans[idx] > 50000){
      benar = false;
    }
    idx++;
  }
  if (sum == ans[0] && o > 0){
    ans[idx] =  ans[0] -1;
    idx++;
    sisasisa++;
  }
  for (int i = 0; i < o; i++){
    ans[idx] = ans[idx-1]+1;
    if (ans[idx] > 50000){
      benar = false;
    }
    idx++;
  }
  for (int i = 0; i < sisa-sisasisa; i++){
    //ans[idx] = sisa+5-sisasisa - i;
    ans[idx] = ans[0];
    if (ans[idx] > 50000){
      benar = false;
    }
    idx++;
  }
  if (benar && idx <= n){
    for (int i = 0; i < idx-1; i++){
      printf("%ld ",ans[i]);
    }
    printf("%ld\n",ans[idx-1]);
  } else{
    printf("-1\n");
  }
  return 0;
}
