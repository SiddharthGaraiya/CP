#include <bits/stdc++.h>

int main(){

    int inputarr[3][3];
    int n;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            std::cin>>n;
            inputarr[i][j]=n;
        }
    }

    int ansarr[3][3];
    int count;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            count+=inputarr[i][j];
            if (j-1>=0)
            {
                count+=inputarr[i][j-1];
            }
            if (i-1>=0)
            {
                count+=inputarr[i-1][j];
            }
            if (j+1<3)
            {
                count+=inputarr[i][j+1];
            }
            if (i+1<3)
            {
                count+=inputarr[i+1][j];
            }
            if (count%2==0) ansarr[i][j]=1;
            else ansarr[i][j]=0;
            count=0;
            std::cout<<ansarr[i][j];
        }
        std::cout<<"\n";
    }
    

    return 0;
}