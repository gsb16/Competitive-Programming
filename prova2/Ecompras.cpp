#include <bits/stdc++.h>
int preco[100010], arv[100010];
//segtree max
void constroimax(int nodo, int a, int b){
	if(a > b) return;

	if(a == b){
		arv[nodo] = arr[a];
		return;
	}

	constroimax(nodo*2, a, (a+b)/2);
	constroimax(nodo*2+1, 1+(a+b)/2, b);

	arv[nodo] = std::max(arv[nodo*2], arv[nodo*2+1]);
}

void atualizamax(int nodo, int a, int b, int i, int j, int val){
	if(a > b || a > j || b < i){
		return;
	}

	if(a == b){
		arv[nodo] = value;
		return;
	}

	atualizamax(nodo*2, a, (a+b)/2, i, j, val);
	atualizamax(nodo*2+1, 1+(a+b)/2, b, i, j, val);

	arv[nodo] = std::max(arv[nodo*2], arv[nodo*2+1]);
}

int querymax(int nodo, int a, int b, int i, int j){
	if(a > b || a > j || b < i){
		return -inf;
	}	

	if(a>=i && b <=j){
		return arv[nodo];
	}

	int q1 = querymax(nodo*2, a, (a+b)/2, i, j);
	int q2 = querymax(nodo*2+1, 1+(a+b)/2, b, i, j);

	return std::max(q1, q2);
}

//segtree min 
void constroimin(int nodo, int a, int b){
	if(a > b) return;

	if(a == b){
		arv[nodo] = arr[a];
		return;
	}

	constroimin(nodo*2, a, (a+b)/2);
	constroimin(nodo*2+1, 1+(a+b)/2, b);

	arv[nodo] = std::min(arv[nodo*2], arv[nodo*2+1]);
}

void atualizamin(int nodo, int a, int b, int i, int j, int val){
	if(a > b || a > j || b < i){
		return;
	}

	if(a == b){
		arv[nodo] = value;
		return;
	}

	atualizamin(nodo*2, a, (a+b)/2, i, j, val);
	atualizamin(nodo*2+1, 1+(a+b)/2, b, i, j, val);

	arv[nodo] = std::min(arv[nodo*2], arv[nodo*2+1]);
}
int querymin(int nodo, int a, int b, int i, int j){
	if(a > b || a > j || b < i){
		return -inf;
	}	

	if(a>=i && b <=j){
		return arv[nodo];
	}

	int q1 = querymin(nodo*2, a, (a+b)/2, i, j);
	int q2 = querymin(nodo*2+1, 1+(a+b)/2, b, i, j);

	return std::max(q1, q2);
}

int main(){

	scanf("%d", &n);
	for(int i = 0; i < n; i++){
		scanf("%d", preco[i]);
	}
	return 0;
}