int lengthOfLongestSubstring(char * s){
    char *tmp=s,flag=0;
    int i,j,hp;
    int len=0,maxlen=0;
    if(s[0]==0) return 0;
    if(s[1]==0) return 1;
    for(i=0;;i++){
        if(s[i]==0) break;

    }
    
    tmp=(char *)malloc((i+1)*sizeof(char));

    i=0;
    hp=i;
    while(1){
        tmp[len]=s[i];
        
        for(j=0;j<=len;j++){
            if(tmp[j]==s[i+1]){
                maxlen=(len>=maxlen)?(len+1):maxlen;
                
                // for(j=0;j<=len;j++){
                //     tmp[j]=0;
                // }
                
                flag=1;
                break;
            }
        }
        
        if(flag){
            len=0;
            hp++;
            i=hp;
            flag=0;
        }
        else {
            len++;
            i++;
        }
        
        if(s[i]==0){
            maxlen=(len>maxlen)?(len):maxlen;
            break;
        }
    }

    return (maxlen);

}