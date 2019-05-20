def save_results(path, content):
    file = open(path, "w")
    for digest, word in content.items():
        file.write("{0} ; {1}\n".format(digest, word))
    file.close()