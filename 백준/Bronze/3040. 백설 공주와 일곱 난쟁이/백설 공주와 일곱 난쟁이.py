from itertools import combinations, permutations

num = []

for i in range(9):
  n = int(input())
  num.append(n)

c = list(combinations(num,7))
ans = 0
for i in c:
  for j in range(7):
    ans += i[j]
  if(ans == 100):
    for k in range(7):
      print(i[k])
  else:
    ans = 0