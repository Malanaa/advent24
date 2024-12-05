import re
with open("dayThree_data.txt") as dayThreeData:
    dababyString = dayThreeData.read()
directivePattern = r"(do\(\)|don't\(\))"
mulPattern = r"mul\((\d+),(\d+)\)"
allInstructions = re.findall(f"{directivePattern}|{mulPattern}", dababyString)
mulEnabled = True
totalMullhood = 0
for instruction in allInstructions:
    directive, mul1, mul2 = instruction[0], instruction[1], instruction[2]
    if directive: 
        mulEnabled = directive == "do()"
    elif mul1 and mul2 and mulEnabled:  
        totalMullhood += int(mul1) * int(mul2)
print(totalMullhood)