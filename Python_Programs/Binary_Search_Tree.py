#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Mon Jan  7 14:43:56 2019

@author: arnikavishwakarma
"""

class Node:
    def __init__(self,item):
        self.left = None
        self.right = None
        self.data = item
        

def insert(node,curNode):
    if curNode is None:
        curNode = node
    else: 
        if node.data <= curNode.data:
            if curNode.left is None: 
                curNode.left = node 
            else: 
                insert(node,curNode.left) 
        else: 
            if curNode.right is None: 
                curNode.right = node 
            else:
                insert(node,curNode.right)
    
def printInorderTree(curNode):
    if curNode:
        printInorderTree(curNode.left)
        print(curNode.data)
        printInorderTree(curNode.right)
        
def printPreorderTree(curNode):
    if curNode:
        print(curNode.data)
        printPreorderTree(curNode.left)
        printPreorderTree(curNode.right)
        
        
def printPostorderTree(curNode):
    if curNode:
        printPostorderTree(curNode.left)
        printPostorderTree(curNode.right)
        print(curNode.data)
    
root = Node(50)

insert(Node(30),root)
insert(Node(20),root)
insert(Node(40),root)
insert(Node(70),root)
insert(Node(60),root)
insert(Node(80),root)

print("The Inorder Tree is :", "\n")
printInorderTree(root)
print("The preorder Tree is :","\n")
printPreorderTree(root)
print("The Postorder Tree is :""\n")
printPostorderTree(root)