def counting_sort(arr):
    len1 = max(arr)+1
    len2 = len(arr)

    temp_arr = [0] * len1
    output = [0] * (len2)

    for i in arr:
        temp_arr[i] += 1

    # j = 0;

    # for i in  range(len):
    #     for a in range(temp_arr[i]):
    #         arr[j] = i
    #         j += 1

    # return arr

    for i in range(len1):
        if i > 0:
            temp_arr[i] += temp_arr[i-1]

    print(temp_arr)

    for i in range(len2):
        output[temp_arr[arr[i]]-1] = arr[i]
        temp_arr[arr[i]] -= 1

        
    return output



if __name__ == "__main__":
    
    arr = [3, 0, 2, 0, 1, 3, 4, 2]

    print(counting_sort(arr))