print("Welcome to Car Game (Enter 'Help' for Commands)")
command = ""
while command.lower() != "quit":
   command = input(">")
   if command.lower() == "help":
    print("""
Start - To Start the car 
Stop - To Stop the car
Quit - To Quit The Game""")
   elif command.lower() == "start":
    print("Car Has Started LETS GO....")
   elif command.lower() == "stop":
    print("Car Has Stopped....")
   else:
    print("Enter Correct Input")
else:
    print("Thanks For Playing This Game")