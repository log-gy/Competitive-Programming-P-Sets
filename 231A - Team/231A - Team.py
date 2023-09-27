n  = int(input())
counter = 0
for i in (range(n)):
    ans = input()
    if int(ans[0])+int(ans[2])+int(ans[4]) >= 2:
        counter += 1

print(counter)