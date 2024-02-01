 #include<iostream>
#include<string.h>
#include<vector>
#include<limits.h>
using namespace std;


int findmindiff(vector<string>timePoints){

    // convert time string into min int values
    vector<int>minutes;

    for(int i=0; i<timePoints.size(); i++){
        string current = timePoints[i];


        int hours = stoi(current.substr(0, 2)); // stoi converts string into integer vlues
        int min = stoi(current.substr(3, 2));
        int totalmin = hours*60 + min;
        minutes.push_back(totalmin);
    }

    // step 2 : sort
   // sort(minutes.begin(), minutes.end());

    // step 3: difference and cal min diff
    int mini = INT_MAX;
    int n = minutes.size();

    for(int i=0; i<n-1; i++){
        int diff = minutes[i+1] - minutes[i] ;
        mini =  min(mini, diff);
    }

    int lastdiff1 = (minutes[0] + 1440) - minutes[n-1];
    int lastdiff2 = minutes[n-1] - minutes[0];
    int lastdiff = min(lastdiff1, lastdiff2);
    mini = min(mini, lastdiff);
    return mini;

}










int main(){

    // min time difference: leetcode 539.


    vector<string>timePoints{"23:59", "00:00"};
     int result = findmindiff(timePoints);
    cout<<result;
}