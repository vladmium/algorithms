n = int(input('Enter size of your array: '))
arr = []
for i in range(1, n+1):
    if i == 1:
        ele = int(input("Enter 1st element: "))
    elif i == 2:
        ele = int(input("Enter 2nd element: "))
    elif i == 3:
        ele = int(input("Enter 3rd element: "))
    else:
        ele = int(input("Enter "+str(i)+"th element: "))
    arr.append(ele)
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