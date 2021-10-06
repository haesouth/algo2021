# 현재 나이트의 위치 입력받기
input_data = input()
result = 0

row = ord(input_data[0]) - 96
column = int(input_data[1])

steps = [(-2, -1), (-1, -2), (1, -2), (2, -1), (2, 1), (1, 2), (-1, 2), (-2, 1)]

for step in steps:
    next_row = row + step[0]
    next_column = column + step[1]
    
    if 1<= next_row <= 8 and 1<= next_column <= 8:
        result += 1
        

print(result)

