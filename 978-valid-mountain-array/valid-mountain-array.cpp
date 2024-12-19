class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        // bool upward = true;
        // bool downward = true;
        // if(arr.size()<3)    return false;
        // int j=arr.size();
        // for(int i=0;i<arr.size()-1;i++){
        //     if(arr[i]>arr[i+1]){
        //         cout<<i;
        //         j=i;
        //         break;
        //     }
        // }
        // if(j==0)    return false;
        // for(int i=0;i<j;i++){
        //     if(arr[i]>arr[i+1]){
        //         return false;
        //     }
        // }
        // for(int i=j;i<arr.size()-1;i++){
        //     if(arr[i]<arr[i+1]) return false;
        // }
        // return true;

        int i=0;
        int j=arr.size();
        if(arr.size()<3)    return false;
        bool upward = false;
        bool downward = false;
        while(i+1<j && arr[i]<arr[i+1]){
            upward = true;
            i=i+1;
        }
        while(i+1<j && arr[i]>arr[i+1]){
            downward = true;
            i=i+1;
        }
        if(upward==true && downward == true && i==arr.size()-1)    return true;
        return false;
    }
};