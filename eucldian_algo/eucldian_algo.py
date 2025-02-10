def eucldian_algo(a , b):

    while b != 0:
        tmp = b
        b = a % b
        a = tmp
    return a


gcd = eucldian_algo(72, 48)
print(gcd)