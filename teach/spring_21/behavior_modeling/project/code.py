import pandas as pd
import numpy as np
import seaborn as sns
import sklearn as sk
from sklearn import svm
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split


df = pd.read_csv('sample2.csv')
df.head(3)
train, test = train_test_split(df, test_size = 0.2)
print(train.shape, test.shape)
test.head()

train['tripduration'].plot.hist(bins=50, figsize=(10,5),edgecolor='white',range=[150,500])
plt.xlabel('tripduration', fontsize=15)
plt.ylabel('Frequency', fontsize=15)
plt.tick_params(labelsize=15)
plt.title('tripduration - Training Set', fontsize=17)
plt.show()

train['gender'].value_counts(normalize=True, sort=False)*100

##### baseline

#split the target variable and the predictor variables
x_train, x_test = train.drop(['gender','starttime', 'stoptime'], axis=1), test.drop(['gender','starttime', 'stoptime'], axis=1)
y_train, y_test = train['gender'], test['gender']

#log transformation
y_train_log = np.log1p(y_train)
y_test_log = np.log1p(y_test)

#for baseline prediction
y_train_mean = y_train_log.mean()

from sklearn.metrics import mean_squared_error
def rmsle(y_test, y_pred):  
    result = (np.sqrt(((y_test-y_pred)**2).mean())).round(4)
    return result

#error rate
baseline_result = rmsle(y_test_log,y_train_mean)
print(baseline_result)
x_train.head()


# Load libraries
from pandas import read_csv
from pandas.plotting import scatter_matrix
from matplotlib import pyplot
from sklearn.model_selection import train_test_split
from sklearn.model_selection import cross_val_score
from sklearn.model_selection import StratifiedKFold
from sklearn.metrics import classification_report
from sklearn.metrics import confusion_matrix
from sklearn.metrics import accuracy_score
from sklearn.linear_model import LogisticRegression
from sklearn.tree import DecisionTreeClassifier
from sklearn.neighbors import KNeighborsClassifier
from sklearn.discriminant_analysis import LinearDiscriminantAnalysis
from sklearn.naive_bayes import GaussianNB
from sklearn.svm import SVC

# Spot Check Algorithms
models = []
models.append(('LR', LogisticRegression(solver='liblinear', multi_class='ovr')))
models.append(('LDA', LinearDiscriminantAnalysis()))
models.append(('KNN', KNeighborsClassifier()))
models.append(('CART', DecisionTreeClassifier()))
models.append(('NB', GaussianNB()))
models.append(('SVM', SVC(gamma='auto')))

# evaluate each model in turn
results = []
names = []
for name, model in models:
    kfold = StratifiedKFold(n_splits=10, random_state=1, shuffle=True)
    cv_results = cross_val_score(model, x_train, y_train, cv=kfold, scoring='accuracy')
    results.append(cv_results)
    names.append(name)
    print('%s: %f (%f)' % (name, cv_results.mean(), cv_results.std()))










