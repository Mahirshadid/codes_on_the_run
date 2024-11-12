#include<bits/stdc++.h>
using namespace std;

int main(){
    int p = 5;
    int r = 3;
    int total_r[r] = {10,5,7};
    int total_passable_p = 0, total_dl_p = 0;
    int alloc[5][3] = {
        {0,1,0},
        {2,0,0},
        {3,0,2},
        {2,1,1},
        {0,0,2}
    };

    int max_need[5][3] = {
        {7,5,3},
        {3,2,2},
        {9,0,2},
        {4,2,2},
        {5,3,3}
    };

    int rem_need[p][r];

    for(int i=0;i<p;i++){
        for(int j=0;j<r;j++){
            rem_need[i][j] = max_need[i][j]-alloc[i][j];
        }
    }

    cout<<"Remaining Needs:\n";
    for(int i=0;i<p;i++){
        for(int j=0;j<r;j++){
            cout<<rem_need[i][j];
        } cout<<"\n";
    }

    int available_r[r];


     for (int i = 0; i < r; i++) {
        int sum_allocated = 0;
        for (int j = 0; j < p; j++) {
            sum_allocated += alloc[j][i];
        }
        available_r[i] = total_r[i] - sum_allocated;
    }

    cout<<"Available resources:\n";
    for (int i = 0; i < r; i++) {
        cout << available_r[i] << " ";
    }
    cout << "\n";

    for(int i=0;i<p;i++){
        for(int j=0;j<r;j++){
            if(available_r[j]<max_need[i][j]){
                total_dl_p++;
            }else{
                total_passable_p++;
            }
        }
    }

    cout<<"Process passed: "<<total_passable_p<<endl<<"Process deadlocked: "<<total_dl_p;
}
