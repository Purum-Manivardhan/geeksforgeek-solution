class Solution {
  public:
    int arraySum(vector<int>& arr) {
        int sum=0;
        int i=0;
        while(i<arr.size()){
            sum+=arr[i];
            i++;
        }
        return sum;
    }
};