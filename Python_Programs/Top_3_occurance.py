#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Apr 16 23:16:54 2019

@author: arnikavishwakarma
"""

from collections import Counter


data = "John is the son of John second.Second son of John second is William second"

data_split = data.split()
Counter = Counter(data_split)
top_3_words = Counter.most_common(3)

dict_words = dict(top_3_words)
print(dict_words.keys())

