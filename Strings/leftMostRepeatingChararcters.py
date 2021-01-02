def leftRepeatChar(s: str)->int:
    temp = [0]*256
    tempIndex = [-1]*256
    i=0
    for c in s:
        ci = ord(c)
        if temp[ci]<=2:
            if temp[ci] == 0:
                tempIndex[ci] = i
            temp[ci] += 1
        i += 1
    for j in range(256):
        if temp[j]==2:
            return tempIndex[j]
    
    return -1

print(leftRepeatChar("abccb"))