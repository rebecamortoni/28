#28 <3

import random
print("Jogo do casal 28")
print("Adivinhe o numero que estou pensando!")
print("Uma dica e um numero entre 0 e 100")

x = random.randint(0,100)
tentativas = 1

while True:
    escolha =  int(input())
    if escolha == x:
        print("Parabens voce acertou")
        print("So foi preciso {} tentativas".format(tentativas))
        break
    else:
        if(escolha > x):
            print("O numero que eu to pensando e menor")
        else:
            print("O numero que eu to pensando e maior")

    tentativas += 1
