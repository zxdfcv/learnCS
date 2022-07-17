void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    //逆向双指针 //类似归并的merge
    int i, j, ptr1 = m, ptr2 = n, ptr = m + n;
    while (ptr1 > 0 && ptr2 > 0)
    {
        if (nums1[ptr1 - 1] > nums2[ptr2 - 1])
        {
            nums1[ptr - 1] = nums1[ptr1 - 1];
            ptr1--;
        }
        else
        {
            nums1[ptr - 1] = nums2[ptr2 - 1];
            ptr2--;
        }
        ptr--;
    }
    while (ptr1 > 0)
    {
        nums1[ptr - 1] = nums1[ptr1 - 1];
        ptr1--;
        ptr--;
    }
    while (ptr2 > 0)
    {
        nums1[ptr - 1] = nums2[ptr2 - 1];
        ptr2--;
        ptr--;
    }
}
