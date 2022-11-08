#include <iostream>
using namespace std;

int main(){
    int n, idx=0, i=0, j=0;
    cin >> n;

    int mat[n][n];
    int aux[n] = {0};
    int aux2[n];

    for(i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cin >> mat[i][j];
        }
    }

    for(i=0; i < n; i++){
        for(int j=0; j < n; j++){
            if(mat[i][j] == 1){
                aux[i] = 1;
            }else if(mat[i][j] == 2){
                aux[j] = 1;
            }else if(mat[i][j] == 3){
                aux[i] = 1;
                aux[j] = 1;
            }
        }
    }


    for(i=0, j=0; i < n; i++){
        if(aux[i] == 0){
            aux2[j++] = i+1;
        }
    }

    cout << j << endl;
    for(i=0;i<j;i++){
        cout << aux2[i] << " ";
    }


    /* for(int i=0; i<n; i++){
        printf("%d - %d\n", i, aux[i]);
    } */

    return 0;
}