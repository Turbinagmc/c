n = 1
numero_par = 0
while n <= 10:
numero = int(input("Digite o número"))
n = n + 1
if (numero % 2 == 0):
 numero_par = numero_par + 1

print(numero_par, "número(s) par(es) e ", 10-numero_par, "ímpares")
