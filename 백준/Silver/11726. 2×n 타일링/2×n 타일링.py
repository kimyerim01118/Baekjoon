fibo = [0 for i in range(1001)]

def dp(n):
  if(fibo[n]!=0):
    return fibo[n]
  if(n==1):
    fibo[1] = 1
  elif(n==2):
    fibo[2] = 2
  else:
    fibo[n] = dp(n-1) + dp(n-2)

  return fibo[n]

t = int(input())

print(dp(t)%10007)
  