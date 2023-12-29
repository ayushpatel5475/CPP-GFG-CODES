   #include <iostream>
   #include <queue>
   using namespace std;

void printKlargest(int arr[], int n , int k){
    priority_queue <int, vector <int>, greater<int>> pq (arr, arr+k);
    for ( int i =k;i<n;i++){
        if (arr[i]>pq.top()){
            pq.pop();
            pq.push(arr[i]);
            }

    }
    while (pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}
int main() {
    // Example usage
    int arr[] = {10, 4, 7, 11, 8, 15, 3, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    // Call the function to print k largest elements
    printKlargest(arr, n, k);

    return 0;
}