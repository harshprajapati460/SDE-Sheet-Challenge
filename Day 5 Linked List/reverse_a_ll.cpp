// LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
// {
//     LinkedListNode<int> *curr = head;
//     LinkedListNode<int> *prev = NULL;
//     LinkedListNode<int> *Next = NULL;
    
//     while(curr != NULL)
//     {
//        Next = curr->next;
//        curr->next = prev;
//         prev= curr;
//         curr=Next;
        
//     }
//     return prev;
    
//     // Write your code here
// }