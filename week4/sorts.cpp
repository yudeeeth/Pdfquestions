#include <iostream>
#define MAX 10
using namespace std;

int arr1[MAX] = {23,45,64,76,34,56,67,65,12,32};
int arr2[MAX] = {23,45,64,76,34,56,67,65,12,32};
int arr3[MAX] = {23,45,64,76,34,56,67,65,12,32};
int arr4[MAX] = {23,45,64,76,34,56,67,65,12,32};
int arr5[MAX] = {23,45,64,76,34,56,67,65,12,32};
int arr6[MAX] = {23,45,64,76,34,56,67,65,12,32};

//function to print array
void print(int arr[], int size){

    for(int i = 0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}
// general helper function for swapping 
void swap(int arr[], int i, int j){
    int temp = arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void selectionsort(int arr[], int size){
    for( int i = 0; i< size -1 ; i++){
        for ( int j=i; j< size ; j++){
            if(arr[j]<arr[i]){
                swap(arr,i,j);
            }
        }
    }
}

void insertionsort(int arr[],int size){
    int cur;
    int val;
    for(int i= 0;i<size;i++){
        cur=i;
        val = arr[i];
        while(cur-1>-1 && val < arr[cur-1]){
            arr[cur]=arr[cur-1];
            cur--;
        }
        arr[cur]=val;
    }
}

void merge(int arr[], int first, int last){
    int m = (first + last)/2;
    int L[m-first +1];
    int R[last-m];
    int k=first;
    for (int i=0;i<m-first+1;i++){
        L[i]=arr[k];
        k++;
    }
    for(int i=0;i<last-m;i++){
        R[i] = arr[k];
        k++;
    }
    int i=0;
    int j=0;
    k=first;
    while(i<(m-first+1) && j< (last-m)){
        if(L[i]<R[j]){
            arr[k]=L[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=R[j];
            j++;
            k++;
        }
    }
    while(i<(m-first+1)){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j< (last-m)){
        arr[k]=R[j];
        j++;
        k++;
    }
}
// recursive splitter and caller function for merge sort
void mergesort(int arr[],int first, int last){
    if(first == last) return;
    mergesort(arr,first,(first+last)/2);
    mergesort(arr,(first+last)/2+1,last);
    merge(arr,first,last);
}

void bubblesort(int arr[], int size){
    for(int i=0;i<size-1;i++){
        for (int j=0;j<size-1;j++){
            if(arr[j+1]<arr[j]){
                swap(arr,j,j+1);
            }
        }
    }
}
// helper fucntions for heapsort
    int parent(int i) { return (i - 1) / 2; }
    int left(int i) { return (2 * i + 1); }
    int right(int i) { return (2 * i + 2); }
    void heapswap(int arr[],int current){
        int temp = arr[current];
        arr[current]=arr[parent(current)];
        arr[parent(current)]=temp;
    }

    void refinedown(int arr[],int level, int current){
        
        if(level<current){
            if(left(level)<current && right(level)<current && arr[left(level)] > arr[right(level)]){
                if(arr[level]<arr[left(level)]){
                    heapswap(arr,left(level));
                    level=left(level);
                    refinedown(arr,level,current);
                }
                else{
                    if( right(level)<current && arr[level]<arr[right(level)]){
                        heapswap(arr,right(level));
                        level=right(level);
                        refinedown(arr,level,current);
                    }
                }
            }
            else if(left(level)<current && right(level)>=current && arr[level]<arr[left(level)]){
                    heapswap(arr,left(level));
                    level=left(level);
                    refinedown(arr,level,current);
            }
            else{
                if( right(level)<current && arr[level]<arr[right(level)]){
                    heapswap(arr,right(level));
                    level=right(level);
                    refinedown(arr,level,current);
                }
            }
        }
    }

void heapsort(int arr[], int size){
    for(int i=(size+1)/2;i>=0;i--){
        refinedown(arr,i,size);
    }
    for(int i=size-1;i>=0;i--){
        swap(arr,0,i);
        refinedown(arr,0,i);
    }
}

void quicksort(int arr[],int first, int last){
    int i = first+1;
    int j = last;
    if(j<i){
        return;
    }
    while(1){
        while(arr[i]<arr[first]){
            i++;
        }
        while(arr[j]>arr[first]){
            j--;
        }
        if(j>i)
        swap(arr,i,j);
        else break;
    }
    swap(arr,first,j);
    if(j>first)
    quicksort(arr,first,j);
    if(j+1<last);
    quicksort(arr,j+1,last);
}

int main(){
    cout<<"Initial unsorted array\t";
    print(arr1,MAX);
    cout<<"Selection sort \t";
    selectionsort(arr1,MAX);
    print(arr1,MAX);
    cout<<"Bubble sort \t";
    bubblesort(arr2,MAX);
    print(arr2,MAX);
    cout<<"Insertion sort \t";
    insertionsort(arr3,MAX);
    print(arr3,MAX);
    cout<<"Quick sort \t";
    quicksort(arr4,0,MAX-1);
    print(arr4,MAX);
    cout<<"Merge sort \t";
    mergesort(arr5,0,MAX-1);
    print(arr5,MAX);
    cout<<"Heap sort \t";
    heapsort(arr6,MAX);
    print(arr6,MAX);
}