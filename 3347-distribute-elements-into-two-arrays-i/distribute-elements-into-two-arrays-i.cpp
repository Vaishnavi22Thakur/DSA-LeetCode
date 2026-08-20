class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
      int n=nums.size();
      vector<int>arr1;
      vector<int>arr2;
      vector<int>result;
      arr1.push_back(nums[0]);
      arr2.push_back(nums[1]);
      int j=0,k=0;
      for(int i=2;i<n;i++){
        if(i%2==0){
            if(arr1[j]>arr2[k]){
                arr1.push_back(nums[i]);
                j++;
            }
            else{
                arr2.push_back(nums[i]);
                k++;
            }
        }
        else{
            if(arr2[k]>arr1[j]){
                arr2.push_back(nums[i]);
                k++;
            }
            else{
                arr1.push_back(nums[i]);
                j++;
            }
        }
      }
      j=0,k=0;
      while(j<arr1.size()){
        result.push_back(arr1[j]);
        j++;    
      }
      while(k<arr2.size()){
        result.push_back(arr2[k]);
        k++;
      }
      return result;
    }
};