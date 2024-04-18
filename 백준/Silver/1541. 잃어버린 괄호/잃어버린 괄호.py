n = input()
ans = 0
input_list = n.split('-')

plus =list(map(int, input_list [0].split('+')))
ans = sum(plus)
minus = []
input_list.pop(0)

for i in input_list:
  s = list(map(int, i.split('+')))
  ans -= sum(s)

print(ans)