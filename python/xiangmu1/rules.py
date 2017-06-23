#!/usr/bin/env python3
#coding=utf-8


class Rule:
    def action(self,block,handler):
        handler.start(self.type)
        handler.feed(block)
        handler.end(self.type)
        return True

class HeadingRule(Rule):
    '''
    定义标题的规则
    '''
    type='heading'
    def condition(self,block):
        return not '\n' in block and len(block)<71 and not block[-1]==';'

class TitleRule(HeadingRule):
    '''
    定义大标题规则，大标题首先得是标题,大标题只有一个
    '''
    type='title'
    first=True

    def condition(self,block):
        if not self.first: return False
        self.first= False
        return HeadingRule.condition(self.block)

class ListitemRule(Rule):
    '''
    列表项以连字符开始，处理时需要去除连字符
    '''
    type='listitem'
    def condition(self,block):
        return block[0]=='-'
    def action(self,block,handler):   #重定义action函数
        handler.start(self.type)
        handler.feed(block[1:].strip())
        handler.end(self.type)
        return True

class ListRule(ListitemRule):
    '''
    列表从不是列表项和列表项之间开始，在列表项和不是列表项之间结束
    '''
    type='list'
    inside=False
    def condition(self,block):
        return True
    def acion(self,block,handler):
        if not self.inside and ListitemRule.condition(self,block):
            handler.start(self.type)
            self.inside=True
        elif self.inside and not ListitemRule.condition(self.block):
            handler.end(self.type)
            self.type
        return False


class ParagraphRule(Rule):
    '''
    段落就是不符合其他规则的block
    '''
    type='paragraph'
    def condition(self,block):
        return True