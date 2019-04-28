import hasher

class generator:
    def __init__(self, chars, max_output_length):
        self.chars = chars
        self.max_output_length = max_output_length

    def generate(self):
        print("chars: {0}, max length: {1}".format(self.chars, self.max_output_length))
        self.produce_string()

    def produce_string(self, word = ""):
        if(len(word) >= self.max_output_length):
            return

        new_word = ""

        for i in range (0, len(self.chars)):
            new_word = word + self.chars[i]
            sha256_hash = hasher.make_hash_sha256(new_word)
            print(new_word + " : " + sha256_hash)
            self.produce_string(new_word)

        return