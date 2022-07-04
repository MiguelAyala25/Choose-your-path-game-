/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cstdlib>


#include <stdio.h>
#include <stdlib.h>
using namespace std;

string escenarios[32];
int Caminos[32][3];

//\n\n
int escenario=0;
int escenarioAnterior=0;
int escenarioAnteAnterior=0;
string respuesta;

int main()
{

    escenarios[0] = "Your name is Rudeus and your homeland is Ionia, one full of magic and fascinating things to see. You're a raider which is just a fancy way of saying you collect treasures but most of the time you just collect crap that you think is valuable. You travel alone or at least not with a person; you have a small furry friend that follows you everywhere. His name is Gnar, you found him you found him when he was a baby and slowly, he became your best friend. \n\nAfter a day of looking for things with your partner, you decide that it is time to go home, and you take the usual road that passes through a valley full of corn crops. Everything was normal until you notice something strange, you find yourself with three massive stone towers on the side of the road, you had passed that road thousands of times, but you had never seen those structures. You were quite confused and lost in thoughts while thinking about what was going on when suddenly, you turn around and do not see Gnar near you, you call his name and look for him around, but you can't find him anywhere. As you continue searching you realize that he left a trail in the mud so you set out to follow it.\n\nThis trail, just as you suspected led you to the mysterious towers, but there is something strange, the trail splits at 3 and all 3 paths point to the entrances of the towers.\n\nYou take some time to meditate and look at the towers, the first one appears to have a spider engraved on the door frame, the second one has a skull and the third has the head of an ancient beast. You need to find your friend. He might be in danger and every second that passes can be decisive\n\nWhich tower should you enter first, enter A for the spider tower, B for the skull tower, or C for the beast tower?";
    escenarios[1] = "You decide to enter the spider tower since the other two did not give you much confidence and after all, what could a little spider do to you? in the worst case, it would bite you and that's it. When you enter the tower you realize that it is incredibly large inside and you hear a lot of noise in what seems to be a kitchen, also the footprints continue in the direction of a banquet hall, you are about to follow the trail, but at that moment you hear someone turn on a turntable in the next room. What do you decide to do? You can either follow the trail to the banquet hall, go to where the music is coming from and ask if anyone has seen your friend, or investigate the kitchen.\n\nIf you choose to go to the hall enter A, if you choose to go to where the music is coming from enter B, or if you choose to investigate the kitchen enter C";
    escenarios[2] = "The truth is that you don't like spiders very much and the tower of the beast did not generate much confidence in you, so you decide to enter the tower with the skull carved on the door. You approach to open the door and notice that the handle is made with a skull of some animal, probably a fox or wolf because of the shape of the jaw. Upon entering the tower there is nothing but a totally dark corridor.\n\nTo your surprise when you finish walking this corridor you find yourself in  a completely dark room so you can't determine the size of it, you snap your fingers and a small flame comes out of your hand, it doesn't illuminate too much, but it will help you while you leave that room.\n\nYou keep walking and you start to feel that the surface of the ground is changing slowly, you hear how your steps begin to crunch in the ground every time you step on. Suddenly you feel something that touches your leg and you decide to light it up, at that moment you realize that you are not stepping on any ground at all otherwise hundreds of human skeleton parts trying to grab you with their hands.\n\n You spot some stairs in the distance, with your magic boots you might be able to run there, you can try to climb the wall as it has quite a few cracks and someone of your complexion shouldn't have any problems climbing it or maybe would be a better idea to try a teleportation charm, it's not very reliable as it will take you to a random room in the building, but it surely will save you from the skeletons.\n\nEnter A to run to full speed towards the ladder, B to try to scale the wall that surrounds the room, or enter C to teleport.";
    escenarios[3] = "It seems logical to you that since your friend is a small furry beast, perhaps the tower with the engraved beast caught his attention, so you decide to go in. You enter the tower and find that the interior is enormous, there is a forest full of trees and plants that you have never seen in your adventures. Further, in the distance, you can see what seems to be a small farm which has to be inhabited since it is not in very good condition, and lastly there is a maze of bushes that seems to lead to an important place.\n\nYou start to think about your options to make a decision, you can go into the forest, let's not forget that you met your friend in one of them, surely it is his natural habitat and he might be there, you could try going to the farm you saw and search for your friend or you could try to explore the maze, there is always the possibility that he has gotten into there.\n\nIf you decide to go into the forest enter A, Enter B if you want to go to the farm, or enter C if you venture into a mysterious labyrinth ";
    escenarios[4] = "You think that the most reasonable thing is to follow the trail and you enter the banquet hall that is in complete darkness when you enter you see that the table is served with exquisite food, you have been walking for a long time and you are hungry that you are not able to resist the temptation you sit on a chair, you eat a steak, and drink some water, you are about to stand up but you can't, you realize that you are glued to the chair with a super sticky spider web at that moment you see a gigantic tarantula that is coming down from the ceiling and is getting ready to eat you. You think of a plan as fast as you can, it seems like a good idea to use your magic to start some fire and blind the spider or you can try to stay still and maybe the spider won't notice you in the dark.\n\nIf you decide to stay still enter A or If you decide to blind the spider with your magic press B";
    escenarios[5] = "You decide to go to the room where the music is coming from to ask whoever is inside if they have seen Gnar. The door is open and you enter. As you enter the room you see an old lady knitting what appears to be a sweater, you apologize for entering without knocking on the door and you explain to her your situation. She tells you that she knows where your friend is but that you have to do her a favor first. You tell her that you don't have time and that you are worried about your friend, at that moment the voice of the old woman gets deeper and says to you, Won't you help this poor widow? At that moment some legs grow from her back and some fangs come out of her mouth. At that moment you realize she is not an old lady, it's a black widow.\n\nYou can try to shoot her down with a magical flash, stun her and go out by the window, it's a long fall but  it's better than being eaten, or you can try shooting a fireball at her and run to the door.\n\n enter to A of her to take her down and jump out the window or enter B of her to attack her and run to the door ";
    escenarios[6] = "You are curious about the noises coming from the kitchen and you go into it, it is quite large and has many cooking utensils. You keep going through it, you find a big door, you touch the extremely cold knob, you look through the small window of the door and you see what seems to be some meat, you can't distinguish because the glass is fogged by the cold, you continue walking and you see that there is a kind of tunnel that goes down, they probably use it to throw the garbage. You just hope that Gnar hasn't gotten in there because it smells rally bad and gives a really negative feeling.\n\nGnar is  a glutton and maybe he went into the fridge to get something to eat so he might be in there, but on the other hand it makes more sense that he went to the garbage tunnel because he can't open the refrigerator door with its tiny claws.\n\nIf you decide to open the refrigerator enter A or if you decide to jump down the tunnel press B ";
    escenarios[7] = "Your old magical boots have saved your skin countless times so you play it safe and run as hundreds of hands try to drag you to the bottom of that pile of skeletons. You make it to the stairs in one piece and throw back a bony hand that had somehow managed to hang from your pants.\n\nYou climb the ladder and notice that the railing is made of femurs from some large beast, you hurry up as you fear that something weird happens with those bones again. At the end of the stairs, there is a very large corridor with many rooms, you go through the corridor trying to find some clue about the whereabouts of your friend. You open the doors one by one, usually, the doors lead to empty rooms with skeletons inside them, which adopt strange positions, you can almost feel the skeletons moving in there and when you open the door they stay still.\n\nWhile you kept opening doors you hear a very loud sound coming from behind you, suddenly this sound gets louder you hear it clearly and you instantly recognize it it's the sound of a mob of angry people running at you like this though in this case, they are not people (at least alive). There are only two rooms near you and you need to hide quickly, when you checked the rooms in the first room you saw a wooden room with circular windows, you only remember that it had a strong smell of salt. You were about to check the second room, so you have no idea it's inside.\n\nEnter A to enter the wooden room or B to enter the room without checking ";
    escenarios[8] = "You decide that teleporting is quite risky and you don't know if you will be able to reach the ladder in time so you quickly start climbing the wall. You have already climbed several meters when you reach an edge that leads to what appears to be a cavern or cave. you keep going into it since you have nowhere to go until you start to see a light at the end of the road so you decide to go investigate. As you get closer the temperature starts to rise and you hear very loud roars, you have not reached this point to cower and turn back so you keep going straight to the light. Bad idea, you peek a little to see where that light is coming from and you see a giant skeleton with bird wings and it shoots a jet of fire at you, luckily you have good reflexes and you manage to dodge it. It's a skeleton dragon and you just invaded its lair. You're in serious trouble.\n\nYou turn around looking for a way out and see a fisure in the wall where you probably can go through, also there is a small ravine where you can drop since it is not very tall.\n\nIf you decide to enter the fisure in the wall enter A or if you decide to jump in the ravine enter B.";
    escenarios[9] = "You calm down and concentrate to use your energy to make use of the teleportation spell. You close your eyes and repeat the spell that your master taught you, you feel a spark of energy running through your body and make it disappear. After a few seconds, You open your eyes again, you are in a small cave and you hear someone snoring really loud, you examine your surroundings and you realize that there are giant teeth, each one your size, around the exit of the cave. You are in the mouth of a giant skeleton. You quickly get out of his mouth and use his ribs as a ladder to go down slowly, trying to not make any noise that could wake up the giant, you manage to get down and hear how something comes running quickly towards you, it's Gnar!!!! your little friend, but he really didn't come at a good time since all the fuss he caused woke up the giant skeleton, which is slowly standing up with clear intentions to catch those who disturbed his rest o.\n\n You can take your friend and try to teleport one more time but even if but is really risky, even if you manage to gather the energy to do it you will lose consciousness for a few minutes, and who knows what could happen in that time, or you can face the giant and try to knock him down so you can escape with your friend.\n\nIf you decide to teleport once again enter A or if you decide to fight enter B ";
    escenarios[10] = "You decided to go into the forest to investigate since Gnar has always shown a great fascination for trees and vegetation. There is a path that seems to go through the forest, so you decide to follow it to see where it goes. As you walk along the path you notice how the trees, they are getting taller and thicker. You can hardly see the sunlight anymore and you feel as if someone is watching you so speed up the pace. But you realize that the more you run the forest becomes denser. Suddenly you hear a voice shouting for help, not far from your location so you get ready to go help, but when you turn back you notice that the trees are not ordinary because when are not watching they advance and extend their branches to try to catch you.\n\ nYou can try to run towards the voice to see if you can help or you can leave whoever is screaming to their fate to try and get out of the forest and continue your quest.\n\nEnter A to try to help the person or enter B to run and try to escape from the forest";
    escenarios[11] = "You decide to go to the farm that is at the foot of the hill to investigate, as you walk towards it you notice that the farm seems to be uninhabited and you are surprised not to see any animals there, you suppose that it is abandoned. You are ready to enter and see if there are any clues inside the building as to the whereabouts of your friend. You try to open the door and just as you do a gigantic slimy tongue comes out of the door and pulls you into the house. Once inside you see that the walls are made of meat and there are gastric juices everywhere, there are also skeletons of many animals and other beasts that you don't can not recognize. You realize that the farm is a sort of monster that swallows everything that comes within its reach.\n\ nYou need to get out of there, otherwise, you will be dissolved by the Monster-Farm's gastric juices. You can try to create a mana sword with your magic and make a hole in the monster's skin to get out or you can try to make a fire inside the animal so that it opens its mouth because of the smoke and you can escape.\n\nEnter A to create a sword and break a wall or B to make a fire and try to escape.";
    escenarios[12] = "You decide to go to the bush maze because it is the place that was closest to the entrance and you think it makes the most sense to search the entire tower before leaving it. Once there are two possible paths to follow, one is through the maze itself or another that surrounds the maze and goes through a swamp and possibly leads to the same place. .\n\nYou can follow the safer path through the maze or you can go through the swamp to not lose so much time. \n\nEnter A to go through the maze or B to go around the swamp.";
    escenarios[13] = "You decide to stay still and hope the spider doesn't find you, it approaches you, opens its huge mouth, and preaches to you for eating its banquet, it gets a little annoyed with you, but to your surprise, it doesn't eat you. You are stunned by what has just happened and decide to ask her if she has seen your friend, she replies that she saw him speeding through the room and then lost sight of him. You thank the spider for not eating you and continue into the tower in the hope of finding Gnar. \n\nEnd of the story press A to go to the menu .";
    escenarios[14] = "You can't stay still, you have to do something, you quickly snap your fingers and a flame comes out of your fingers, you aim at the spider and throw a fireball at its head, it seems that you hurt it because it makes a screeching sound, but it's not enough, it pounces on you and wraps you in its stikcy web, once wrapped you feel how it hangs you from the ceiling with a thread. You manage to open a hole in the cocoon and see thousands of baby spiders around you trying to break the cocoon. It seems that here your adventures are over, you only hope that Gnar does not have a similar fate to yours. \n\nEnd of the story press A to go to the menu .";
    escenarios[15] = "You don't know if it will work, but you decide to strike it down with the magic flash you learned in your village to ward off monsters. You cover your eyes with your hands, snap your fingers and a bright light comes out of them. The widow starts screaming and moving madly, you know it worked but it won't last forever, you gather your courage and jump out the window. You lose consciousness for a few hours until a few licks wake you up, it's your friend Gnar, it seems he found you while you were passed out. You are glad to see your friend and give him a piece of bread you had. It seems you have a broken arm, but it's nothing serious so you run out of that place and get ready to go back home. \n\nEnd of the story press A to go to the menu. ";
    escenarios[16] = "The truth is that your fear of heights surpasses that of spiders so you set out to fight her with your fireballs, you snap your fingers and generate a small round ball, aim and shoot at a chandelier that was above the room, and it falls on top of the widow and begins to burn. This gave you the time you needed to run out of the room. When you leave the room you look out a window of the tower and you see it, there is a small and hairy being running a butterfly outside the tower. Ultimately, it is Gnar so you run out in a hurry and hope that it is still out there by the time you have been able to get out of the tower. \n\nEnd of the story press A to go to the menu .";
    escenarios[17] = "You think you'd better check the refrigerator before going down the tunnel, you open the door and go inside. It's too cold, hard to breathe and your hands are numb. While you were looking for Gnar, sudently de door closed and you can not open it from inside so you look for another way out, while you go deeper into the huge refrigerator and you find several human bodies hanging and wrapped in silk as if they were pigs, you panic and run desperately trying to get out, but it is useless. You can only wait for the cold to consume you or that the butcher enters and you suffer the same fate as the people who are hanging. \n\nEnd of the story press A to go to the menu .";
    escenarios[18] = "You forget about the refrigerator for now, and you go down the tunnel as if it were a slide, you go down at full speed and the smell gets worse and worse. You fall into a pile of garbage, there's everything, leftover food, napkins, broken utensils and rotting meat. You don't see your friend anywhere. Suddenly you hear a lot of footsteps in the kitchen and you start to smell burning. It seems that you got into the garbage incinerator, you try to climb up the tunnel, but it is useless because it is covered with food and leftovers that make it very slippery and impossible to climb. It starts to get very hot and you scream with all your strength so that whoever is in the kitchen turn off the appliance, but it seems they have not heard you. \n\nEnd of the story press A to go to the menu .";
    escenarios[19] = "You don't feel like entering a room without knowing what's inside is a good idea, so you decide to enter the wooden room. Once inside, you close the door quickly and listen to the footsteps passing. You don't think it's safe to leave yet, so you start exploring the room, you look out the window and it doesn't take you long to realize that you're not really in a room, you're in what appears to be a wooden boat and you're surrounded by water. Your journey has been strange enough, but this is by far the strangest thing about it. As you wonder how the hell they managed to get a ship and ocean water into a tower, you notice a skeleton dressed as a pirate sitting on the bow. You approach for a closer look and it's on top of a huge treasure chest, big enough to fit several people. Your curiosity is too great and you decide to open the chest and take a look to see what's inside. You go to see the contents, but you can't see anything, it seems to be bottomless and really dark. Suddenly you feel a bony hand that pushes you inside the chest. You start to fall from a great height, you feel the wind pass over your face and you just wait for the fall to end. But unfortunately for you, it doesn't end and it doesn't seem to have any end, you've been falling down that hole for several hours or maybe even days. You are hungry and thirsty, your clothes have begun to rip because of the wind and it is starting to cause wounds on your skin. You feel an immense desperation and you just want it to end, but you know it won't end if you don't decide to put an end to it. \n\nEnd of the story press A to go to the menu .";
    escenarios[20] = "The smell of salt in the wooden room could be sulfur or something dangerous so you bet on the room you hadn't checked. Once inside you find yourself in a sort of medieval-style stone dungeon you continue walking around the room and start to hear the characteristic sound that swords make when they are clashing together. Something tells you that you should go take a look. The sound comes from behind a door, you gather your courage and open it. Behind this door you see a knight lying on the ground fighting a horde of skeletons, you could actually walk away and leave him to his fate, but those things don't go with you. There is a cliff and you think you can use it to your advantage. You throw a fireball at the skeletons to get their attention and make them chase you. You get ready to execute your plan, you run quickly towards the cliff and nimbly stop and turn to avoid falling. With this risky maneuver, you manage to knock down the skeletons and run to help the knight. You help him up and thank him. This knight name is Arturia of Demacía. She tells you that she is the honorary knight of that kingdom and that she had been sent to investigate the mysterious towers to find the reason for their appearance. She thanks you again and tells you that she will reward you for your help, but you tell her that now you do not need any reward, what you need is to find your friend Gnar, after this Arturia proposes that you accompany her while exploring the towers so you may have more chances to find your friend, you gladly accept and both continue your search in the towers. \n\nEnd of the story press A to go to the menu .";
    escenarios[21] = "You hurry and enter into the fisure of the wall. The dragon rushes out trying to reach you, but he cannot see you since you are inside the fisure, but it seems that you forgot a very important detail, dragons have an excellent sense of smell and this one had already learned your smell at the moment you entered its lair. Slowly the dragon starts to sniff and geting closer and closer to where you are. You decide to teleport yourself away from the danger and do it successfully before the dragon found your hiding place. Now you are in a very cold place, you see a door but it is closed and apparently cannot be opened from the inside so you get ready to look for another exit. \n\nEnd of the story press A to go to the menu .";
    escenarios[22] = "You don't think the dragon will be stupid enough not to find you if you hide , so you throw yourself down the small ravine, you take several hits, roll, scrape your knees, fall hard and get a bit dazed, it seems you hit your head and start to get dizzy. You find yourself lying on the ground. You turn around and find next to you the corpse of a knight who has been pierced by a sword and several skeletons slowly surrounding you as they laugh maliciously and are amused to see your futile attempts to stand up and escape. \n\nEnd of the story press A to go to the menu .";
    escenarios[23] = "You don't think you have any chance against the giant so you trust your good luck, take your friend in your arms, close your eyes and repeat the spell one last time. After a few minutes you wake up  with your friend who was waiting for you. You rub his head and check that he is not hurt, apparently you had the good-bad luck to fall on the roof of the tower so you are free of danger, but now you have no idea how to get down. Suddenly Gnar beckons you to look down and you see that there is a lake, it looks pretty deep, you both jump into the water and manage to get out in one piece. As you come out of the water look back and see that the towers have completely disappeared and now there is no trace of them. \n\nEnd of the story press A to go to the menu .";
    escenarios[24] = "You decide that you can't risk of teleporting to another dangerous place and prepare to fight, then you take a dragon scale rope out of your backpack and throw one end to Gnar, after so many years of being friends he understands perfectly what you are about to do. He catches the rope with his snout and runs along with you at full speed. You take advantage of the fact that the giant is super slow to get closer and wrap the rope around his masive feet. Once he begins to lose his balance, you take the opportunity to run out of there and get ready to go to the next room of the tower.  \n\nEnd of the story press A to go to the menu .";
    escenarios[25] = "You decide that you have to help the person who is screaming, so you run quickly towards the regardless of the dangers of the forest. It becomes more and more difficult to see because of the excessive number of plants, but you are getting closer to the call for help. Suddenly you see the person who was screaming lying on the ground, he seems to be badly injured but no longer makes any sound. You slowly approach to check on him. As you get closer you notice that the person is completely decomposed, it looks like he has been dead for at least a few weeks, and you notice how thick roots are sprouting from his eyes, mouth, and nose. Suddenly the roots immobilize you and begin to climb up your body and try to sneak inside you. As you agonize and struggle to try to escape, you see a huge mouth burst out of the ground and swallow the dead body that made you fall into the trap. You faint for some time and wake up in the same place where that body was, you try to move, and you cannot. Involuntarily you start to scream for help, you try to keep quiet so as not to lure anyone into the trap, but you can't, apparently, the plant has managed to hold you and control you, somehow you know that the same fate awaits you like the previous body.  \n\nEnd of the story press A to go to the menu .";
    escenarios[26] = "You think the voice you heard is too suspicious and it could be a trap so you give priority to your safety since dead you won't be able to find your friend so you start running as fast as you can. You feel the branches trying to catch you, but you decide not to look back and keep going. You manage to get out of the forest and find yourself in a small clearing where there is nothing but a small fountain, you go to get some water and refresh yourself, but just as you start to drink a nymph spring out of the water and stares at you, after a few seconds she greets you and you greet her back. You begin to talk to her and tell her that you went into the tower looking for your friend. The nymph tells you that this is a very dangerous place since the three towers were built by a monster hunter to lockdown the most dangeous beast from the kingdom. She gives you a map of the towers and a bag with different potions that can help you in your quest. She wishes you luck and asks you to visit her again. She seemed nice but once you find your friend you will never set foot in the towers again. \n\nEnd of the story press A to go to the menu .";
    escenarios[27] = "You decide to use your knowledge of alchemy and magical smithing to be able to synthesize a mana sword with your energy. You take a rib from a skeleton of what used to be a cow and transmute your mana directly into the bone while imagining a sword. You finish the process of transmutation and manage to create your weapon, you are exhausted by so much effort, but you do not care, all you want is to get out of that stinking place. You take the sword with both hands and lashes a blow with all your strength to try to break the wall, but this begins to absorb your sword and your hand with it. Slowly you are being absorbed by the wall of flesh without being able to do anything to save yourself. \n\nEnd of the story press A to go to the menu .";
    escenarios[28] = "You snap your fingers and create a big flame of fire in your hand and look all over the inside of your stomach for something to burn, you find some leather, some pieces of wood, and other inflammable things. You put them together and start burning them, take off your jacket and start blowing and feeding the fire. A big cloud of smoke starts to come out of the pile of things you have burned, and you notice how the monster starts to sneeze. You stand next to the mouth door and wait for it to sneeze again to jump out and so you do. The monster sneezes and you get out of there. You realize you have spent a long time inside the monster as the sun has already set and you can see the stars in the artificial sky of the giant tower. You look for a place to sleep and decide to continue your quest the next day, no doubt it was a pretty hard day. \n\nEnd of the story press A to go to the menu .";
    escenarios[29] = "You decide to go to the bush maze because it is the place that was closest to the entrance and you think the wisest thing to do is to search the whole tower before leaving it so you enter the maze. At first, the bushes were quite small and you could see over them so you had no problem seeing the way, but as you advance they became more lush and tall, you had to turn around several times to find the exit, but in the end, you succeed, when you get out you find a beautiful garden full of flowers and plants of all kinds. There is also a small lake and a quiosco in the middle. While admiring the landscape, a creature pounces on you and throws you to the ground. You turn quickly and get ready to fight when you get a huge surprise when you realize that it is your faithful and furry companion Gnar, but he is not alone apparently found more friends of his specie and have formed a group of herd of furry beasts. You are happy for him ,and knowing that he is safe and not alone, you get ready to leave the tower, but when you turn back you find  a line of several furry friends following you as if you were their leader. I guess now you will go from being an adventurer to a furry beast babysitter. \n\nEnd of the story press A to go to the menu .";
    escenarios[30] = "You're not in the mood to get lost in a maze, you go around the swamp path to avoid complications. You go along the swamp road, but there comes a point where it ends and you reach a kind of dock with a canoe and paddles that can be used to cross the swamp. You get into the canoe and start paddling to cross, but the water is very thick and you feel how the paddles get stuck with the contact of the water, but you don't care and keep paddling as hard as you can to get out of that place. As you paddle you feel how the canoe gets heavier and heavier and paddling is very difficult. Suddenly you feel how the canoe starts to be dragged backwards. When you turn around you see several tentacles pulling on your canoe. You struggle to keep paddling, but the strength of the tentacles is amazing and they manage to overturn the canoe. You swim at full speed to the shore hoping that the beast will entertain itself with your canoe while you escape. You seem to be about to reach the shore, but a tentacle grabs you by the leg and drags you into the depths of the water. The beast continues dragring you to the bottom and suddenly you fall through a tunnel, but there is no water anywhere. It was a great fall, you look down and see thousand skeleton hands trying to grab you. \n\nEnd of the story press A to go to the menu .";
    escenarios[31] = "The end";
    //escenario 0
    Caminos[0][0] = 1;
    Caminos[0][1] = 2;
    Caminos[0][2] = 3;
    //escenario 1
    Caminos[1][0]=4;
    Caminos[1][1]=5;
    Caminos[1][2]=6;
    //escenario 2                
    Caminos[2][0]=7;
    Caminos[2][1]=8;
    Caminos[2][2]=9;
    //escenario 3
    Caminos[3][0]=10;
    Caminos[3][1]=11;
    Caminos[3][2]=12;
    //escenario 4
    Caminos[4][0]=13;
    Caminos[4][1]=14;
    Caminos[4][2]=4;
    //escenario 5
    Caminos[5][0]=15;
    Caminos[5][1]=16;
    Caminos[5][2]=5;
    //escenario 6
    Caminos[6][0]=17;
    Caminos[6][1]=18;
    Caminos[6][2]=6;
    //escenario 7
    Caminos[7][0]=19;
    Caminos[7][1]=20;
    Caminos[7][2]=7;
    //escenario 8
    Caminos[8][0]=21;
    Caminos[8][1]=22;
    Caminos[8][2]=8;
    //escenario 9 
    Caminos[9][0]=23;
    Caminos[9][1]=24;
    Caminos[9][2]=9;
    //escenario 10
    Caminos[10][0]=25;
    Caminos[10][1]=26;
    Caminos[10][2]=10;
    //escenario 11
    Caminos[11][0]=27;
    Caminos[11][1]=28;
    Caminos[11][2]=11;
    //escenario 12
    Caminos[12][0]=29;
    Caminos[12][1]=30;
    Caminos[12][2]=12;
    //escenario 13
    Caminos[13][0]=31;
    Caminos[13][1]=31;
    Caminos[13][2]=31;
    //escenario 14
    Caminos[14][0]=31;
    Caminos[14][1]=31;
    Caminos[14][2]=31;
    //escenario 15
    Caminos[15][0]=31;
    Caminos[15][1]=31;
    Caminos[15][2]=31;
    //escenario 16
    Caminos[16][0]=31;
    Caminos[16][1]=31;
    Caminos[16][2]=31;
    //escenario 17
    Caminos[17][0]=31;
    Caminos[17][1]=31;
    Caminos[17][2]=31;
    //escenario 18
    Caminos[18][0]=31;
    Caminos[18][1]=31;
    Caminos[18][2]=31;
    //escenario 19
    Caminos[19][0]=31;
    Caminos[19][1]=31;
    Caminos[19][2]=31;
    //escenario 20
    Caminos[20][0]=31;
    Caminos[20][1]=31;
    Caminos[20][2]=31;
    //escenario 21
    Caminos[21][0]=31;
    Caminos[21][1]=31;
    Caminos[21][2]=31;
    //escenario 22
    Caminos[22][0]=31;
    Caminos[22][1]=31;
    Caminos[22][2]=31;
    //escenario 23
    Caminos[23][0]=31;
    Caminos[23][1]=31;
    Caminos[23][2]=31;
    //escenario 24
    Caminos[24][0]=31;
    Caminos[24][1]=31;
    Caminos[24][2]=31;
    //escenario 25
    Caminos[25][0]=31;
    Caminos[25][1]=31;
    Caminos[25][2]=31;
    //escenario 26
    Caminos[26][0]=31;
    Caminos[26][1]=31;
    Caminos[26][2]=31;
    //escenario 27
    Caminos[27][0]=31;
    Caminos[27][1]=31;
    Caminos[27][2]=31;
    //escenario 28
    Caminos[28][0]=31;
    Caminos[28][1]=31;
    Caminos[28][2]=31;
    //escenario 29
    Caminos[29][0]=31;
    Caminos[29][1]=31;
    Caminos[29][2]=31;
    //escenario 30
    Caminos[30][0]=31;
    Caminos[30][1]=31;
    Caminos[30][2]=31;
    //escenario 31
    Caminos[31][0]=32;
    Caminos[31][1]=32;
    Caminos[31][2]=32;
    
    

    
    
    
    
    
    
     while (escenario<=31)
    {
        system("clear");
        
        cout << endl;
        cout << escenarios[escenario] << endl;
        cin >> respuesta;
        
        if(respuesta=="a"|| respuesta== "A")
        {
            escenarioAnteAnterior=escenarioAnterior;
            escenarioAnterior=escenario;
            escenario=Caminos[escenario][0];
            
        }
         else if(respuesta=="b"|| respuesta== "B")
        {
            escenarioAnteAnterior=escenarioAnterior;
            escenarioAnterior=escenario;
            escenario=Caminos[escenario][1];
        }
         else if(respuesta=="c"|| respuesta== "C")
        {
            escenarioAnteAnterior=escenarioAnterior;
            escenarioAnterior=escenario;
            escenario=Caminos[escenario][2];
        }
        else
        {
            cout << "invalid option";
        }
        
         if (escenario>=31)
        {
        system("cls");
        
        cout << endl;
        cout << "End of game, enter A to restart the game, B to end the game or C to return to a save point." << endl;
        cin >> respuesta;
        if(respuesta=="a"|| respuesta== "A")
        {
            escenario=0;
        }
         else if(respuesta=="b"|| respuesta== "B")
        {
            escenario=32;
        }
        else if(respuesta=="c"|| respuesta== "C")
        {
             cout << "Which scenario do you want to return to, enter A to go to the previous one or enter B to go to the previous-previous one?" << endl;
             cin >> respuesta;
            if(respuesta=="a"|| respuesta== "A")
            {
                escenario=escenarioAnterior;
            }
            if(respuesta=="b"|| respuesta== "B")
            {
                escenario=escenarioAnteAnterior;
            }
         else
        {
            cout << "invalid option";
        }
        }
        
        
        
    }
    
}
    
    
    
    
    // Guardar las escenas

 
    //std::cout << escenarios[1] << "\n";
    

 
}













