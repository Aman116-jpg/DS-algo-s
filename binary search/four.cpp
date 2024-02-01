#include<iostream>
#include<vector>
using namespace std;

int lastocc(vector<int> v, int target){
    int start = 0;
    int end = v.size()-1;

    int mid = start + (end - start)/2 ;
    int ans = -1;

    while(start<=end){
        if(v[mid] == target){
            ans = mid;
            // right search
            start = mid + 1;
        }
        else if(target< v[mid]){
            //left search
            end = mid - 1;
        }
        else if(target > v[mid]){
            start = mid + 1;
        }
        mid = start + (end - start)/2 ;
    }
    return ans;
}



int main(){

    // last occurence search kro


      
    vector<int> v{1,3,7,7,7,7,7,7,7,7,7,7,7,7,9};
    int target = 7;

    int ans = lastocc(v, target);
    cout<<"last occurence "<<ans <<endl;

    




}