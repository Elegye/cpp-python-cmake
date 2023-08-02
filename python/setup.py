from setuptools import setup, find_packages

def read_version():
    with open("VERSION") as f:
        return f.readline().strip()

setup(
    version="0.1",
    package_dir={"PyCppProject": find_packages("src")},
    package_data={
        "PyCppProject": [
            "src/PyCppProject/._core/PyCppProject._core.cpython-311-darwin.so",
            "src/PyCppProject/*.py"
        ]
    }
)