import time

# Define the processes
processes = [
    {"pid": "P1", "arrival_time": 0, "burst_time": 5},
    {"pid": "P2", "arrival_time": 1, "burst_time": 3},
    {"pid": "P3", "arrival_time": 2, "burst_time": 8},
    {"pid": "P4", "arrival_time": 3, "burst_time": 6}
]

# Sort by arrival time
processes.sort(key=lambda x: x["arrival_time"])

current_time = 0

print("🔁 Starting FCFS Scheduling Simulation...\n")
time.sleep(1)

for p in processes:
    # If process has not arrived, wait (idle time)
    if current_time < p["arrival_time"]:
        idle_time = p["arrival_time"] - current_time
        print(f"🕒 Time {current_time} to {p['arrival_time']}: CPU IDLE")
        time.sleep(idle_time)
        current_time = p["arrival_time"]

    start = current_time
    end = current_time + p["burst_time"]
    print(f"🟩 Executing {p['pid']} from {start} to {end}")

    # Simulate burst time (you can comment out time.sleep to speed it up)
    time.sleep(p["burst_time"] * 0.3)  # scale down to simulate quickly

    current_time = end

print("\n✅ All processes have been scheduled.")
