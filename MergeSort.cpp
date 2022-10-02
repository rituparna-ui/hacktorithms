void MergeSort(int arr[],int start,int end){
    if(start>=end){
        return;
    }

    int mid=start+(end-start)/2;

    MergeSort(arr,start,mid);
    MergeSort(arr,mid+1,end);

    merge(arr,start,end);
}

void merge(*arr,int s,int e){
    int mid=s+(e-s)/2;

    int length1=mid-s+1;
    int length2=e-mid;

    int *firstpart=new int[length1];
    int *secondpart=new int[length2];

    int k=s;
    for(int i=0;i<length1;i++){
        firstpart[i]=arr[k++];
    }
    for(int i=0;i<length2;i++){
        second[i]=arr[k++];
    }

    int i=0;
    int j=0;
    int mainArrayIndex=s;

    while(i<length1 && j<length2){
        if(firstpart[i]<secondpart[j]){
            arr[mainArrayIndex++] = firstpart[i++];
        }
        else{
            arr[mainArrayIndex++] = secondpart[j++];
        }
    }

    while(i<length1){
        arr[mainArrayIndex++] = firstpart[i++];
    }
    while(j<length2){
        arr[mainArrayIndex++] = secondpart[j++];
    }

    delete [] firstpart;
    delete [] secondpart;
}
