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
for i in range(n-1):
    for j in range(n-1):
        if arr[j] > arr[j+1]:
            temp = arr[j]
            arr[j] = arr[j+1]
            arr[j+1] = temp
print("Sorted array: ", arr)
