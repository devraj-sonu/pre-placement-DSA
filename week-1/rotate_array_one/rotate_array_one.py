n = int(input("Enter the size of the array : "))

arr = list(map(int, input("Enter the elements : ").split()))

last = arr[-1]

for i in range(len(arr)-1, 0 , -1):
    arr[i] = arr[i-1]

arr[0] = last

print("Array after rotation : ",arr)