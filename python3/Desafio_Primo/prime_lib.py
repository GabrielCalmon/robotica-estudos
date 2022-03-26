def verify_prime(num):
    is_prime = True
    divisible_list = [1]
    for i in range(2,num-1):        # todo número é divisível por 1 e ele mesmo
        resto = num%i
        if resto == 0:
            divisible_list.append(i)
            is_prime = False            
    
    divisible_list.append(num)
    if is_prime:
        return True, divisible_list
    else:
        return False, divisible_list