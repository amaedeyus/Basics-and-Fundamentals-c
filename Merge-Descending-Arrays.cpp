#include <iostream>
using namespace std;

//GITHUB MERGE-DESCENDING ARRAYS

int firstArraySize, secondArraySize, mergedArraySize, sortedArraySize;
const int maxSize=10;

int getArraySize(string arrayName)
{
    int arraySize;
    do{
    cout<<"Please enter the size of the "<<arrayName<<": ";
    cin>>arraySize;
        if(arraySize<=0 || arraySize>maxSize){
            cout<<"Invalid Input! Please enter a number between 1 and 10.";
            cout<<endl;
            cout<<endl;
        }
    }while(arraySize<=0 || arraySize>maxSize);
    return arraySize;
}

void arrayElements (float arr[], int size, string arrayName)
{
    cout<<"Please enter the elements of the "<<arrayName<<": ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

void divider(){
    cout<<"********************************************\n";
}

int main()
{
    cout<<"Merging Arrays into Descending Order\n";
    
    divider();
    
    int firstArraySize=getArraySize("first array");
    float firstArray[firstArraySize];
    arrayElements(firstArray, firstArraySize, "first array");
    
    divider();
    
    int secondArraySize=getArraySize("second array");
    float secondArray[secondArraySize];
    arrayElements(secondArray, secondArraySize, "second array");

    
    mergedArraySize=firstArraySize+secondArraySize;
    float mergedArray[mergedArraySize];
    sortedArraySize=firstArraySize+secondArraySize;
    float sortedArray[sortedArraySize];
    
    
    for(int i=0;i<firstArraySize;i++){
        mergedArray[i]=firstArray[i];
    }
    for(int i=0;i<secondArraySize;i++){
        mergedArray[i+firstArraySize]=secondArray[i];
    }
    
    divider();
    cout<<"Merged Array: \n";
    for(int i=0;i<mergedArraySize;i++){
        if(i<mergedArraySize-1){
        cout<<mergedArray[i]<<", ";
        }
    else{
        cout<<mergedArray[i];
    }
    }
    
    cout<<endl;
    
    for(int i=0;i<sortedArraySize;i++){
        sortedArray[i]=mergedArray[i];
    }
  
    
    for(int i=0;i<sortedArraySize-1;i++){
        for(int j=0;j<sortedArraySize-i-1;j++){
        if(sortedArray[j]<sortedArray[j+1]){
            int temp;
            temp=sortedArray[j];
            sortedArray[j]=sortedArray[j+1];
            sortedArray[j+1]=temp;
            }
        }
    }
    
    divider();
    cout<<"Sorted Array: \n";
    for(int i=0;i<sortedArraySize;i++){
        if(i<sortedArraySize-1){
        cout<<sortedArray[i]<<", ";
        }
    else{
        cout<<sortedArray[i];
    }
    }
    return 0;
}