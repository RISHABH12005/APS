def alphabet():
    print("Hi! I'm a clever computer program that knows the alphabet.")
    while True:
        l = input("Please enter a letter: ").strip()
        if len(l) == 1 and l.isalpha():
            if l == 'z':
                nl = 'a'
            elif l == 'Z':
                nl = 'A'
            else:
                nl = chr(ord(l) + 1) if l.isalpha() else l
            print(f"The next letter is {nl}.")
        else:
            print("Invalid input. Please enter a single letter from the alphabet.")
        r = input("Do you want to enter another letter (y = yes)?").strip().lower()
        if r != 'y':
            break
    print("Goodbye!")
alphabet()