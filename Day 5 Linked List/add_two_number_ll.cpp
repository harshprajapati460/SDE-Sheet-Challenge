// Node *addTwoNumbers(Node *num1, Node *num2)
// {
//     if(!num1) return num2;
//     if(!num2) return num1;
//     Node *newhead = new Node(0);
//     Node *l1 = num1,*l2 = num2,*tail = newhead;
//     int carry = 0;
//     while(l1 != nullptr || l2 != nullptr || carry > 0){
//         int sum = 0;
//         if(l1 != nullptr){
//             sum += l1->data;
//             l1 = l1->next;
//         }
//         if(l2 != nullptr){
//             sum += l2->data;
//             l2 = l2->next;
//         }
//         sum += carry;
//         Node *n = new Node(sum%10);
//         tail->next = n;
//         tail = tail->next;
//         carry = sum/10;
//     }
    
//     return newhead->next;
//     // Write your code here.
// }