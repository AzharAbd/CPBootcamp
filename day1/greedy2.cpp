#include <bits/stdc++.h>

using namespace std;

int main(){
  long long int box[5000];
  bool isi[5000];
  bool masuk[5000];
  int n;
  int count;
  scanf("%d\n",&n);
  count = n;
  for (int i = 0; i < n; i++){
    scanf("%lld",&box[i]);
    isi[i] = false;
    masuk[i] = false;
  }

  sort(box, box+n);
  for (int i = 0; i < n; i++){
    if (!masuk[i]){
      for (int j = i+1; j < n; j++){
        if (box[j] > box[i]){
          if (!isi[j]){
            count--;
            isi[j] = true;
            masuk[i] = true;
            break;
          }
        }
      }
    }
  }
  printf("%d\n",count);
  return 0;
}
