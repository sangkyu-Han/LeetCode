class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        int k = 0;
        int r[m + n];
        
        while(i < m && j < n)
        {
            if(nums1[i] < nums2[j])
            {
                r[k++] = nums1[i++];
            }
            else
            {
                r[k++] = nums2[j++];
            }
        }
        if(i == m)
        {
            while(j < n)
            {
                r[k++] = nums2[j++];
            }
        }
        if(j == n)
        {
             while(i < m)
            {
                r[k++] = nums1[i++];

            }
            
        }
        for(int i = 0; i < m + n; i++)
        {
            nums1[i] = r[i];
        }
    
    }
};