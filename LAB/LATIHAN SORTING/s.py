
animal_list = [
    'Pig', 'Dog'
]

while True:
    print('''
Menu :
1. Add Animal
2. Remove Animal
3. View Animal
4. Exit''')
    choice = input('Choose your option: ')
    if choice == '1':
        animal = input('Enter animal name: ')
        animal_list.append(animal)
    elif choice == '2':
        animal = input('Enter animal name: ')
        animal_list.remove(animal)
    elif choice == '3':
        for animal in animal_list:
            print(animal)
    elif choice == '4':
        break
    else:
        print('Invalid option')