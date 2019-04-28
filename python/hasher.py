import hashlib

def make_hash_sha256(word):
    arr = bytes(word, 'utf-8')
    m = hashlib.sha256()
    m.update(arr)
    sha256_hash = m.hexdigest()
    return sha256_hash