import tkinter as tk
import serial

# Initialize serial port
arduino = serial.Serial('COM5', 9600)

# Function that matches our code on the arduino side 
def led_on():
    arduino.write(b'H')

def led_off():
    arduino.write(b'L')

# Create UI window
root = tk.Tk()
root.title("Arduino LED Control")

# Create and place buttons
on_button = tk.Button(root, text="LED ON", command=led_on)
on_button.pack()

off_button = tk.Button(root, text="LED OFF", command=led_off)
off_button.pack()

root.mainloop()
