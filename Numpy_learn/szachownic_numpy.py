import numpy as np

szachownica = np.zeros((8,8))
szachownica[1::2, ::2] = 1
szachownica[::2, 1::2] =1 
print(szachownica)


    