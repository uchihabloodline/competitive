n,k = int(input()), int(input())
l = []		
for i in range(n):
	val=int(input())
	l.append(val)

	ct=0
	sorted(l)
	for j in range(n):
		if abs(l[i]-l[i+1]) <= k:
			ct+=1
			k-=1

			print(ct)
