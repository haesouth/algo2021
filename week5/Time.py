h = int(input())
answer = 0

for i in range(h+1):
    for j in range(60):
        for z in range(60):
            if '3' in str(i) + str(j) + str(z):
                answer += 1

print(answer)