#!/usr/bin/env python3
#coding=utf-8

def lines(file):
    for line in file: yield line
    yield '\n'                  #加入空行表示结尾

def blocks(file):
    block=[]
    for line in lines(file):
        if line.strip():           #如果非空行去掉两头多余的空格加入到块中
            block.append(line)
        elif block:                #如果非空块返回行的连接块
            yield ''.join(block).strip()
            block=[]