import random 
rock = '''
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
'''
paper = '''
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
'''

scissors = '''
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
'''
game_picturs = [rock,paper,scissors]
choice = int(input("What do you choose? Type 0 for Rock, 1 for Paper or 2 for Scissors."))
print(game_picturs[choice])
pc_choice= random.randint(0,2)
print("Computer Choice:")
print(game_picturs[pc_choice])
if choice >=3 or choice <0:
    print("You entered invalid numbers,you lose!!!")
elif choice == 0 and pc_choice == 2:
    print("You win!!")
elif choice == 0 and pc_choice == 1:
    print("You lose!!")
elif choice == 1 and pc_choice == 2:
    print("You lose!!")
elif choice == 1 and pc_choice == 0:
    print("Youn winn!!")
elif choice == 2 and pc_choice == 1:
    print("You Win !!")
elif choice == 2 and pc_choice == 0:
    print("You Lose!!")
elif choice == pc_choice:
    print("Başka bir şey seç kardeşim!!!!!!")