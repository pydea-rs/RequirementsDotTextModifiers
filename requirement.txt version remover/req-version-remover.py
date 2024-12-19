input = open('./requirements.txt', "r")
out = open('./req.txt', "w")

for line in input:
    if not line or not len(line):
        break
    out.write(line.split('==')[0] + "\n")

out.close()
input.close()