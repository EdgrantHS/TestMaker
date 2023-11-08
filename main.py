from UnitTest import UnitTest as UT
from testmaker import TestMaker as TM
# from Extractor import Extractor as EX

if __name__ == '__main__':
    input_test = ["10 3 1 2 3", "25 5 10 10 10", "1 1 2", "10 4 10 0 0 0", "10 5 10 0 0 0 1", "10 5 10 0 0 0 0", "0 1 0", "0 0", "0 10 0 0 1", "1 1"]
    expected_output = ["3", "2", "0", "4", "4", "5", "1", "0", "2", "1"]

    checker = UT("code", input_test=input_test, output_test=expected_output)
    checker.run()
