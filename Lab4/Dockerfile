FROM eclipse-mosquitto:latest

RUN apk update && \
    apk add git python3 py3-pip mosquitto mosquitto-clients && \
    pip3 install paho-mqtt


RUN git clone https://github.com/eclipse/paho.mqtt.python.git && \
    cd paho.mqtt.python && \
    python3 setup.py install
COPY . .
