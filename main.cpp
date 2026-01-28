#include <iostream>

using namespace std;

int main()
{
    int m,n;
    int tomb[20][20];
    cout<<"szam";
    cin>>m;
    cout<<"szam";
    cin>>n;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i>j){
                if(i>=10){
                tomb[i][j]=j*100+i;
                } else{
                tomb[i][j]=j*10+i;}
            }
            else {
                    if(j>=10){
                        tomb[i][j]=i*100+j;
                    } else{
                tomb[i][j]=i*10+j;}
            }
        }
    }

    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
                cout<<tomb[i][j]<<" ";}
        cout<<endl;}



    return 0;
}
