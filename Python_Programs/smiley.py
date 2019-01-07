# -*- coding: utf-8 -*-
"""
Created on Thu Sep 22 19:01:23 2016

@author: Purshottam
"""

import turtle 
turtle.setup(800,300) 

screen = turtle.Screen() # instantiate the screen class

screen.bgcolor("lightblue")
screen.title("smily")
turtle.penup()
cursor=turtle.Turtle()

# draw smily

cursor.penup()
cursor.goto(150,0)
cursor.pendown()
cursor.color("black")
cursor.begin_fill()
cursor.color("yellow")
cursor.circle(70)
cursor.end_fill()
#draw left eye
cursor.penup()
cursor.goto(110,80)
cursor.pendown()
cursor.color("black")
cursor.begin_fill()
cursor.color("black")
cursor.circle(10)
cursor.end_fill()
#draw right eye
cursor.penup()
cursor.goto(180,80)
cursor.pendown()
cursor.color("black")
cursor.begin_fill()
cursor.color("black")
cursor.circle(10)
cursor.end_fill()
#draw nose
cursor.penup()
cursor.goto(150,50)
cursor.pendown()
cursor.color("black")
cursor.begin_fill()
cursor.color("black")
cursor.circle(8, steps=3)
cursor.end_fill()
#draw smile
cursor.penup()
cursor.goto(120,20)

cursor.pendown()
cursor.forward(20)
cursor.circle(100,40)

cursor.hideturtle()
turtle.done()
