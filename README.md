# CSC 122 Pet Grooming

In this project, we create a little pet-grooming to-do list. It includes a list of pets that we want to groom along with functions to add a new pet and clean the next pet on the list.

This codebase introduces some of the principles of object-oriented programming in C++. We see how to create classes outside of the `main` file, use header files in a project, and write tests for classes.

## Setup

Currently, the Makefile only supports building and running the code via `g++`. If you want to build the code using another compiler, you will have to do so manually.

There are three make commands that you can run in this project.

To test the `Dog` class, use:

```bash
make test_dog
```

To test the `Store` class, use:

```bash
make test_store
```

To run the `main.cpp` file, use:

```bash
make groom
```

## Lesson Outline

Notice how we can compile and run different groups of C++ files in order to accomplish different tasks. For example, we can compile and run `test_dog.cpp` along with its requirements to run unit tests on the `Dog` class. Alternatively, we can compile and run `main.cpp` to run the program.
