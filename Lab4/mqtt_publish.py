#MQTT Publish Demo

#Publish two messages to tow different topic

import paho.mqtt.publish as publish

publish.single("Core /Test", "Hello", hostname="test.mosquitto.org")
publish.single("Core /topic", "World", hostname="test.mosquitto.org")

print("Done")

