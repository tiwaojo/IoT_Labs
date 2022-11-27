# Resources Followed:
# https://github.com/docker/awesome-compose/tree/master/django
# https://github.com/docker/awesome-compose/tree/master/official-documentation-samples/django/

# syntax=docker/dockerfile:1.4

# FROM --platform=$BUILDPLATFORM python:3.7-alpine #AS builder
FROM python:latest
EXPOSE 8000
WORKDIR /app
COPY requirements.txt /app
# RUN apt-get update && \
# RUN sudo apt-get install python3-dev git -y
# mosquitto mosquitto-clients
RUN pip3 install -r requirements.txt --no-cache-dir
COPY . /app
ENTRYPOINT ["python3"]
CMD ["manage.py", "runserver", "0.0.0.0:8000"]

# FROM builder as dev-envs
# RUN <<EOF
# apk update
# apk add git
# EOF

# RUN <<EOF
# addgroup -S docker
# adduser -S --shell /bin/bash --ingroup docker vscode
# EOF
# # install Docker tools (cli, buildx, compose)
# COPY --from=gloursdocker/docker / /
# CMD ["main.py", "runserver", "0.0.0.0:8000"]