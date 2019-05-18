import sys

from password_breaker import password_breaker
import password_getter


def main():

    chars = sys.argv[1]
    max_length = int(sys.argv[2])

    digests = password_getter.get_passwords_hashes()
    print(*digests, sep = "\n") 

    breaker = password_breaker(chars, digests, max_length)
    result = breaker.start_breaking()
    for x, y in result.items():
        print("Digest : {0} Word : {1}".format(x,y))


if __name__ == "__main__":
    main()