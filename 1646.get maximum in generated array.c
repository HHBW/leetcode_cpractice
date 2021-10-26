int getMaximumGenerated(int n){
    int tmp_max=1;
    int tmp_nums[1024]={0,1};
    int i;
    
    if(n==0){
        return 0;
    }
    else if (n==1){
        return 1;
    }
    for(i=1;2*i<=n-1;i++){
        tmp_nums[i*2]=tmp_nums[i];
        tmp_nums[i*2+1]=tmp_nums[i]+tmp_nums[i+1];
        if(tmp_nums[i*2+1]>tmp_max) tmp_max=tmp_nums[i*2+1];
    }
    return tmp_max;
}