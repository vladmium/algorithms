arr = []
n = int(input('Enter size of your array: '))
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

for i in range(n-1):
    for j in range(n-1):
        if arr[j] > arr[j+1]:
            temp = arr[j]
            arr[j] = arr[j+1]
            arr[j+1] = temp
print("Sorted array: ", arr)