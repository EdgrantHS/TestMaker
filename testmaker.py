import os, subprocess
from time import sleep
import re

# class Student:
#     def __init__(self, name, score, message, kode_aslab, regex_output):
#         """
#         The function initializes an object with attributes such as name, score, message, kode_aslab, and
#         regex_output.
        
#         :param name: The name parameter is a string that represents the name of the object being
#         initialized
#         :param score: The `score` parameter is a float that represents the score of a student. It is
#         used to store and manipulate the score value
#         :param message: The `message` parameter is a string that represents a message or description
#         associated with an object. It can be used to provide additional information or context about the
#         object
#         :param kode_aslab: The parameter "kode_aslab" is a variable that represents the code or
#         identification of the assistant lab. It could be a string or any other data type that is used to
#         uniquely identify the lab assistant
#         :param regex_output: The `regex_output` parameter is a boolean value that indicates whether the
#         output of a regular expression match is expected or not. If `regex_output` is `True`, it means
#         that the output of the regular expression match is expected. If `regex_output` is `False`, it
#         means that the
#         """
#         self.name = name
#         self.score:float = score
#         self.message = message
#         self.kode_aslab = kode_aslab
#         self.regex_output:bool = regex_output

class TestMaker:
    def __init__(self, folder_name, **kwargs):
        """
        The function initializes various attributes of an object, including a folder name, filename,
        input test, expected output, actual output, actual output list, and a student object.
        
        :param folder_name: The `folder_name` parameter is used to specify the name of the folder where
        the files will be stored or retrieved from
        """
        self.folder_name = folder_name
        self.filename = None
        self.input_test = kwargs.get("input_test")
        self.expected_output = kwargs.get("output_test")
        self.kode_aslab = kwargs.get("kode_aslab")
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