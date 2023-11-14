import os, subprocess
from time import sleep
import re
import random

class GenerateTest:
    @staticmethod
    def read_file_or_ask_user(filename):
        try:
            with open(filename, 'r') as file:
                data = file.readlines()
                # for line in file:
                #     # strip the newline character and append the line to the array
                #     array.append(line.strip())
                if not data:
                    # raise ValueError("File is empty")
                    print(f"Failed to read file: {e}")
                    num_inputs = int(input("Enter the number of inputs in each line: "))
                    num_lines = int(input("Enter the number of lines (test cases): "))
                    return num_inputs, num_lines
                return data
        except Exception as e:
            print(f"Failed to read file: {e}")
            # num_inputs = int(input("Enter the number of inputs in each line: "))
            num_lines = int(input("Enter the number of lines (test cases): "))
            num_inputs = int(input("Enter the number of inputs (inputs in each testcase): "))
            # return num_inputs, num_lines
            outer = []
            for i in range(num_lines):
                inner = ""
                for j in range(num_inputs):
                    if (j == num_inputs-1):
                        inner = inner + str(random.randint(0, 100))
                    else:
                        inner = inner + str(random.randint(0, 100)) + " "
                outer.append(inner)
            return outer

    # @staticmethod
    # def remove_substring(strings, substring):
    #     new_strings = []
    #     for string in strings:
    #         new_string = string.replace(substring, '')
    #         new_strings.append(new_string)
    #     return new_strings

    @staticmethod
    def generate_test():
        # open the file in read mode
        filename = "input.txt"
        input_list = GenerateTest.read_file_or_ask_user(filename)

        # remove \n in list
        # GenerateTest.remove_substring(input_list, '\n')

        # print the array
        # print(input_list)

        generator = TestMaker("KJ", input_test=input_list)
        real_output = generator.run()
        return input_list, real_output

class TestMaker:
    def __init__(self, folder_name, **kwargs):
        """
        The function initializes various attributes of an object, including a folder name, filename,
        input test, expected output, actual output, and actual output list.
        
        :param folder_name: The `folder_name` parameter is used to specify the name of the folder where
        the files will be stored or retrieved from
        """
        self.folder_name = folder_name
        self.filename = None
        self.input_test = kwargs.get("input_test")
        self.expected_output = kwargs.get("output_test")
        self.actual_output = None
        self.actual_output_list = []

    def compileC(self):
        """
        The function renames a C file, compiles it using gcc, and checks if the compilation was
        successful.
        :return: a boolean value. It returns True if the compilation is successful and False if there is
        a compile error.
        """
        os.rename(self.filename, self.filename.replace(" ", ""))
        sleep(1)

        compile_cmd = f"gcc -w {self.filename} -o {self.filename.replace('.c', '')}"
        try:
            os.system(compile_cmd)
        except:
            print("Compile Error")
            return False
        if not os.path.exists(self.filename.replace(".c", ".exe")):
            print("Compile Error")
            return False

        self.filename = self.filename.replace(".c", "")
        sleep(3)
        return True
    
    def executeProgram(self, input_test:str):
        """
        The function executes a program and returns the standard output and standard error.
        
        :param input_test: The `input_test` parameter is a string that represents the input that will be
        passed to the program being executed. It is encoded as UTF-8 before being passed to the program
        :type input_test: str
        :return: The function `executeProgram` returns two values: `stdout.decode("utf-8")` and
        `stderr.decode("utf-8")`.
        """
        process = subprocess.Popen(self.filename, shell=True, stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE)
        stdout, stderr = process.communicate(input=input_test.encode("utf-8"))
        self.actual_output = stdout.decode("utf-8")
        return stdout.decode("utf-8"), stderr.decode("utf-8")
    
    def test(self):
        """
        The function takes a list of input tests, executes a program with each input, and appends the
        resulting output (if any) to a list after converting it to uppercase.
        """
        for i in self.input_test:
            stdout, stderr = self.executeProgram(i)
            stdout = stdout.replace("\r", "").replace("\n", "").replace(" ", "")
            if stdout is not None:
                self.actual_output_list.append(stdout.upper())
            else:
                self.actual_output_list.append(stderr)

    def run(self):
        """
        The function iterates through all ".c" files in a specified folder, compiles and tests each
        file, compares the output, and generates a result CSV file.
        # """
  
        for file in os.listdir(self.folder_name):
            if file.endswith(".c"):
                self.filename = os.path.join(self.folder_name, file)
                self.compileC()
                self.test()
                sleep(1)
                # self.actual_output_list = []
                # os.system("cls")
        return self.actual_output_list
        print("\nDone")