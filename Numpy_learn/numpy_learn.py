import numpy as np 

#Tablica Numpy Jednowymiarowa
a = np.array([1,2,3])
#Tablicsa dwuwymiarowa
b = np.array([1,2,3],[4,5,6])
#Tablica z samymi jedynkami
array_jeden = np.ones(2,2)
#Tablica z samymi zerami 3x3
array_zera = np.zeros((3,3))
#Tablica z losowymi wartościami 
losowe_numpy = np.random.random((3,3))
#Mnożenie macierzy/tablic wielowymiarowych
mnozenie_tablic = np.dot(a, a)
#Tablica na podstawie pliku wejśćiowego 
plik_wejsciowy = np.loadtxt('filename.txt')
#Suma elementów tablicy 
suma = np.sum(a)
#Średnia arytmetyczna elementów tablicy 
srednia = np.mean(a)
#Najwiekszy element tablicy 
max = np.max(a)
#Obliczenie wyznacznika macierzy
wyznacznik = np.linalg.det(a)

#Wyznaczenie rozwiązania układu równań liniowych Ax = b
A = np.array([[1, 2], [3, 4]])
b = np.array([5, 6])
x = np.linalg.solve(A, b)

#Tablica z 10 równo rozłozonymi elementami w wybranym zakresei
rozlozona =  np.linspace(0, 2, 10)
#Transpozycja macierzy
transpozycja = np.transpose(a)
