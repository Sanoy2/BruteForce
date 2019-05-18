import hasher

class password_breaker:
    def __init__(self, chars, digests, max_output_length = 50):
        self.chars = chars
        self.passwords_to_break = digests
        self.max_output_length = max_output_length
        self.broken_passwords = {}

    def start_breaking(self):
        self.produce_string()
        return self.broken_passwords

    def produce_string(self, word = ""):
        if(len(word) >= self.max_output_length) or len(self.passwords_to_break) == 0:
            return

        new_word = ""

        for i in range (0, len(self.chars)):
            new_word = word + self.chars[i]
            sha256_hash = hasher.make_hash_sha256(new_word)
            print(new_word + " : " + sha256_hash)
            self.compare_digests(sha256_hash,new_word)
            if len(self.passwords_to_break) == 0:
                return
            else:
                self.produce_string(new_word)

        return

    def compare_digests(self, digest, word):
        for password_digest in self.passwords_to_break:
            if password_digest == digest:
                print("HIT!")
                print("Digest: " + digest)
                print("Word  : " + word)
                self.broken_passwords[digest] = word
                self.passwords_to_break.remove(password_digest)