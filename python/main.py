import sys

from generator import generator


def main():

    chars = sys.argv[1]
    max_length = int(sys.argv[2])

    g = generator(chars, max_length)
    g.generate()


if __name__ == "__main__":
    main()