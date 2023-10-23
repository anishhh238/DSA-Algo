# include <iostream>
using namespace std;
bool binary_search(int arr[],int s,int e,int target){
    if(s>e) return false;
    int mid=s+(e-s)/2;
    if(arr[mid]==target){
        return true;
    }
    else if(arr[mid]>target){
        binary_search(arr,s,mid-1,target);
    }
    else{
        binary_search(arr,mid+1,e,target);
    }
}
int main(){
    int arr[10]={2,4,6,8,9,12,34,67,89,99};
    int n=10;
    cout<<binary_search(arr,0,9,0);
}