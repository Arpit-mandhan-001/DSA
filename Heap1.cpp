#include<bits/stdc++.h>
using namespace std;


    class heap{
        public:
        int arr[100];
        int size = 0;

        void insert(int value){
            size = size + 1;
            int index = size;
            arr[index] = value;

            while(index > 1){
                int parent = index / 2;

                if(arr[parent] < arr[index]){
                    swap(arr[parent], arr[index]);
                    index = parent;
                }else{
                    return;
                }
            }
        }

        void print(){
            for( int i = 1; i <= size; i++){
                cout<< arr[i]<< " ";
            } cout<< endl;
        }

        void deletefromheap(){
            if(size == 0){
                return;
            }
            // step 1 : put last element into first index 
            arr[1] = arr[size];
            // step 2 : delete last element
            size--;

            int i = 1;
            while(i <= size){
                int leftindex = 2*i;
                int rightindex = 2*i+1;
                 int largest = i;

                if(leftindex <= size && arr[leftindex] > arr[largest]){
                    largest = leftindex;
                }
                 if (rightindex <= size && arr[largest] < arr[rightindex]){
                    largest = rightindex;

                }if(largest != i){
                swap(arr[i], arr[largest]);
                i = largest;
                }else {
                    return;
                }
            }
        }
    };

void heapify(int arr[], int size, int index){
    int largest = index;
    int left = 2*index;
    int right = 2*index+1;

    if(left <= size && arr[largest] < arr[left] ){
        largest = left;
    }
    if(right <= size && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != index){
        swap(arr[index], arr[largest]);
        heapify(arr, size, largest);
    }
}

void heapsort(int arr[], int n ){
    int size = n;

    while(size > 1){
        swap(arr[size], arr[1]);
        size--;

        heapify(arr, size, 1 );
            }
}

int kthlargest(vector<int> arr, int k){
    int n = arr.size();
    priority_queue<int> pq;

    for (int i = 0; i < n; i++)
    {
       pq.push(arr[i]);
    }
    for(int i = 0; i< k-1; i++){
        pq.pop();
    }
    return pq.top();
}

void min_heapify(int arr[], int size, int index){
    int largest = index;
    int left = 2*index;
    int right = 2*index+1;

    if(left <= size && arr[largest] > arr[left] ){
        largest = left;
    }
    if(right <= size && arr[largest] > arr[right]){
        largest = right;
    }

    if(largest != index){
        swap(arr[index], arr[largest]);
        min_heapify(arr, size, largest);
    }
}


int main(){

//     heap h;
//     h.insert(55);
//     h.print();
//     h.insert(53);
//     h.print();
//     h.insert(54);
//     h.print();
//     // h.insert(55);
//     h.print();
//     h.insert(51);
//     h.insert(52);
//     h.print();
//     h.deletefromheap();
//     h.print();


//     int arr[6] = {-1, 12, 73, 89, 53, 90};
//     int arr1[6] = {-1, 12, 73, 89, 53, 90};
//     int n = 5;
//     for(int i = 1; i <= n; i++){
//         cout<< arr[i]<< " ";
//     }cout<<endl;

//     for(int i = n/2; i>0; i--){
//         heapify(arr1, n, i);
//     }
//     //printing the array
//     for(int i = 1; i <= n; i++){
//         cout<< arr[i]<< " ";
//     }cout<<endl;

//     heapsort(arr, n);

//       //printing the sorted array
//     for(int i = 1; i <= n; i++){
//         cout<< arr[i]<< " ";
//     }

//     priority_queue<int> pq;

//     pq.push(1);
//     pq.push(2);
//     pq.push(4);
//     pq.push(100);
//     pq.push(200);
//     pq.pop();

//     cout<< "largest element ye hai ji "<< pq.top() << endl;
//     cout<< "size of priority queue is "<<pq.size() << endl;

//     if(pq.empty()){
//         cout<< "khali hai ji";
//     }else{
//         cout<< "khali nhi hai ji";
//     }

// vector<int> array = {3,2,1,5,6,4};
// int k = 2;
// cout<<"ye hai answer"<<kthlargest(array, k);


int arr3[] = {-1,4, 3, 2, 6, 66,1};
int m = 6;
    for(int i = 1; i <= m; i++){
        cout<< arr3[i]<< " ";
    }cout<<endl;

    for(int i = m/2; i>0; i--){
        min_heapify(arr3, m, i);
    }
    //printing the array
    for(int i = 1; i <= m; i++){
        cout<< arr3[i]<< " ";
    }cout<<endl;
}
