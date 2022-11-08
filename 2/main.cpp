#include <iostream>
using namespace std;

int main()
{
    int n, x0, aux, num=0, ls=0, gr=1000, flag=0, hlp=1000, valid=0;
    cin >> n >> x0;
    int str[n][2];
    int sec[n][2];

    for(int i=0; i<n; i++){
        for(int j=0; j < 2; j++){
            cin >> str[i][j];
        }
        if(str[i][0] > str[i][1]){swap(str[i][0],str[i][1]);}
        if(str[i][0] > x0 && str[i][1] > x0){
            valid=1;
            sec[num][0] = str[i][0];
            sec[num][1] = str[i][1]; num++; flag = 1;
        }
        if(flag == 0){
            if(str[i][0] <= x0 && str[i][0] > ls){
                ls = str[i][0];
            }
            if(str[i][1] >= x0 && str[i][1] < gr){
                gr = str[i][1];
            }
        }
        flag = 0;
    }

    for(int i=0; i < num; i++){
        if(sec[i][0] > gr){
            cout << "-1";
            return 0;
        }
    }

    if(valid == 1){
        for(int i=0; i < num; i++){
            if(sec[i][0] < hlp){
                hlp = sec[i][0];
            }
        }

        cout << hlp - x0;
    }
    else{
        cout << "0";
    }
    return 0;
}
