def get_passwords_hashes(path:str) -> []:
    digests = []
    file = open(path, "r")
    for line in file:
        line = line.strip()
        if len(line) == 64: # 64 digits in sha 256
            digests.append(line.upper())
    
    print(len(digests))
    file.close()
    return digests