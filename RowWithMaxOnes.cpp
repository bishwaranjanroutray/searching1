#include<iostream>
using namespace std;

int main(){
    int arr[5][6]={{0,0,0,0,1,1},{0,0,1,1,1,1},{0,1,1,1,1,1},{0,0,0,0,1,1},{0,0,0,0,1,1}};
    int n=6;
    int m=5;
    int row=0;
    int x=1;
    int maxones=0;
    for(int i=0;i<m;i++){
        int count=0;
        int lo=0;
        int hi=n-1;
        int firstidx=-1;
        while(lo<=hi){
            int mid=(hi+lo)/2;
            if(arr[i][mid]==x){
                if(mid==0){
                    firstidx=mid;
                    break;
                }
                else if(arr[i][mid-1]!=x){
                    firstidx=mid;
                    break;
                }
                else{
                    hi=mid-1;
                }
            }
            else if(arr[i][mid]<x) lo=mid+1;
            else hi=mid-1;
        }
        if(firstidx==-1) count=0;
        else count=n-firstidx;
        if(maxones<count){
            maxones=count;
            row=i;
        }
    }
    cout<<row;
    
}