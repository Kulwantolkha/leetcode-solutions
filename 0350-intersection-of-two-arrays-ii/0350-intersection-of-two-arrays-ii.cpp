class Solution {
public:
    void merge_sort(vector<int> &arr,int low,int high){
        int mid = (low+high)/2;
        if(low>=high)    return;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    void merge(vector<int> &arr,int low,int mid,int high){
        vector<int> temp;
        int left = low;
        int right = mid+1;
        while(left<=mid &&  right<=high){
            if(arr[left]<=arr[right]){
                temp.push_back(arr[left]);
                left++;
            }
            else{
                temp.push_back(arr[right]);
                right++;
            }
        }
        while(left<=mid){
                temp.push_back(arr[left]);
                left++;
        }
        while(right<=high){
            temp.push_back(arr[right]);
            right++;
        }
        for(int i=0;i<temp.size();i++){
            arr[low+i]=temp[i];
        }
    }    

    
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        merge_sort(nums1,0,nums1.size()-1);
        merge_sort(nums2,0,nums2.size()-1);
        vector<int> v;
        int i=0;
        int j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                v.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return v;    
    }
};