#include <bits/stdc++.h>

int base[101][101], nova[101][101];
int lin, col;

int main(){

	scanf("%d %d", &lin, &col);
	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			scanf("%d", &base[i][j]);
		}
	}

	for(int i = 1; i < lin-1; i++){
		for(int j = 1; j < col-1; j++){
			if(base[i][j] == 1){
				nova[i][j] = 9;
			} else {
				nova[i][j] = base[i-1][j] + base[i+1][j] + base[i][j+1] + base[i][j-1];
			}	
		}
	}

	for(int i = 1; i < lin-1; i++){
		if(base[i][0] == 1){
			nova[i][0] = 9;
		} else {
			nova[i][0] = base[i][1] + base[i+1][0] + base[i-1][0];
		}	

		if(base[i][col-1] == 1){
			nova[i][col-1] = 9;
		} else {
			nova[i][col-1] = base[i][col-2] + base[i+1][col-1] + base[i-1][col-1];
		}	
	}


	for(int j = 1; j < col-1; j++){
		if(base[0][j] == 1){
			nova[0][j] = 9;
		} else {
			nova[0][j] = base[1][j] + base[0][j+1] + base[0][j-1];
		}	

		if(base[lin-1][j] == 1){
			nova[lin-1][j] = 9;
		} else {
			nova[lin-1][j] = base[lin-2][j] + base[lin-1][j+1] + base[lin-1][j-1];
		}
	}

	nova[0][0] = base[0][0]==1?9:base[1][0] + base[0][1];
	nova[0][col-1] = base[0][col-1]==1?9:base[0][col-2] + base[1][col-1];
	nova[lin-1][0] = base[lin-1][0]==1?9:base[lin-2][0] + base[lin-1][1];
	nova[lin-1][col-1] = base[lin-1][col-1]==1?9:base[lin-2][col-1] + base[lin-1][col-2]; 

	for(int i = 0; i < lin; i++){
		for(int j = 0; j < col; j++){
			printf("%d", nova[i][j]);
		}
		printf("\n");
	}

	return 0;
}