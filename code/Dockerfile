# Use the base image with C++ development tools installed
FROM gcc:latest

# Set the working directory inside the container
WORKDIR /usr/run_file

# Copy your C++ source file into the container
COPY .  .

# Compile the C++ source file
RUN g++ -o out main.cpp

CMD ["./out"]
# Command to execute the compiled binary when the container runs
