char * convert(char * s, int numRows){
    int slen=strlen(s);
    int sp=0;
    int circle=2*numRows-2;
    char *ret=(char *)calloc((slen+1),sizeof(char));
    if(numRows<2) return s;
    for(int i=0;i<numRows;i++){
        for(int j=0;j<slen;j++){
            if((j%circle==i)||(j%circle==circle-i)){
                ret[sp++]=s[j];
            }
        }
    }
    return ret;
}