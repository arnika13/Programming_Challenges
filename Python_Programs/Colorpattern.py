# -*- coding: utf-8 -*-
"""
Created on Tue Jul  3 13:30:26 2018

@author: LocalUser
"""

import turtle 

turtle.bgcolor("yellow")
pen = turtle.Turtle()

pen.pencolor("red")

pen.speed(10)

for i in range(100):
    pen.forward(100)
    pen.right(30)
    pen.forward(20)
    pen.left(60)
    #pen.forward(50)
    #pen.right(30)
   
    pen.penup()
    pen.setposition(0, 0)
    pen.pendown()
    
    pen.right(2)
    
turtle.done()