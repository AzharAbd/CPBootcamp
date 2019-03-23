#include <bits/stdc++.h>

using namespace std;

bool cekPrim(int n){
  int sq = sqrt(n);
  for (int i = 2; i < sq; i++){
    if (n % i == 0){
      return true;
    }
  }
  return false;
}

bool selesai(int n, bool *cek){
  for (int i = 2; i <= n; i++){
    if (!cek[i]){
      retun false;
    }
  }
  return true;
}

int main(){
  int n;
  bool end =  false;
  bool cek[n+1];
  int ans[n+1];
  bool ada = false;

  for (int i = 0; i <= n; i++){
    cek[i] = false;
  }
  ans[1] = 1;
  while (!end){
    for (int i =2; i <=n; i++){
      for (int j = 2; j <= n; j++){
        if (!cek[j] ){
          if (cekPrim(j+ans[i-1])){
            ans[i] = j;
            break;
          }
          cek[j] = true;
        }
      }
      end = selesai();
      for (int k =2; k <= n; k++){
        cek[k] = false;
      }
    }
  }

  return 0;
}
