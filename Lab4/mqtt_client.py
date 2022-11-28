#MQTT Client


import paho.mqtt.client as mqtt

#The callback for when the client receive a connack response from the server
def on_connect(client, uesrdata, flags, rc):
	print ("connectd with result code " +str(rc))
	
	#subscribe in on connectd() if we loss the connection and 
	#reconnect thn subscription will be renewed
	client.subscribe("Core /Test")
	client.subscribe ("Core /topic")
	
#The callback for when a PUBLISH message is received from the server
def on_message(client, userdata, msg):
	print (msg.topic+ "" +str(msg.payload))
	
	if msg.payload == "Hello":
		print ("Received message #1, do something")
		#do something
	if msg.payload == "World":
		print ("Received message #2, do something else")
		#do something else


#create an MQTT client and attach our routines to it

client = mqtt.Client()
client.on_connect = on_connect
client.on_message = on_message

client.connect ("test.mosquitto.org", 1883, 60)



client.loop_forever()
 
		
	

	
