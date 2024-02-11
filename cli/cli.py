# Function to handle CLI commands
def handle_cli_command(command):
    if command == "help":
        print("Available commands:")
        print(" - help: Display available commands")
        print(" - reboot: Reboot the emulator")
        print(" - flash <partition>: Flash firmware to specified partition")
        # Add more commands as needed
    elif command == "reboot":
        print("Rebooting emulator...")
        # Add code to reboot the emulator
    elif command.startswith("flash"):
        partition = command.split(" ")[1]
        print(f"Flashing firmware to partition: {partition}")
        # Add code to handle firmware flashing
    else:
        print("Invalid command. Type 'help' for a list of available commands.")

# Main CLI loop
while True:
    # Prompt user for input
    command = input("> ")

    # Handle command
    handle_cli_command(command)
