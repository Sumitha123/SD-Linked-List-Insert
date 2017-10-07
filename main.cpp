//
//  main.cpp
//  SD-LIST-INSERT(L,k)
//
//  Created by Sumitha on 6/9/17.
//  Copyright © 2017 Sumitha. All rights reserved.
//

#include <iostream>
#include "SD-LIST-INSERT(L,k).hpp"
int main() {
    
    head = insertAtFirst(head,1);
    head = insertAtFirst(head,2);
    head = insertAtFirst(head,4);
    head = insertAtFirst(head,5);
    cout << "Sorted Doubly Linked List : ";
    displayList();
    cout << "SD-LIST-INSERT(head,3) : ";
    head = sortedListInsert(head,3);
    displayList();

    
    return 0;
}
