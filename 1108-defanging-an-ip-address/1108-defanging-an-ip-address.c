

char * defangIPaddr(char * address){
    static char str[30];
    int j=0;
    for(int i=0;address[i];i++){
        if(address[i]=='.'){
            str[j++]='[';
            str[j++]='.';
            str[j++]=']';
        }else{
            str[j++]=address[i];
        }
    }
    str[j]='\0';
    return str;
}