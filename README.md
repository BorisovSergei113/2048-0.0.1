# 2048-0.0.1
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    int pole[4][4] = {0};
    char operation;
    int ochki = 0;
    int a,b=0;
    bool flag_out = false;
    bool sluch=false;
    /* randomz1=array[rand()%10];
    randomz2=array[rand()%10];
    randomz3=array[rand()%10];


    pole[rand()%4][rand()%4]=randomz1;
    pole[rand()%4][rand()%4]=randomz2;
    pole[rand()%4][rand()%4]=randomz3;
   */
    int array [10] = {2,2,2,2,2,2,2,2,2,4};


    srand(time(0));


    for (int i = 0; i<4; i++) {
        for (int j =0 ; j<4; j++) {
            if(pole[i][j]==0)
            {cout<<"*"<<" ";}
            else
            {cout<<pole[i][j];}
        }
        cout<<'\n';
    }



    while (flag_out==false) {
        cin>>operation;
        //
        switch(operation)
        {
            case 'j':

                for(int i=0;i<4;i++){
                    for(int j=3;j>=0;j--){
                        if(pole[j][i]==0){
                            for(int k=j-1;k>=0;k--){
                                if(pole[k][i]!=0){
                                    pole[j][i]=pole[k][i];
                                    pole[k][i]=0;
                                    break;
                                }
                            }
                        }
                    }
                }

                for(int i=0;i<4;i++){
                    for(int j=3;j>0;j--){
                        if( pole[j][i]==pole[j-1][i]){
                            pole[j][i]=pole[j][i] + pole[j-1][i];
                            pole[j-1][i]=0;
                            ochki=ochki+pole[j][i];
                        }
                    }
                }

                for(int i=0;i<4;i++){
                    for(int j=3;j>=0;j--){
                        if(pole[j][i]==0){
                            for(int k=j-1;k>=0;k--){
                                if(pole[k][i]!=0){
                                    pole[j][i]=pole[k][i];
                                    pole[k][i]=0;
                                    break;
                                }
                            }
                        }
                    }
                }
                 while(sluch!=true)
                 {    srand(time(0));
                     a = rand() % 4;
                     b = rand() % 4;
                     cout<<a<<b<<'\n';

                    if (pole[a][b] == 0) {
                        pole[a][b] = array[rand() % 10];
                        sluch=true;
                    }
                else sluch=false;
                 }
                sluch=false;


                for (int i=0; i<4; i++) {
                    for (int j=0; j<4; j++) {
                        if(pole[i][j]==0)
                        {    cout<<"cicle"<<i<<j<<'\n';
                            flag_out=false;
                            break;
                        }
                        else flag_out=true;

                    }
                }
                break;
            case 'k':
                for(int i=0;i<4;i++){
                    for(int j=0;j<4;j++){
                        if(pole[j][i]==0){
                            for(int k=j+1;k<4;k++){
                                if(pole[k][i]!=0){
                                    pole[j][i]=pole[k][i];
                                    pole[k][i]=0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for(int i=0;i<4;i++){
                    for(int j=0;j<3;j++){
                        if(pole[j][i]==pole[j+1][i]){
                            pole[j][i]=pole[j][i] + pole[j+1][i];
                            pole[j+1][i]=0;
                            ochki=ochki+pole[j][i];
                        }
                    }
                }
                for(int i=0;i<4;i++){
                    for(int j=0;j<4;j++){
                        if(pole[j][i]==0){
                            for(int k=j+1;k<4;k++){
                                if(pole[k][i]!=0){
                                    pole[j][i]=pole[k][i];
                                    pole[k][i]=0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for (int i=0; i<4; i++) {
                    for (int j=0; j<4; j++) {
                        if(pole[i][j]==0)
                        {
                            flag_out=false;
                            break;
                        }
                        else flag_out=true;

                    }
                }
                break;


            case 'h':
                for(int i=0;i<4;i++){
                    for(int j=0;j<4;j++){
                        if(pole[i][j]==0){
                            for(int k=j+1;k<4;k++){
                                if(pole[i][k]!=0){
                                    pole[i][j]=pole[i][k];
                                    pole[i][k]=0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for(int i=0;i<4;i++){
                    for(int j=0;j<3;j++){
                        if(pole[i][j]==pole[i][j+1]){
                            pole[i][j]=pole[i][j] + pole[i][j+1];
                            pole[i][j+1]=0;
                            ochki=ochki+pole[i][j];
                        }
                    }
                }
                for(int i=0;i<4;i++){
                    for(int j=0;j<4;j++){
                        if(pole[i][j]==0){
                            for(int k=j+1;k<4;k++){
                                if(pole[i][k]!=0){
                                    pole[i][j]=pole[i][k];
                                    pole[i][k]=0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for (int i=0; i<4; i++) {
                    for (int j=0; j<4; j++) {
                        if(pole[i][j]==0)
                        {
                            flag_out=false;
                            break;
                        }
                        else flag_out=true;

                    }
                }
                break;

            case 'l':
                for(int i=0;i<4;i++){
                    for(int j=3;j>=0;j--){
                        if(pole[i][j]==0){
                            for(int k=j-1;k>=0;k--){
                                if(pole[i][k]!=0){
                                    pole[i][j]=pole[i][k];
                                    pole[i][k]=0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for(int i=0;i<4;i++){
                    for(int j=3;j>=0;j--){
                        if(pole[i][j]==pole[i][j-1]){
                            pole[i][j]=pole[i][j] + pole[i][j-1];
                            pole[i][j-1]=0;
                            ochki=ochki+pole[i][j];
                        }
                    }
                }
                for(int i=0;i<4;i++){
                    for(int j=3;j>=0;j--){
                        if(pole[i][j]==0){
                            for(int k=j-1;k>=0;k--){
                                if(pole[i][k]!=0){
                                    pole[i][j]=pole[i][k];
                                    pole[i][k]=0;
                                    break;
                                }
                            }
                        }
                    }
                }
                for (int i=0; i<4; i++) {
                    for (int j=0; j<4; j++) {
                        if(pole[i][j]==0)
                        {
                            flag_out=false;
                            break;
                        }
                        else flag_out=true;

                    }
                }
                break;
            case 'q':
                flag_out=true;
                break;
        }
        for (int i = 0; i<4; i++) {
            for (int j =0 ; j<4; j++) {
                if(pole[i][j]==0)
                {cout<<"*"<<" ";}
                else
                {cout<<pole[i][j]<<" ";}
            }
            cout<<'\n';
        }
        cout<<"score = "<<ochki<<'\n';
    }


    return 0;
}
