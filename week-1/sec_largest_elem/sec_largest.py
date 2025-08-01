def second_largest(arr):
    unique_elements = list(set(arr))
    if len(unique_elements) < 2:
        return "Second largest element not founded."
    
    unique_elements.sort(reverse=True)
    return f"Second largest element is :{unique_elements[1]}"


arr = list(map(int, input("Enter array element separated by space : ").split()))


result = second_largest(arr)
print(result)

