#include<iostream>
#include<vector>
using namespace std;


int firstoccurence(vector<int>v, int target){
    int start = 0; 
    int end = v.size()-1;
    int mid =  start + (end - start)/2 ;
    int ans = -1;
    while(start<= end){
        if(v[mid] == target){     
             // ans store and then left search
           ans = mid;
           end = mid - 1;
        }
        else if(target > v[mid]){
            // right me search
            start = mid + 1;
        }
        else if(target<v[mid]){
            //left search
            end = mid - 1;

        }
         mid =  start + (end - start)/2 ;
    }
    return ans;
}







int main(){
    // first occurence 
    vector<int>v{1,3,3,3,3,3,3,3,4,4,4,4,6,7};
    int target = 4;
    int ans = firstoccurence(v, target);

    cout<<  "ans is "<<ans <<endl;
    return 0;
}