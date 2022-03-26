from prime_lib import *
from cores import *

num = input("Digite aqui: ")

if not (num.isnumeric()):
    print(f'{cores["vermelho em negrito"]}Erro! O tipo digitado é inválido')
elif int(num) <= 1:
    print(f'{cores["vermelho em negrito"]}Erro! O valor digitado é menor ou igual a 1')
else:
    num = int(num)
    is_prime, divisible_list = verify_prime(num)
    if is_prime:
        print(f'O número \033[4m{num}\033[m{cores["verde em negrito"]} é primo!\033[m')
    else:
        print(f'O número \033[4m{num}\033[m{cores["vermelho em negrito"]} não é primo!\033[m')
    print(f'E é divisível por: {divisible_list}')
    