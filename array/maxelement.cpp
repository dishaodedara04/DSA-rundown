//fidn the largest elemnt in array 
#include<iostream>
using namespace std;
int findmax(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
        
    }
    return max;
}

int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int max =  findmax(arr,n);
    cout<<"maximum element is "<<max;
   

}