
# Variables in Python

first_name = input('Enter first name: ')
last_name = input('Enter last name: ')
country = input('Enter your Country: ')
city = input('Enter your city: ')
age = int(input('Enter your age: '))
is_married = input('Marital Status: ')
skills = input('Skills:')
person_info = {
    'firstname': first_name,
    'lastname': last_name,
    'country': country,
    'city': city
}

# Printing the values stored in the variables

print('First name:', first_name)
print('First name length:', len(first_name))
print('Last name: ', last_name)
print('Last name length: ', len(last_name))
print('Country: ', country)
print('City: ', city)
print('Age: ', age)
print('Married: ', is_married)
print('Skills: ', skills)
print('Person information: ', person_info)

# Declaring multiple variables in one line

first_name, last_name, country, age, is_married = first_name,last_name, country, age, is_married

print(first_name, last_name, country, age, is_married)
print('First name:', first_name)
print('Last name: ', last_name)
print('Country: ', country)
print('Age: ', age)
print('Married: ', is_married)