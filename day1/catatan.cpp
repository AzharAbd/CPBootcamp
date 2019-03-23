TOKI : Pemrograman Kompetitif Dasar
S. Halim & F. Halim : Competitive Programming 3

STL C++
#include <cstdio>

Input Tes#5 : 3

scanf("Tes #%d : %d", &i, &j);
printf("Tes# %d : %d", i, j);

#include <iostream>
//Lebih lambat tapi ada tricknya
cin >> "Tes #" >> i >> ":" >> j;
cout << "Tes #" << i << ":" << j;

#include <cstring>
string representasi array of char
char s[1000];
strcpy(s1, s2);
strcmp(s1, s2);
strlen(s1);

#include <cstdlib>
j = abs(i); //absolute integer
j = fabs(i); //absolute float
exit(0); //langsung keluar dari fungsi ketika rekursif
i = rand(); //Menghasilkan nilai random

#include <cmath>
//sin, cos, tan
//sqrt, pow
//floor, ceil

#include <vector>
//Array dinamis
vector<int> vi;

#include <stack>
//Last In First Out
size(), pop(), push(i), top()

#include <queue>
//First In First Out
size(), pop(), push(i), front()

//priority_queue
//ketika menambah elemen akan otomatis terurut berdasarkan prioritas
priority_queue<int> pq;
pq.push(3);
pq.push(5); // isi queue adalah 5,3

#include <deque>
//Gabungan antara stack dan Queue
//Double ended queue. Bisa ditambah di depan dan di belakang
//Akses bisa ngambil depan dan belakang
deque<int> dq;
push_back(i), push_front(i), pop_back(), pop_front()
front(), back()

#include <string>
//String sama kayak di pascal
//I/O harus dengan <iostream>
string s1, s2;

//Input dipisah dengan spasi
cin >> s1;
//Input dipisah dengan newline
getline(cin,s1);

#include <algorithm>
//Template algoritma
reverse(m, m+n0);// reverse array or vector
binary_search(); //binary seacrh, true or false, harus di sort dlu
next_permutation(); //permutasi, harus di sort dulu
*min_element(); //min element of array
*max_element(); //max element of array
sort(m, m+n, cmp); //quick sort, cmp adalah fungsi comparasi

#include <set>
//menggunakkan struktur data black-red tree
//semua isi set unik
set<int> s1;
s1.insert(5);
//ketika insert otomatis di sort dan unik
s1.size(), s1.count(i) //cek apakah i ada di set
//untuk looping harus menggunakkan iterator

#include <map>
//hash map
map<string, int> myMap; //key = string, value = int
myMap["nomor"] =1;
myMap.erase("nomor");
myMap.count("nomor"); // cek apakah key "nomor" ada
myMap.size(); //size map
myMap.clear(); //clear map
//Mencetak isi map
for (map<string,int>::iterator it = myMap.begin(); it != myMap.end(); it++){
  printf("%s %d", it->first, it->second);
}

#include <bitset>
//tipe data yang hanya berkapasitas 1 bit, 1/0
bitset<40> b1; //40 adalah size dari bitset
//operasi-operasi hanya dapat melakukan operasi bit

for (int b = 0; b < 1<<n; i++){
  vector<int> v;
  for (int i = 0; i < 1<<b ; i++){
    if (b&1<<i){
      v.push_back(i+1);
    }
  }
}
