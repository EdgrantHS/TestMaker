from UnitTest import UnitTest as UT
from testmaker import GenerateTest as Gen
# from Extractor import Extractor as EX

if __name__ == '__main__':
    input_list = []
    output_list = []
    input_list, output_list = Gen.generate_test()

    checker = UT("code\\CS1", input_test=input_list, output_test=output_list, regex=True)
    checker.run()
    # print(input_list)
    # print(output_list)