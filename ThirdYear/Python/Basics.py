# print("hello world")
# print("hello " , "kshitij")
# print(23)
# print(23+ 34)

# name = "kshitij"  # ' ' or '''   '''
# age , marks = 18 , 99.5
# male = True #False
# print(name , age , marks)
# print(type(name) , type(age) , type(marks))

# # 5 data type - integer , string , float , boolean  , none
# name = None # abhi kuch ni hain ismein
# print (type(name))



# #Puntuator - organize sentence structure in programming - () , {} , @ , []  , #
# #implicit/dynamic - Typed Language


# #Expression Execution

# A , B = "2" , 3
# Txt = "@"
# print((A + Txt)*3)

# #arithmetic expesson between int and float will result in float
# A= 2 
# B = 4.3
# print(A+B)
# #result of division opertor with two interger will be float
# #result of A // B is same as floor(A/B)
# print(A//B , A/B)

# #A % B ?? it always give positibe and except when only denominator is negative

# """
# This 
# is
# multiline
# Comment
# """


# #how to cin values ? using input
# name = input("name : ")
# age = int(input("age : "))
# marks = float(input("marks : "))
# print(name ,age , float)

# #operators - // ** , not , and , or , in , not in , is , is not , bitwise

# #conditional
# # if(condition):
# #    statement1
# # elif(condition):
# #     statement2
# # else:
# #     statement3

# #single line ternary statement

# food = input("Food : ")
# eat = "yes" if food == "cake" else "no"
# print("statement ") if food == "cake" else "no"
# print(eat)

# #clever if

# #type conversion

# a = 2
# b = 4.32
# # float is superior than int
# sum = a + b
# a = "2"
# b = 4.32
# # error
# sum = int(a) + b

# print(a + b)


# #strings - immutable


#list - store sets of values - mutable - indexing same as aray in c++
marks = [1 , 2 ,3 ,4 , 5 , 6, "kshitij"] 
marks[0]= "Sanju" #allowed
print(marks)
print(len(marks))
print(marks[1:4])
print(marks[:4])
print(marks[1:])
print(marks[1:4])
print(marks[-3:-1])

#append(4)  add 4 at last  
# sort() - asc
# sort(reverse=True) - desc
# reverse()
#insert(index , elemnt)
# remove(1)  - remove the first ovccujrece


#tupple- list ka bhai - store sets of values - immutable - indexing same as aray in c++
marks = (1 , 2 ,3 ,4 , 5 , 6, "kshitij")
# marks[0]= "Sanju" #not allowed
print(marks)
print(len(marks))
print(marks[1:4])
print(marks[:4])
print(marks[1:])
print(marks[1:4])
print(marks[-3:-1])

tup = (1 ,) #tupple
tup = (1 + 4) #integer

#index(element)  first occurence index of element  
# count(element) - total occurence
# sort(reverse=True) - desc
# reverse()
#insert(index , elemnt)
# remove(1)  - remove the first ovccujrece
#list.pop(index)




#dictonary - stores key values pair , unordered , mutable  - Objects ki taragh hain yeh
# key - immutable values - tupples - dictionary
dict = {
    "name" : "kshitij",
     "roll" : 23,
     2 : "kshiij",
     "subjects" : ["python" , "c" , "java"]
}
print(dict['name'])
print(dict)

null_dict = {}
null_dict["name"] = "kshitij"
print(null_dict)
 #nested dictinary
student = {
  "name": "kshitiuj",
  "subjects" : {
   "phy" : 97 ,
   "chem": 2
  }
}
 #Mydic.keys() , values() , items - return pair as tupples  , get("key") , update(newDictional)
 