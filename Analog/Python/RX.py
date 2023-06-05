import matplotlib
import time
import serial
import matplotlib.pyplot as plt
matplotlib.use('Qt5Agg')  # 'Qt5Agg'


ser = serial.Serial('COM3', 9600)
ser.flushInput()

timestamps = []
data_x = []
data_y = []

fig, ax = plt.subplots()

line_x, = ax.plot(timestamps, data_x, color='red', label='Sensor 1')
line_y, = ax.plot(timestamps, data_y, color='blue', label='Sensor 2')

ax.set_xlabel('Time')
ax.set_ylabel('Voltages')
ax.set_title('UART Over USB')

ax.legend()

start_time = time.time()
while True:
    try:
        line = ser.readline().decode('utf-8').rstrip()

        if line.startswith('Data: '):
            data = line[6:].split(', ')
            x = float(data[0])
            y = float(data[1])

            elapsed_time = time.time() - start_time

            timestamps.append(elapsed_time)
            data_x.append(x)
            data_y.append(y)

            line_x.set_data(timestamps, data_x)
            line_y.set_data(timestamps, data_y)

            ax.set_xlim(max(elapsed_time - 15, 0), elapsed_time)

            ax.relim()
            ax.autoscale_view()

            plt.draw()
            plt.pause(0.01)

    except KeyboardInterrupt:
        ser.close()
        break

plt.show()
