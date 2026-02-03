from setuptools import setup, find_packages

setup(
    name="myproject",
    version="1.0.0",
    packages=find_packages(),
    install_requires=[
        "requests>=2.25.0",
        "pytest>=6.0.0",
    ],
    author="Developer",
    description="Sample project",
    python_requires=">=3.8",
)
