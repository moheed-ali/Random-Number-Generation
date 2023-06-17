import matplotlib.pyplot as plt

""" Uniform Int Distribution """ 
# Read data from file
with open("Random number generation Group 8/Uniform (real)/uniform_real_10.dat", "r") as file:
    data = file.readlines()
data = [float(x.strip()) for x in data]

# Generate graph
plt.plot(data, color='orange')
plt.xlabel('Index')
plt.ylabel('Value')
plt.title('Uniform Real Data (For 10 Values)')
plt.grid(True)


""" Uniform Int Distribution 
# Read data from file
with open('uniform_int_1000.dat', 'r') as file:
    data = [int(line.strip()) for line in file]

# Plot histogram
plt.hist(data, bins='auto', color='purple', alpha=0.7)
plt.xlabel('Values')
plt.ylabel('Frequency')
plt.title('Uniform Integer Distribution (For 1000 Values)')
plt.grid(True)
""" 

""" Normal Distribution
# Read data from file
with open('normal_10000.dat', 'r') as file:
    data = [float(line.strip()) for line in file]

# Generate graph
plt.plot(data)
plt.xlabel('Index')
plt.ylabel('Value')
plt.title('Normal Distribution (for 10,000 values)')
plt.grid(True)
"""

""" Exponential Distribution
import numpy as np
# Read data from file
data = np.loadtxt('expotential_10000.dat')

# Plot histogram with a different color
plt.hist(data, bins='auto', color='green', alpha=0.7)
plt.xlabel('Value')
plt.ylabel('Frequency')
plt.title('Exponential Distribution (For 10,000 Values)')
plt.grid(True)
"""

""" bernoulli Distribution
# Read data from file
with open('bernoulli_10000.dat', 'r') as file:
    data = file.readlines()

# Extract values from data
values = [float(value.strip()) for value in data]

# Generate x-axis values
x = range(1, len(values) + 1)

# Create bar graph
plt.bar(x, values)

# Set labels and title
plt.xlabel('Data Point')
plt.ylabel('Value')
plt.title('Bernoulli Distribution (10,000 Values)')
"""

# Display the graph
plt.show()
