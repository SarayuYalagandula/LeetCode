char* mapWordWeights(char** words, int wordsSize, int* weights, int weightsSize) {
    static char res[1000];
    int k=0;
    for(int i=0;i<wordsSize;i++){
        int sum=0;
        char *word=words[i];

        for(int j=0;word[j];j++){
            int temp=(word[j]-'a');
            sum=sum+weights[temp];
        }
        int val=sum%26;
        res[k++]='z'- val;
    }
    res[k]='\0';
    return res;
}