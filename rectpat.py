width=int(input("width"))

h=int(input("height"))

for i in range(h):
	if (i==0) or (i==(h-1)):
		print("@"*width)
	else:
		print("@"," "*(width-4),"@")