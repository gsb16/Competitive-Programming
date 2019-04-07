#include <bits/stdc++.h>
#define MAX(x,y) ((x) > (y) ? (x) : (y))


int x[100000];
int y[100000];
int bit[1001][1001];

void iniciaBit(){

   for (int i = 0; i <= 1000; ++i)
   {
      for (int j = 0; j <= 1000; ++j)
      {
         bit[i][j] = 0;
      }
   }

}

void update( int x, int y, int val){

   for (int i = x; i <= 1000;  i+= i&-i )
   {
      for (int j = y; j <= 1000;  j+=j&-j)
      {
         bit[i][j] = MAX(bit[i][j], val);
         //bit[i][j] += val;
      }
   }

}


int query( int x, int y){

   int res = 0;


   for (int i = x; i ;  i-= i & -i )
   {
      for (int j = y; j;  j-= j & -j)
      {
         res = MAX(bit[i][j] , res);
      }
   }

   return res;
}

int main(){

   int qtdInstancias, n, tmp;


   scanf("%d", &qtdInstancias);

   for(int i = 0; i < qtdInstancias;++i){
      iniciaBit();
      scanf("%d", &n);
      for(int j = 0; j < n; ++j){
         scanf("%d %d", &x[j], &y[j]);
      }

      for(int j = 0; j < n; ++j){
         tmp = 1 + query( x[j], y[j]);
         update(x[j], y[j], tmp);
      }

      
      tmp = query(1000, 1000);
      printf("%d\n", tmp);
   }


   return 0;
}
