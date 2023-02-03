array =[1,3,6]
k=3
if (min(array)+k>=(max(array)-k)):
	print(0)
else:
	print((max(array)-k)-(min(array)+k))