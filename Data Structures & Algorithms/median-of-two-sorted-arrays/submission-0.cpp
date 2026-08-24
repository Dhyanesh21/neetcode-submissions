class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size();
        int n2 = nums2.size();
        int i = 0,j=0,prev=0,curr=0;
        int total = n1+n2;;
        for(int k=0;k <= total/2;k++){
            prev = curr;
            if(i < n1 && (j >= n2 || nums1[i] < nums2[j])){
                curr = nums1[i];
                i++;
            }
            else{
                curr = nums2[j];
                j++;
            }
        }
        if(total % 2 == 1) return curr;
        return (prev + curr)/2.0;
    }
};
