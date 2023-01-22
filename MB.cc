#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<char>> MB(3,vector<char>(3,'-'));
    for(int i=0;i<9;i++){
        if(i%2==0){
            cout<<"〇のターン"<<endl;
        }else{
            cout<<"×のターン"<<endl;
        }
        cout<< "x,yの位置は？"<<endl;
        int x,y;
        cin >>x>>y;
        if(i%2==0){
            MB.at(x).at(y)='o';
        }else{
            MB.at(x).at(y)='x';
        }
        for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                cout <<MB.at(j).at(k);
            }
            cout <<endl;
            
        }

    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout <<MB.at(i).at(j);
        }
        cout <<endl;
    }
    cout <<endl;

    char z;
    //横数え
    int count=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<1;j++){
            if(MB[i][j]==MB[i][j+1] && MB[i][j] != '-'){
                count++;
            }
            if(MB[i][j]==MB[i][j+2]){
                count++;
                z=MB[i][j];
            }
        }
        if(count==2){
            printf("%cが横に揃いました\n",z);
        }
        count=0;
    }

    //縦数え
    for(int i=0;i<1;i++){
        for(int j=0;j<3;j++){
            if(MB[i][j]==MB[i+1][j] && MB[i][j] != '-'){
                count++;
            }
            if(MB[i][j]==MB[i+2][j]){
                count++;
                z=MB[i][j];
            }
            if(count==2){
                printf("%cが縦に揃いました\n",z);
            }
            count=0;   
        }    
    }

    //右ななめ下数え
    for(int i=0;i<1;i++){
        for(int j=0;j<1;j++){
            if(MB[i][j]==MB[i+1][j+1] && MB[i][j] != '-'){
                count++;
            }
            if(MB[i][j]==MB[i+2][j+2]){
                count++;
                z=MB[i][j];
            }
        }
        if(count==2){
            printf("%cが斜めに揃いました\n",z);
        }
        count=0;
    }


    //左ななめ下数え
    if(MB[2][0]==MB[1][1] && MB[2][0] != '-'){
        count++;
        if(MB[2][0]==MB[0][2]){
            count++;
            z=MB[2][0];
        }
    }
    if(count==2){
       printf("%cがななめに揃いました\n",z); 
    }
}