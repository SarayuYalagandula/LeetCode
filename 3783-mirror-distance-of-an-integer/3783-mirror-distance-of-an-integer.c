int reverseNum(int n){
    int rev=0;
    while(n!=0){
        int temp=n%10;
        rev=(rev*10)+temp;
        n=n/10;
    }
    return rev;
}
int mirrorDistance(int n) {
    int num=reverseNum(n);
    if(n>num){
        return n-num;
    }else{
        return num-n;
    }
}
