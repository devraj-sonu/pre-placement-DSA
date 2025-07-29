arr = list(map(int, input("Enter the element separated by the space : ").split()))

maximum = arr[0]
for num in arr:
    if num > maximum:
        maximum = num

print("The largest element is : ",maximum)
