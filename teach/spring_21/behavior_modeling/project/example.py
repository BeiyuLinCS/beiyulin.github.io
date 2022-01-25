import pandas as pd
import numpy as np
import seaborn as sns
import sklearn as sk
from sklearn import svm

df = pd.read_csv('sample2.csv')
df.head(3)

print('df')
print(df)
print("")
print('df.shape')
print(df.shape)
print("")
print('df.isnull().sum()')
print(df.isnull().sum())


## method 1: 
df_no_na = df.dropna() # delete the rows with missing values
print('df')
print(df)
