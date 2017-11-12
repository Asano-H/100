text = "Now I need a drink, alcoholic of course, after the heavy lestures involving quantum mechanics."
words = text.split(' ')
result = []
for word in words:
    num = len(word)
    count =(word.count(',') + word.count('.'))
    result.append(num - count)

print(result)