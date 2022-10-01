print('''
*******************************************************************************
          |                   |                  |                     |
 _________|________________.=""_;=.______________|_____________________|_______
|                   |  ,-"_,=""     `"=.|                  |
|___________________|__"=._o`"-._        `"=.______________|___________________
          |                `"=._o`"=._      _`"=._                     |
 _________|_____________________:=._o "=._."_.-="'"=.__________________|_______
|                   |    __.--" , ; `"=._o." ,-"""-._ ".   |
|___________________|_._"  ,. .` ` `` ,  `"-._"-._   ". '__|___________________
          |           |o`"=._` , "` `; .". ,  "-._"-._; ;              |
 _________|___________| ;`-.o`"=._; ." ` '`."\` . "-._ /_______________|_______
|                   | |o;    `"-.o`"=._``  '` " ,__.--o;   |
|___________________|_| ;     (#) `-.o `"=.`_.--"_o.-; ;___|___________________
____/______/______/___|o;._    "      `".o|o_.--"    ;o;____/______/______/____
/______/______/______/_"=._o--._        ; | ;        ; ;/______/______/______/_
____/______/______/______/__"=._o--._   ;o|o;     _._;o;____/______/______/____
/______/______/______/______/____"=._o._; | ;_.--"o.--"_/______/______/______/_
____/______/______/______/______/_____"=.o|o_.--""___/______/______/______/____
/______/______/______/______/______/______/______/______/______/______/_____ /
*******************************************************************************
''')
print("Welcome to Treasure Island.")
print("Your mission is to find the treasure.") 


print("You are standing on a crossroad")
turn = input("Where you want to turn? right or left?  ")

if turn == "right" :
  print("There is a river infront of you.")
  dec = input("Wait for a boat to carry accross or Swim by yourself? Wait or Swim?  ")
  if dec == "wait":
    print ("You have crossed the river. Now there are two boxes infront of you blue and green.")
    dec2 = input("Choose one. B or G?  ")
    if dec2 == "g":
      print ("Yayyy you found the treasure. Congrats! Party Chahiye!")
    else:
      print ("There was crying gas inside it")
      print ("You loose. Game over!") 
  else:
    print ("Oh no the alligator attacked :( ")
    print ("You loose. Game over!")
else:
  print ("There was a small hole at your left.")
  print ("You loose. Game over!")
