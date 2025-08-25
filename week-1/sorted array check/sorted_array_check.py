arr = list(map(int, input("Enter array elements separated by space : ").split()))

is_sorted = True
for i in range(len(arr)-1):
    if arr[i] > arr[i+1] :
        is_sorted = False
        break


if is_sorted:
    print("Array is sorted in ascending order .")
else:
    print("Array is not sorted in ascending order .")
