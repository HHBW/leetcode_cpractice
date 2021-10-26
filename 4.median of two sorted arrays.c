void sort_array(int *array,int array_size){
    int i,j;
    for(i=0;i<array_size;i++){
        for(j=0;j<array_size-i-1;j++){
            if(array[j]>array[j+1]){
                array[j]=array[j]+array[j+1];
                array[j+1]=array[j]-array[j+1];
                array[j]=array[j]-array[j+1];
            }
        }
    }
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int *merged_array;
    int i,array_size=nums1Size+nums2Size;
    double ret;
    merged_array=(double *)malloc((array_size+1)*sizeof(int));
    for(i=0;i<nums1Size;i++){
        merged_array[i]=nums1[i];
    }
    nums1Size=0;
    for(;i<array_size;i++){
        merged_array[i]=nums2[nums1Size];
        nums1Size++;
    }
    sort_array(merged_array,array_size);
    if(array_size%2==0){
        i=array_size/2;
        nums1Size=merged_array[i];
        nums2Size=merged_array[i-1];
        ret=(nums1Size+nums2Size)/2.0;
    }
    else{
        i=(array_size-1)/2;
        ret=(double)merged_array[i];
    }
    return ret;
}