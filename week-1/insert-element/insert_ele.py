arr = list(map(int,input("Enter the element separated by the space : ").split()))
elem = int(input("Enter the element to insert at the end : "))
arr.append(elem)

print("Array after insertion : ")
print(arr)