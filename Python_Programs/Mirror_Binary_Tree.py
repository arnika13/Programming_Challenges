#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Apr 17 10:56:48 2019

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
        
        
def mirror(curNode):

	if not curNode:
		return
	else:
		curNode.left,curNode.right = curNode.right,curNode.left
		print(curNode.data)
		mirror(curNode.left)
		mirror(curNode.right)
	         
root = Node(4)
insert(Node(2),root)
insert(Node(5),root)
insert(Node(1),root)
insert(Node(3),root)


#print("The Inorder Tree is :", "\n")
#printInorderTree(root)

mirror(root)