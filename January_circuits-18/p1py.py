def f(n,k):
 a = n//k
 r = n%k
 s1 = (k-r)*a*(a-1)//2
 s2 = r*a*(a+1)//2
 return s1+s2
[n,k] = [int(i) for i in input().split()]
# arr = [0 for i in range(0,k)]
# for i in range(1,n+1):
# 	arr[i%k]+=1
# sum = 0
# for i in arr:
# 	sum+=(i*(i-1))//2
# print(sum)
print(f(n,k))