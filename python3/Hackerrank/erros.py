try:
    a = int(input('Numerador: '))
    b = int(input('Denominador: '))
    r = a / b
# except Exception as erro:
#    print(f'O erro foi {erro.__class__}')
except (ValueError, TypeError):
    print('Dados digitados inválidos')
except ZeroDivisionError:
    print('O denominador não pode ter valor zero')
else:
    print(f'O resultado foi {r:.1f}')
finally:
    print(f'código concluído')
