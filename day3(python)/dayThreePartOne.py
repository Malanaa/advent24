import re
dayThreeData = open("dayThree_data.txt")
dababyString = dayThreeData.read()
positionOfMul = dababyString.find("mul")
theMULPattern = r"mul\((\d+),(\d+)\)"
foundedMulls = re.findall(theMULPattern, dababyString)
TotalMullhood = 0
for mulls in foundedMulls:
    try:
        TotalMullhood += int(mulls[0]) * int(mulls[1])
    except Exception:
        pass
print(TotalMullhood)
