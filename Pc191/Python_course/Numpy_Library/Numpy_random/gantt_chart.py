import matplotlib.pyplot as plt

# Process list
processes = [
    {"pid": "P1", "arrival_time": 0, "burst_time": 5},
    {"pid": "P2", "arrival_time": 1, "burst_time": 3},
    {"pid": "P3", "arrival_time": 2, "burst_time": 8},
    {"pid": "P4", "arrival_time": 3, "burst_time": 6}
]

# Sort by arrival
processes.sort(key=lambda x: x["arrival_time"])

# Track start and end times
current_time = 0
gantt_data = []

for p in processes:
    if current_time < p["arrival_time"]:
        current_time = p["arrival_time"]
    start = current_time
    end = start + p["burst_time"]
    gantt_data.append((p["pid"], start, end))
    current_time = end

# Plotting
fig, ax = plt.subplots()
for i, (pid, start, end) in enumerate(gantt_data):
    ax.broken_barh([(start, end - start)], (i * 10, 9), facecolors='tab:blue')
    ax.text(start + (end - start)/2 - 0.5, i * 10 + 4, pid, color='white')

# Axis settings
ax.set_ylim(0, 50)
ax.set_xlim(0, current_time + 2)
ax.set_xlabel('Time')
ax.set_yticks([i * 10 + 4 for i in range(len(processes))])
ax.set_yticklabels([p["pid"] for p in processes])
ax.set_title("FCFS Scheduling - Gantt Chart Simulation")
plt.grid(True)
plt.show()
