   #include <iostream>
   #include <queue>
   using namespace std;

   int main ()
   {
    priority_queue <int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);

    cout<< pq.size()<<"\n";
    cout<<pq.top()<<"\n";
    
    while (pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }

cout<<"\n\n Using MIN HEAP: \n";
/* Priority queue using MIN HEAP*/

    priority_queue <int, vector <int>, greater<int>> pq2;

    pq2. push(10);
    pq2. push(15);
    pq2. push(5);

    cout<<"Size: "<<pq2.size()<<" \n";

    while (pq2.empty()==false){
        cout<<pq2.top()<<" ";
        pq2.pop();
    }

  cout<<"\n\nPriority Queue using ARRAY: \n";

/*Priority Queue using ARRAY: (Max heap by default) */
int arr[]={10,15,5};
priority_queue <int> pq3(arr, arr+3);
while ( pq3.empty()==false){
    cout<<pq3.top()<<" ";
    pq3.pop();
}



cout<<"\n\nPriority Queue using ARRAY: (MIN heap ): \n";
/*Priority Queue using ARRAY: (MIN heap) */

int arr2[]={10,15,5};
int n = sizeof(arr2)/sizeof(arr2[0]);

for (int i =0;i<n;i++){
    arr2[i]=-arr2[i];
}
priority_queue <int> pq4(arr2, arr2+3);
while ( pq4.empty()==false){
    cout<<-pq4.top()<<" ";
    pq4.pop();
}


    return 0;

    
   }