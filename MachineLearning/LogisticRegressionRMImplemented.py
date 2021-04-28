#!/usr/bin/env python
# coding: utf-8

# In[14]:



import numpy as np
import pandas as pd
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from math import exp
plt.rcParams["figure.figsize"] = (10, 6)



data = pd.read_csv("D:\Machine Learning\Social_Network_Ads.csv")
data.head()


# In[15]:



plt.scatter(data['Age'], data['Purchased'])
plt.show()


xTrain, xTest, yTrain, yTest = train_test_split(data['Age'], data['Purchased'], test_size=0.20)


# In[16]:



def normalize(X):
    return X - X.mean()

def predict(X, b0, b1):
    return np.array([1 / (1 + exp(-1*b0 + -1*b1*x)) for x in X])

def logisticRegression(X, Y):

    X = normalize(X)


    b0 = 0
    b1 = 0
    L = 0.001
    epochs = 300

    for epoch in range(epochs):
        yPred = predict(X, b0, b1)
        dB0 = -2 * sum((Y - yPred) * yPred * (1 - yPred))  
        dB1 = -2 * sum(X * (Y - yPred) * yPred * (1 - yPred))  
        b0 = b0 - L * dB0
        b1 = b1 - L * dB1
    
    return b0, b1


# In[17]:


# Training the model
b0, b1 = logisticRegression(xTrain, yTrain)

# Making predictions
xTestNorm = normalize(xTest)
yPred = predict(xTestNorm, b0, b1)
yPred = [1 if p >= 0.5 else 0 for p in yPred]

plt.clf()
plt.scatter(xTest, yTest)
plt.scatter(xTest, yPred, c="red")
plt.show()

accuracy = 0
for i in range(len(yPred)):
    if yPred[i] == yTest.iloc[i]:
        accuracy += 1
print(f"Accuracy = {accuracy / len(yPred)}")


# In[ ]:




