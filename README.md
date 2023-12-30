# Simple Shell Project

### Note: This project has been completed to nearly 80%. Due to the final exams of my academy, I didn't have much time to dedicate to its completion. Contributions or further improvements are welcome.

## Description

This repository contains the implementation of a simple UNIX command line interpreter, also known as a shell. It was developed as part of the 0x16. C - Simple Shell project at ALX SE.

## Table of Contents

1-Background Context
2-Features
3-Requirements
4-Installation
5-Usage
6-Testing
7-Contributing

## Background Context

he goal of this project was to design and implement a basic shell that mimics some functionalities of the standard UNIX shell. This project aims to reinforce understanding of:

1-Basics of C programming
2-System calls and process management
3-Understanding of shell workings

## Features

1-Command execution from the shell
2-Handling of command lines with and without arguments
3-Basic environment handling using env
4-Error handling for command not found and other potential issues
5-Proper handling of the "end of file" condition

## Requirements

1-Allowed editors: vi, vim, emacs
2-Compiled on Ubuntu 20.04 LTS using gcc with specific flags
3-Follow the Betty style guidelines for code formatting

## Installation

1- Clone the repository: "git clone https://github.com/zscbana/simple_shell.git
"
2-Navigate to the project directory"cd simple_shell"

3- Compile the shell "gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
"

## Usage

interactive Mode: "./hsh"

## Testing

To ensure that the shell functions correctly, various tests can be performed. It is crucial to ensure that the shell's output matches the output of /bin/sh.

## Contributing

This project is a collaborative effort. If you wish to contribute, please:

1-fork the repository
2-Create a new branch (git checkout -b feature/your-feature)
3-Make your changes
4-Commit your changes (git commit -am 'Add some feature')
5-Push to the branch (git push origin feature/your-feature)
6-Create a new Pull Request

### For major changes, please open an issue first to discuss the proposed change.