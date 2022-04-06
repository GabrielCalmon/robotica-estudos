if __name__ == '__main__':
    # x = int(input())
    # y = int(input())
    # z = int(input())
    # n = int(input())
    x = y = z = 1
    n = 2 
    
    input_list = [x, y, z]
    i_list = [var for var in range(0, x+1)]
    j_list = [var for var in range(0, y+1)]
    k_list = [var for var in range(0, z+1)]

    mylist = [[i, j, k] for i in i_list for j in j_list for k in k_list if (i + j + k != n)]

    print(mylist)
    # poss_list = [var for var in ijk_list if (x + y + z != n)]
    # print(poss_list)
    