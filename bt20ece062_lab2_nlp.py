from tkinter import *
import tkinter as tk
import pandas as pd
root = Tk()
root.geometry( "800x800" )
#[root,category,gender,number,person,case,tense] 
def show1(event):
        df = pd.read_csv('eng.csv')
        row=df['word'] == clicked.get()
        word=list(df[row]['word'])
        root=list(df[row]['root'])
        category=list(df[row]['category'])
        gender=list(df[row]['gender'])
        number=list(df[row]['number'])
        person=list(df[row]['person'])
        case=list(df[row]['case'])
        tense=list(df[row]['tense'])
        label0.config( text = "Word:  "+ word[0])
        label1.config( text = "Root:  "+ root[0])               
        label2.config( text = "Category:  "+category[0])
        label3.config( text = "Gender:  "+gender[0])                 
        label4.config( text = "Number:  "+number[0])
        label5.config( text = "Person:  "+person[0])
        label6.config( text = "Case:  "+case[0])
        label7.config( text = "Tense:  "+tense[0])      
def show2(event):
        df = pd.read_csv('hindi.csv')
        row=df['word'] == clicked.get()
        word=list(df[row]['word'])
        root=list(df[row]['root'])
        category=list(df[row]['category'])
        gender=list(df[row]['gender'])
        number=list(df[row]['number'])
        person=list(df[row]['person'])
        case=list(df[row]['case'])
        tense=list(df[row]['tense'])
        label0.config( text = "Word:  "+ word[0])
        label1.config( text = "Root:  "+ root[0])               
        label2.config( text = "Category:  "+category[0])
        label3.config( text = "Gender:  "+gender[0])                 
        label4.config( text = "Number:  "+number[0])
        label5.config( text = "Person:  "+person[0])
        label6.config( text = "Case:  "+case[0])
        label7.config( text = "Tense:  "+tense[0])  

def show(event):
    print("the answer is: ")                

languages=[
    "English",
    "Hindi"
]

rootwords=[
    "Boy",
    "Child",
    "Play",
    "Talk"
]

gender=[
    "Male",
    "Female",
    "NA"
]

category=[
    "Noun",
    "Verb",
    "NA"
]

number=[
    "Singular",
    "Plural",
    "NA"
]

person=[
    "First",
    "Second",
    "Third",
    "NA"
]

case=[
    "Direct",
    "Indirect",
    "NA"
]

tense=[
    "Past-Perfect",
    "Past-Continuous",
    "Simple-Present",
    "Present-Continuous",
    "Future",
    "Future Continuous",
    "NA"
]

options1 = [
"plays",
"played",
"playing",
"happiness",
"happinesses",
"watches",
"watching",
"child",
"children",
"trains",
"training",
"trained",
"sees",
"saw",
"seeing",
"seen",
"teaches",
"teaching",
"taught'"


]
options2 = [
    "khel",
    "khelna",
    "khela",
    "sundar",
    "khubsurti",
    "ghadiya",
    "ghadiyo",
    "dekhna",
    "dekha",
    "dekhta"
]

label=Label(root, text="", font=("Courier 22 bold"))
label.pack()

def display_text():
   global entry
   string= entry.get()
   label.configure(text=string)

def selected(event):
    # myLabel=Label(root,text=clicked0.get()).pack()
    
    if(clicked0.get()=='English'):
        
        drop = OptionMenu( root , clicked , *options1,command=show1 )
        drop.pack()
        # button = Button( root , text = "Get answer" , command = show ).pack()

    elif(clicked0.get()=='Hindi'):
        
        drop = OptionMenu( root , clicked , *options2 ,command=show2)
        drop.pack()

    elif(clicked0.get()=='Walk'):
        
        drop = OptionMenu( root , clicked , *options2 ,command=show2)
        drop.pack()

    elif(clicked0.get()=='Talk'):
        
        drop = OptionMenu( root , clicked , *options2 ,command=show2)
        drop.pack()   



clicked0 = StringVar()
clicked0.set( "---Select language---" )
drop0 = OptionMenu( root , clicked0 , *languages,command=selected)
drop0.pack()
clicked = StringVar()
# clicked.set( "---Select word---" )
# label0 = Label( root , text = " " )
# label1 = Label( root , text = " " )
# label2 = Label( root , text = " " )
# label3 = Label( root , text = " " )
# label4 = Label( root , text = " " )
# label5 = Label( root , text = " " )
# label6 = Label( root , text = " " )
# label7 = Label( root , text = " " )
# label0.pack()
# label1.pack()
# label2.pack()
# label3.pack()
# label4.pack()
# label5.pack()
# label6.pack()
# label7.pack()

clicked0 = StringVar()
clicked0.set( "---Root---" )
drop0 = OptionMenu( root , clicked0 , *rootwords,command=selected)
drop0.pack()
clicked = StringVar()


clicked0 = StringVar()
clicked0.set( "---Gender---" )
drop0 = OptionMenu( root , clicked0 , *gender,command=selected)
drop0.pack()
clicked = StringVar()

clicked0 = StringVar()
clicked0.set( "---Category---" )
drop0 = OptionMenu( root , clicked0 , *category,command=selected)
drop0.pack()
clicked = StringVar()


clicked0 = StringVar()
clicked0.set( "---Number---" )
drop0 = OptionMenu( root , clicked0 , *number,command=selected)
drop0.pack()
clicked = StringVar()

clicked0 = StringVar()
clicked0.set( "---Person---" )
drop0 = OptionMenu( root , clicked0 , *person,command=selected)
drop0.pack()
clicked = StringVar()

clicked0 = StringVar()
clicked0.set( "---Case---" )
drop0 = OptionMenu( root , clicked0 , *case,command=selected)
drop0.pack()
clicked = StringVar()

clicked0 = StringVar()
clicked0.set( "---Tense---" )
drop0 = OptionMenu( root , clicked0 , *tense,command=selected)
drop0.pack()
clicked = StringVar()

button = Button( root , text = "Check answer" , command = show ).pack()

label0 = Label( root , text = " " )
label1 = Label( root , text = " " )
label2 = Label( root , text = " " )
label3 = Label( root , text = " " )
label4 = Label( root , text = " " )
label5 = Label( root , text = " " )
label6 = Label( root , text = " " )
label7 = Label( root , text = " " )
label0.pack()
label1.pack()
label2.pack()
label3.pack()
label4.pack()
label5.pack()
label6.pack()
label7.pack()
root.mainloop()