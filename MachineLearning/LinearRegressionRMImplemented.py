#!/usr/bin/env python
# coding: utf-8

# In[4]:


import numpy as np
import matplotlib.pyplot as plt


# In[16]:


x = np.array([0, 1, 2, 3, 4, 5, 6, 7, 8, 9,100,121,313,232,11101,32312,54442])
y = np.array([1, 3, 2, 5, 7, 8, 8, 9, 10, 12,105,137,340,245,11200,32500,57231])

n = np.size(x)

xMean = np.mean(x)
yMean = np.mean(y)

ssXY = np.sum(y*x) - n*(yMean)*(xMean)
ssXX = np.sum(x*x) - n*(xMean)*(xMean)

b1 = ssXY/ssXX
b0 = yMean - b1*xMean

print(b0)
print(b1)

plt.scatter(x, y, color = "b",marker = "s", s = 30)
 
y_pred = b0 + b1*x
 
plt.plot(x, y_pred, color = "r")
 
plt.xlabel('x')
plt.ylabel('y')
 
plt.show()


# In[ ]:




