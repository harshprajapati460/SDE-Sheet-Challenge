// Node<int>* sortTwoLists(Node<int>* first, Node<int>* second)
// {
//     Node<int> * newhead = new Node<int>(0);
//     Node<int> * tail = newhead,* curr1 = first,* curr2 = second;
//     if(first == nullptr) return second;
//     if(second == nullptr) return first;

//     while(curr1 != nullptr && curr2 != nullptr){
//         if(curr1->data > curr2->data){
//                 tail->next = curr2;
//                 tail = tail->next;
//                 curr2 = curr2->next;

//         }
//         else {
//                tail->next = curr1;
//                tail = tail->next;
//                curr1 = curr1->next;
//         } 

//     }
//     if(!curr1 && !curr2 ) return newhead->next;
//     else if(curr1 != nullptr){
//         tail->next = curr1;
//         return newhead->next;
//     }
//     else {
//         tail->next = curr2;
//         return newhead->next;
//     }

//     // Write your code here.
// }
