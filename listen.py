import serial
import winsound

input = serial.Serial('COM4', 9600)
playing = False

while True:
	msg = input.read().decode('utf-8')
	
	if msg == '0':
		if not playing:
			print("Something's Detected, Playing Music!")
			winsound.PlaySound("purrple-cat-flourish.wav", winsound.SND_ASYNC)
			playing = True
	elif msg == '1':
		if playing:
			print("Hmm, It's Gone. Stopping Music...\n")
			winsound.PlaySound(None, winsound.SND_PURGE)
			playing = False
