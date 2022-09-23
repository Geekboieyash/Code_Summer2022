import nltk
nltk.download('punkt')
import tkinter as tk
from tkinter import *
from nltk import word_tokenize
import numpy as np, pandas as pd
ls = Tk()
ls.title("Bigram")
ls.geometry('1200x1200')

def preprocess(d):
    d=d.lower()
    d="eos "+ d
    d=d.replace("."," eos")
    return d
def generate_tokens(d):
    tokens = word_tokenize(d)
    return tokens
def generate_tokens_freq(tokens):
    dct={}
    for i in tokens:
        dct[i]=0
    for i in tokens:
        dct[i]+=1
    return dct
def generate_ngrams(tokens,k):
    l=[]
    i=0
    while(i<len(tokens)):
        l.append(tokens[i:i+k])
        i=i+1
    l=l[:-1] #removes eos
    return l
def generate_ngram_freq(bigram):
    dct1={}
    for i in bigram:
        st=" ".join(i)
        dct1[st]=0
    for i in bigram:
        st=" ".join(i)
        dct1[st]+=1
    return dct1
def find1(s,dct1):
    try:
        return dct1[s]
    except:
        return 0
def get_probability(distinct_tokens,dct,dct1):
    n=len(distinct_tokens)
    l=[[]*n for i in range(n)]
    for i in range(n):
        denominator = dct[distinct_tokens[i]]
        for j in range(n):
            numerator = find1(distinct_tokens[i]+" "+distinct_tokens[j],dct1)
            l[i].append(float("{:.3f}".format(numerator/denominator)))
    return l
def print_table(distinct_tokens,probability_table):
    ll = len(distinct_tokens) + 1
    
    array = [[probability_table[i-1][j-1] for i in range(ll)] for j in range(ll)]

    array[0] = ['Tokens'] + [category for category in distinct_tokens]

    for i in range(ll):
        array[i][0] = array[0][i]
    Label(text=f'Bigram Probability Table:', width=20).grid(row=0, column=0)
    for i in range(ll):
        for j in range(ll):
               Label(text=f'{array[i][j]}', width=7).grid(row=i+2, column=j+2)

f = open('lab4.txt', 'r')
data=f.read()

d=preprocess(data)
tokens=generate_tokens(d)
distinct_tokens = list(set(sorted(tokens)))
dct=generate_tokens_freq(tokens)
bigram = generate_ngrams(tokens,2)
dct1=generate_ngram_freq(bigram)
probability_table=get_probability(distinct_tokens,dct,dct1)
print_table(distinct_tokens,probability_table)
Label(text=f'  Sample Corpus:       {data}', width=120).place(x=150, y=380)



def selected(event):
    Label(text=f'Selected Text:       {clicked.get()}', width=100).place(x=100, y=400)
    text=clicked.get()
    p = preprocess(text)
    t=generate_tokens(p)
    n = generate_ngrams(t,2)
    s=1
    dct2={}
    for i in n:
        dct2[" ".join(i)]=0
        
    for i in n:
        k=distinct_tokens.index(i[0])
        m=distinct_tokens.index(i[1])
        dct2[" ".join(i)]=probability_table[k][m]
        s*=probability_table[k][m]
    Label(text="********************************Calculating Probability of the sentence*****************************", width=100).place(x=100, y=420)
   
    x=dct2.popitem()
    str=''
    for i in dct2:
        str+=f"P('{i}')*"
    str+=f"P('{x[0]}')"
    Label(text=f"P('{text}')={str}", width=100).place(x=100, y=440)
    str2=''
    for i in dct2:
        str2+=f"{dct2[i]}*"
    str2+=f"{x[1]}"
    Label(text=f"={str2}", width=100).place(x=100, y=460)
    Label(text=f"Probability('{text}') = "+"{:.5f}".format(s), width=100).place(x=100, y=480)
    

sentences=['I am from various cities.','Students are from Delhi.','Students are engineers.','I am good.']
clicked= StringVar()
clicked.set( "---Select text---" )
drop = OptionMenu(ls , clicked , *sentences,command=selected)
drop.grid(row=30)
ls.mainloop()