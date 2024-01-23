class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        int[] temp = new int[m];
        for (int i = 0; i < m; i++){
            temp[i] = nums1[i];
        }
        
        int i = 0;
        int j = 0;
        int k = 0;
        while (i < m && j < n){
            if (temp[i] < nums2[j]) {
                nums1[k] = temp[i];
                k++;
                i++;
            } else if (nums2[j] < temp[i]){
                nums1[k] = nums2[j];
                k++;
                j++;
            } else {
                nums1[k] = temp[i];
                nums1[k+1] = temp[i];
                k += 2;
                i++;
                j++;
            }
        }
        if(i == m && j != n){
            while (j < n){
                nums1[k] = nums2[j];
                j++;
                k++;
            }
        } else if (j == n && i != m) {
            while (i < m){
                nums1[k] = temp[i];
                i++;
                k++;
            }
        }
    }
}