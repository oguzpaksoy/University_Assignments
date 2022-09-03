import random #for random number
import time   
while True: 
    x = random.randrange(1,7) #for 1st dice=>random number between one and six 
    y = random.randrange(1,7) #for 2nd dice=>random number between one and six
    if x != y: #If the value of the 1st dice and the 2nd dice are not the same, I want it to add up.
        print("Let's roll the dices!")
        time.sleep(1)  #i make it wait for 1 second before going to the next step
        print("Dice1:",x,"Dice2:",y)
        print("Dice1+Dice2=",x+y)
        break  #ending the loop
    elif x==y: #if the value of the first dice and the second dice are the same I start a second loop in elif
        print("Let's roll the dices!")
        time.sleep(1)
        print("Dice1:",x,"Dice2:",y,"\nThe same number came from both dice. You have to roll again.")
        time.sleep(1)
        print("Rolling again...")
        time.sleep(1)
        z = random.randrange(1,7) 
        k = random.randrange(1,7)
        if z != k:
               print("Dice3:",z,"Dice4:",k)
               print("Dice3+Dice4=",z+k)
               break
        elif z==k:
               print("Dice3:",z,"Dice4:",k)
               print("Same number rolled on both dice for the 2nd time...")
               time.sleep(1)
               print("Go to jail!")
               break
        break
