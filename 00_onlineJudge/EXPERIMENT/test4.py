from turtle import *

speed(10)
color("#0000ff")
Screen().bgcolor('black')

#setup the coordinates
penup()
goto(0, 150)
pendown()

#Draw the rectangle 
begin_fill()
forward(150)
circle(-50, 90)
forward(300)
circle(-50, 90)
forward(300)
circle(-50, 90)
forward(300)
circle(-50, 90)
forward(150)
end_fill()

#drawing the letter F
color("white")
penup()
goto(140, 80)
pendown()

begin_fill()
right(180)
forward(50)
circle(80, 90)
forward(50)
right(90)
forward(80)
left(90)
forward(40)
left(90)
forward(80)
right(90)
forward(160)
left(90)
forward(55)
left(90)
forward(160)
right(90)
forward(70)
left(80)
forward(45)
left(100)
forward(80)
right(90)
forward(40)
circle(-40, 90)
forward(40)
left(90)
forward(45)
end_fill()

hideturtle()
done()

# import turtle  
# import colorsys 
# t = turtle.Turtle() 
# turtle.Screen().bgcolor("black") 
# t.speed(100) 
# n = 36 
# h = 0 
# for i in range(460): 
#     c = colorsys.hsv_to_rgb(h,1,0.9) 
#     h += 2/n 
#     t.color(c) 
#     t.left(145) 
#     for i in range(5): 
#         t.forward(300) 
#         t.left(150) 
# turtle.done()

# import turtle
# import math
# import random
# wn = turtle.Screen()
# wn.bgcolor('black')
# Albert = turtle.Turtle()
# Albert.speed(0)
# Albert.color('white')
# rotate=int(360)
# def drawCircles(t,size):
#     for i in range(10):
#         t.circle(size)
#         size=size-4
# def drawSpecial(t,size,repeat):
#   for i in range (repeat):
#     drawCircles(t,size)
#     t.right(360/repeat)
# drawSpecial(Albert,100,10)
# Steve = turtle.Turtle()
# Steve.speed(0)
# Steve.color('yellow')
# rotate=int(90)
# def drawCircles(t,size):
#     for i in range(4):
#         t.circle(size)
#         size=size-10
# def drawSpecial(t,size,repeat):
#     for i in range (repeat):
#         drawCircles(t,size)
#         t.right(360/repeat)
# drawSpecial(Steve,100,10)
# Barry = turtle.Turtle()
# Barry.speed(0)
# Barry.color('blue')
# rotate=int(80)
# def drawCircles(t,size):
#     for i in range(4):
#         t.circle(size)
#         size=size-5
# def drawSpecial(t,size,repeat):
#     for i in range (repeat):
#         drawCircles(t,size)
#         t.right(360/repeat)
# drawSpecial(Barry,100,10)
# Terry = turtle.Turtle()
# Terry.speed(0)
# Terry.color('orange')
# rotate=int(90)
# def drawCircles(t,size):
#     for i in range(4):
#         t.circle(size)
#         size=size-19
# def drawSpecial(t,size,repeat):
#     for i in range (repeat):
#         drawCircles(t,size)
#         t.right(360/repeat)
# drawSpecial(Terry,100,10)
# Will = turtle.Turtle()
# Will.speed(0)
# Will.color('pink')
# rotate=int(90)
# def drawCircles(t,size):
#     for i in range(4):
#         t.circle(size)
#         size=size-20
# def drawSpecial(t,size,repeat):
#     for i in range (repeat):
#         drawCircles(t,size)
#         t.right(360/repeat)
# drawSpecial(Will,100,10)