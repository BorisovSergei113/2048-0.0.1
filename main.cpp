

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int main() {
    int pole [4] [4]={0};
    char operation;
    int ochki = 0;
    bool flag_out =false;
    int randomz1,randomz2,randomz3;
    int array[10] = {2,2,2,2,2,2,2,2,2,4};
    

    srand(time(NULL));
    randomz1=array[rand()%10];
    randomz2=array[rand()%10];
    randomz3=array[rand()%10];
    
    
    cout<<randomz1<<randomz2<<randomz3<<"   Sluchainie chisla 2 ili 4"<<'\n';
    

     cout<<"Promejutojni itog"<<'\n';
        pole[rand()%4][rand()%4]=randomz1;
        pole[rand()%4][rand()%4]=randomz2;
        pole[rand()%4][rand()%4]=randomz3;
    
    for (int i = 0; i<4; i++) {
        for (int j =0 ; j<4; j++) {
            cout<<pole[i][j];
        }
        cout<<'\n';
    }
    
    
    
    while (flag_out==false) {
        

    cout<<"Vvedite znachenie j,k,h,l"<<'\n';
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
    }
        for (int i = 0; i<4; i++) {
            for (int j =0 ; j<4; j++) {
                cout<<pole[i][j];
            }
            cout<<'\n';
        }
        cout<<"ochki= "<<ochki<<'\n';
    }
    
    
    return 0;
}
