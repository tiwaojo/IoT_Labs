import csv

import paho.mqtt.client as mqtt


# The callback for when the client receives a CONNACK response from the server.
def on_connect(client, userdata, flags, rc):
    print("Connected with result code " + str(rc))

    # Subscribing in on_connect() means that if we lose the connection and
    # reconnect then subscriptions will be renewed.
    client.subscribe("/lab_task")


# The callback for when a PUBLISH message is received from the server.
def on_message(client, userdata, msg):
    print("topic="+msg.topic + "; data=" + str(msg.payload))
    # m_decode = str(msg.payload.decode("utf-8", "ignore"))
    # print(m_decode)
    # with open('light.csv','a+', newline='') as csvfile:
    #     fieldnames = ['data']
    #     writer = csv.DictWriter(csvfile, fieldnames=fieldnames)
    #     # writer.writeheader()
    #     writer.writerow({'data':m_decode})





client = mqtt.Client("sub_1")
client.on_connect = on_connect
client.on_message = on_message

# client.connect("broker.mqtt-dashboard.com", 1883, 60)
client.connect("test.mosquitto.org", 1883, 60)
# client.publish("tina_test_topic_1","test message:0")
# Blocking call that processes network traffic, dispatches callbacks and
# handles reconnecting.
# Other loop*() functions are available that give a threaded interface and a
# manual interface.
client.loop_forever()
