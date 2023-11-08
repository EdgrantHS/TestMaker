from UnitTest import UnitTest as UT
from testmaker import TestMaker as TM
# from Extractor import Extractor as EX

if __name__ == '__main__':
    # input_test = ["1", "3", "2", "6", "4", "3", "1"]
    # open the file in read mode
    file = open("input.txt", "r")

    # create an empty array
    array = []

    # loop through each line in the file
    for line in file:
        # strip the newline character and append the line to the array
        array.append(line.strip())

    # close the file
    file.close()

    # print the array
    print(array)

    checker = TM("code", input_test=array)
    real_output = checker.run()
    print(real_output)
