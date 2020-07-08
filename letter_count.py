import sys

def letter_count(argv):
    f = open(argv, "r")
    cpt = 0
    line = f.readline()
    while line:
        if line == "":
            break
        for x in line:
            if (x >= 'a' and x <= 'z') or (x >= 'A' and x <= 'Z'):
                cpt += 1
        line = f.readline()
    f.close()
    return cpt

def main(argv):
    print("This file contains " + str(letter_count(argv)) + " letters.");


if __name__ == "__main__":
    main(sys.argv[1])
