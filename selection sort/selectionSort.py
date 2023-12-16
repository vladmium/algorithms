n = int(input('Enter size of your array: '))
arr = []
for i in range(1, n+1):
    if i == 1:
        print("Enter 1st element: ", end='')
    elif i == 2:
        print("Enter 2nd element: ", end='')
    elif i == 3:
        print("Enter 3rd element: ", end='')
    else:
        print("Enter "+str(i)+"th element: ", end='')
    val = int(input())
    arr.append(val)
print("Input array: ", arr)
for i in range(n):
    small = 1000000000
    for j in range(i, n):
        if small > arr[j]:
            small = arr[j]
            index = j
    temp = arr[i]
    arr[i] = arr[index]
    arr[index] = temp
print("Sorted array: ", arr)
