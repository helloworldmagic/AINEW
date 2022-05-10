from enum import IntEnum
from random import randint


class Temp(IntEnum):
    VeryCold = 1
    Cold = 2
    Warm = 3
    Hot = 4
    VeryHot = 5


class Command(IntEnum):
    Heat = 1
    Cool = 2
    NoChange = 3


def get_temp(value):
    if value <= 0:
        return Temp.VeryCold
    if 0 < value <= 10:
        return Temp.Cold
    if 10 < value <= 20:
        return Temp.Warm
    if 20 < value <= 30:
        return Temp.Hot
    if value > 30:
        return Temp.VeryHot


def inference(room_temp, target_temp):
    j, k = get_temp(room_temp), get_temp(target_temp)
    if j < k:
        return Command.Heat
    elif j > k:
        return Command.Cool
    elif j == k:
        return Command.NoChange


while True:
    room_temp = randint(0, 40)
    print(f"Room temp = {room_temp}C")
    target_temp = int(input("Enter target temp: "))
    print(f"AC mode = {inference(room_temp, target_temp).name}")
    print()
