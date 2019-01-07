#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Dec 26 13:28:31 2018

@author: arnikavishwakarma
"""
class Node:
    def __init__(self):
        self.data = None
        self.next = None
        
class UnorderedList:
    def __init__(self):
        self.head = None
    def isEmpty(self):
        return self.head == None
    
    # creating a singly linked list
    
    def add(self, data):
        new_node = Node()
        new_node.data = data
        new_node.next = self.head
        self.head = new_node
        
    # traversing a list by counting the number of nodes in the linked list
    
    def size(self):
        current = self.head
        count = 0
        while current != None:
            count += 1
            current = current.next
        return count
    
    # printing the linked list
    
    def list_print(self):
        node = self.head
        while node:
            print(node.data)
            node = node.next
            
    # searching a node in linked list
    
    def search(self, item):
        current = self.head
        found = False
        while current != None and not found:
            if current.data == item:
                found = True
            else:
                current = current.next
        return found
    
    # remove an item from the singly linked list
    
    def remove(self,item):
        current = self.head
        previous = None
        if current == None:
                return
        while current != None:
            if current.data == item:
                break
            previous = current
            current = current.next
            
        previous.next = current.next
            
        
            
mylist = UnorderedList()
mylist.add(26)
mylist.add(54)
mylist.add(23)
mylist.add(77)
mylist.list_print()
print(mylist.size())
print(mylist.search(12))
mylist.remove(23)
mylist.list_print()