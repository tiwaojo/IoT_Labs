# 3.2
# FROM gcc:4.9
# WORKDIR /docker-example
# COPY . .
# RUN gcc -o hello hello.c
# CMD ["./hello"]

# 3.3
FROM python:3.8-slim-buster
WORKDIR /app
RUN pip3 install Flask
COPY . .
CMD [ "python3", "-m" , "flask", "run", "--host=0.0.0.0"]