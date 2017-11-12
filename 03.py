text = "Now I need a drink, alcoholic of course, after the heavy lestures involving quantum mechanics."
num = []
words = text.split(" ")
for word in words:
    count = 0
    for char in word:
        if charisalpha():
            count += 1
        num.append(count)
print(num)