#include<iostream>
#include<vector>
#include<iterator>
#include<list>
using namespace std;

int main(){

    // * Vector = A vector is a dynamic array that can grow or shrink in size as elements are added or removed.

    // CODE = 

    // vector<int>v1({10,20,30,40,50});
    // cout<<"v1 = ";
    // for(vector<int>::iterator it1 = v1.begin();it1 != v1.end();it1++){
    //     cout<<*(it1)<<" ";
    // }
    // cout<<endl;
    // cout<<"v1 = ";
    // for (auto it2 = v1.begin() ; it2 !=v1.end(); it2++){
    //     cout<<*it2<<" ";
    // }
    // cout<<endl;
    // cout<<"This is not a iterator : ";
    // for(auto it3 : v1){
    //     cout<<it3<<" ";
    // }

    // * How to erase and insert elements in vectors =
    // - .erase(iterator or location of element)
    // vector<int>v2({1,2,3,4,5});
    // v2.erase(v2.begin()); // This will delete 1 op = 2,3,4,5
    // v2.erase(v2.begin()+2 , v2.begin()+4); // This will delete  4,5 from 2345 it like [start , end) start is deleted but not end
    // for (auto i2 : v2){
    //     cout<<i2<<" ";
    // }
    

    // * Insert = 
    // - .insert(location , value) ...for single value
    // - .insert(location , iterator , iterator) ...for range of values
    // - .insert(location , no of copies , value)

    // vector <int>v3 ; 
    // v3.insert(v3.begin() , 100);
    // v3.insert(v3.begin()+1,2,200);

    // Copy one vector into another =
    // vector<int>copy (2 , 300);
    // v3.insert(v3.begin()+3 , copy.begin(), copy.end());
    // for (auto i3 : v3){
    //     cout<<i3<<" ";
    // }
    // cout<<endl;
    // cout<<"size of vector is : "<<v3.size();

    // v3.pop_back(); //Deletes the last elem
    // v3.clear() // delete all the elem from the vector
    // v1.swap(v2) ... swaps the value of two vectors
    
    //* List =
    // - "List is a doubly linked list that can hold any type of data."
    // - "List is a sequence container in the C++ STL that stores elements in a specific order but allows insertion and removal of elements from any position efficiently."
    // - "List is a doubly linked list which means each element has pointers to both the previous and next elements."
    // - "Compared to the insert() operation in vectors, the push_front() operation in a list is very efficient."

    // CODE =  

    // list<int>ls;
    // ls.push_back(2); // {2}
    // ls.emplace_back(4); // {2,4}
    // ls.push_front(1); // {1,2,4}
    // ls.emplace_front(3); // {3,1,2,4}

    //* Deque = 
    // - "Deque is a data structure that can hold any type of data and allows efficient insertion and deletion at both ends."
    // - "Deque is a sequence container in C++ STL which can store elements in any order
    // - "Deque is a doubly ended queue which means it has two pointer at the front and end
    // - "Deque is a double ended queue which can add or remove elements from both ends"

    // CODE =
    // deque<int>deq;
    // deq.push_back(2); // {2}
    // deq.push_front(1); // {1,2}
    // deq.emplace_back(4); // {1,2,4}
    // deq.emplace_front(3); // {3,1,2,4}
    // deq.pop_front(); // {1,2,4}
    // deq.pop_back(); // {1,2}
    // deq.clear(); // {}

    // begin, end, rbegin, rend, clear, insert, size, swap all same as vector

    //* STACK =
    // - "Stack is a LIFO (Last In First Out) data structure"
    // - "Stack is a container which follows the principle of Last In First Out"
    // - "Stack is a collection of elements which can be added or removed from the top"
    // - "Stack is a data structure which can be implemented using arrays or linked lists"
    // - "Stack is a data structure which can be used to implement recursive algorithms"
    // - If stack is implemented using STL then it does not follows indexing
    
    // CODE = 
    // stack<int>st;
    // st.push(2); // {2}
    // st.push(4); // {2,4}
    // st.push(1); // {2,4,1}
    // st.pop(); // {2,4}
    // st.top(); // 4
    // st.empty(); // false
    // st.size(); // 2
    // st.swap(st); // swap with itself
    // st.clear(); // {}

    //* QUEUE = 
    // - "Queue is a FIFO (First In First Out) data structure"
    // - "Queue is a container which follows the principle of First In First Out"
    // - "A queue is a linear data structure in which elements are added at one end, called the rear, and removed from the other end, called the front, operating on a First-In-First-Out (FIFO) basis."
    // - "Queue is a data structure which can be implemented using arrays or linked lists"

    //* Priority Queue = 
    // - "Priority Queue is an abstract data type which operates similar to a regular queue but with an added feature of priority"
    // - "Priority Queue is a container adapter in C++ STL"
    // - "Elements in a Priority Queue are ordered based on their priority, with the highest priority element at the front"
    // - "By default, the highest priority element is considered the largest element, but this can be customized"
    // - "Priority Queue does not allow random access to elements"
    // - "Priority Queue is typically implemented using a heap data structure for efficient priority management"
    // - "priority to max element = max heap , min heap"

    // CODE =
    // priority_queue<int> pq;
    // pq.push(2); // {2}
    // pq.push(4); // {4,2}
    // pq.push(1); // {4,2,1}
    // pq.top(); // 4
    // pq.pop(); // {2,1}
    // pq.empty(); // false
    // pq.size(); // 2

    


}