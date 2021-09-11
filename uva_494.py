while True:
    try:
        str1 = str(input())
    except EOFError:
        break
    i = ' '
    for a in str1:
        if a.isspace() or a.isalpha():
            i+=a
        else:
            i+=' '
    print(len(i.split()))
