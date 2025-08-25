# move all zeros at the end in python

arr = list(map(int, input("Enter the element separated by the space : ").split()))

non_zeros = [x for x in arr if x!=0]
zeros = [0] * (len(arr) - len(non_zeros))

result = non_zeros + zeros

print("Updated list : ",result)