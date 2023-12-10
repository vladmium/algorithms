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
ans = []
for i in range(n):
    mini = 1000000000
    for j in range(n):
        if mini > arr[j]:
            mini = arr[j]
            mini_j = j
    ans.append(mini)
    arr[mini_j] = 1000000000
print("Sorted array: ", ans)
