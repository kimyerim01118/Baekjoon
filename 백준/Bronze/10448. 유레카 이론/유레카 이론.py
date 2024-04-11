from itertools import combinations_with_replacement

t = []
for i in range(1,50):
  t.append(int(i*(i+1)/2))

t_c = combinations_with_replacement(t,3)


g = []
three = 0
for i in t_c:
  for j in range(3):
    three += i[j]

  g.append(three)
  three = 0

n = int(input())

1
for i in range(n):
  k = int(input())
  if k in g:
    print(1)
  else:
    print(0)
