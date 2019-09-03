print('Enter numbers')
a = float(input())
b = float(input())
if a < 0 :
  a = a*(-1)
if b < 0:
  b = b*(-1)
print('Вот сумма, разность, произведение и частное соответственно: ', a+b, a-b, a*b, a/b )