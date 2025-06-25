# Task one : feature proposal

> As a junior Software Engineer on College Football game, come up with a new feature to add 
> First I'll learn what a feature proposal is and how to structure my own
> Then, I'll have to write one 

## Feature proposal
> Document that describes a new feature to add

Structure:
- **Title** : name of the feature
- **Overview** : brief description of your feature
- **Value Statement** : explanation of why it owuld be a good idea to add this feature to the game
- **Soution** : how th efeature would integrate with existing mechanics
- **Evolution statement** : a look at the pros and cons of adding this feature to the game. This includes a descriptin of the possible benefits and risks + addresses potention counterarguments to the proposal

here is an example

````text
Create a Receiving Minigame

Overview:

Iterations of College Football  already include a variety of minigames that help the player hone their skills and earn experience points. Adding a mini-game that focuses on receiving and paying attention to the details on the field will help drive player engagement and increase skill levels.

Explanation: Notice how the overview is concise and to the point. The goal here is to articulate your idea clearly without getting bogged down in the verbiage. This section represents the “what” of the idea.

Value Statement:

Adding such a minigame will teach our players the basics of receiving in College Football while also ensuring they are paying attention to small details on the field. By completing these minigames, players will also earn experience points that help them improve their player’s rating throughout their college career.

Explanation: here we’re trying to explain “why” it would be a good idea to implement the new feature.

Solution:

The player would control a receiver. Before the minigame begins, instructions will appear on the screen. There are 3 rounds, the first lasting for 30 seconds, the second for 20 seconds and the third is only 10 seconds long. A brief break will be given in between each round. When a round starts, the player must catch as many footballs as possible in the time allowed. Each blue football is worth 5 points, each yellow football is worth 2 points and each red football is worth -5 points. Players will need to identify and move their player into position for each football they want to catch. The pace at which the footballs come out will increase with each round, adding extra pressure to the player. Scores are cumulative and the player’s score at the end of the 3 rounds will determine how well they did. The existing materials system can easily be used to quickly and dynamically “color” each football in a random (or semi-random) order.

Explanation: This section includes the “how” of the idea - in what ways could existing game systems be extended to accommodate the new idea?

Evaluation Statement: 

Adding this minigame will help players work on their receiving skills as well as ensuring they are paying attention in high-pressure situations. The addition of a color-blind mode (enabled in the main menu) will ensure the mode is as accessible as possible. No new mechanics or functionality will be required for this minigame.

Explanation: This section gives you an opportunity to rebut any arguments you foresee against your idea. If the feature comes with caveats, or if there are points of contention that need to be addressed, this is the place to do it.
````

*my turn now*

1. Think about an interesting feature to add
List of game mechanics [here](https://www.thesimswiki.com/wiki/Category:Game_mechanics). *oops it 's a sims wiki'*

My idea
- From what I understand about this game, you have sevral modes like * Dynasty Mode* and *Road to Glory* so it's not only football games.
We could imagine another mode, like *Rising star* with a young player and its friends coming from poor neighborhoods, passionate about football. I believe it would resonate with many players.

- actually i have another idea which would be kinda like training the girls college football team.

# Task two : create an object class
> This time it's for the Sims
> I'm receiving a ticket and have to think of how to break the behaviour described in this ticket into a collection of objects, in that case, let's use a **Class Diagram

I already know what a class diagram is (it would be concerning to not know after a computer science master :skull:)

Let's take a look at the [SOLID](https://en.wikipedia.org/wiki/SOLID) principles for best practices.
````
SOLID is an acronyme for five design principles intended to make object-oriented designs more understandable, flexible and maintainabale
````
- **S**ingle responsibility principle : every class should have only one responsibility
    - maintainability
    - testability
    - flexibility
- **O**pen-closed principle : *software entities should be open for extension, but closed for modification*
     - extensibility
     - stability
     - flexibility
- **L**iskov substitution principle : functions that use pointers or references to base classes must be able to use objects  of derived classes without knowing it
     - polymorphism
     - reliability
     - predictability 
- **I**terface Segregation Principle : clients should not be forced to depend upon interfaces that they do not use
    - decoupling
    - flexibility 
    - avoids unnecessary dependencies
- **D**ependency inversion principle : states to depend upon abstractions
    - loose coupling
    - flexibility 
    - maintainability

Now, let's come up with a series of 5-15 objects that my proposal for the sims will have.
*i think they forgot to give the ticket but it's fine i'll write my proposal*

so in the sims there are always aliens  or creatures like death and gosths popping up for the fun, let's allow the players to create weird playable creatures. 

> Playable Creature
> **Overview** 
    > Curently in the Sims games there are always creature popping up like ghosts, aliens and even death. I'm proposing to allow the players to add playble creatures
> **Value statement**
> The Sims games are really addictive as they allow the players to build crazy houses, build relationships and even have children or kill other Sims. Often times they bring in some unexpected events like the ghost of a character appearing out of nowhere or an alien showing up and leaving, leaving the players frustrated and curious about it. This feature proposal would allow the players to gain even more freedom in the game by playing one of those characters.
> It would boost their creativity and and they would be able to do even more fun things in the game.
> Those characters would have custom actions like a ghost could fly and disapear,death could kill some sims following some rules.
> **Solution**
> It would be easy to integrate as when the player create their character they would choose an option like "alien", "death", "ghost" and even be able to dress them.
> **Evolution statement**
> - we'd have to find custom behaviours for all those characters 
> - make some rules regarding their caracteristics and behaviours like death should not be able to kill anyone.

![image](https://hackmd.io/_uploads/BJAq8M_Exe.png)

# Task 4 : ticket
> For this task we received a ticket stating that when an item is removed it's notactually removed from the inventory but the inventory's quantity is 0.

So, we have two classes, ``Inventory`` and ``Item``.
I made a class diagram that I'll add at the end. 
And tested our program.
1. Added an item : `name : cherries`, `quantity = 5`, `price = 2`
2. Listed the items  
````cpp
MENU
1. Add new item
2. Sell item
3. List items
4. Exit

Enter your choice: 3

Item name: cherries
Quantity: 5
Price: 2
````
3. Sold items
````cpp
MENU
1. Add new item
2. Sell item
3. List items
4. Exit

Enter your choice: 2

Enter item name: cherries

Enter number of items to sell: 3

Items sold
Money received: 6
````
4. Listed again to check whether the removal was properly done
````cpp
MENU
1. Add new item
2. Sell item
3. List items
4. Exit

Enter your choice: 3

Item name: cherries
Quantity: 2
Price: 2
````
5. Sold the rest of my items
````cpp
MENU
1. Add new item
2. Sell item
3. List items
4. Exit

Enter your choice: 2

Enter item name: cherries

Enter number of items to sell: 2

Items sold
Money received: 4
````
6. Listen one more time to check 
````cpp
MENU
1. Add new item
2. Sell item
3. List items
4. Exit

Enter your choice: 3

Item name: cherries
Quantity: 0
Price: 2
````
And here is the issue : we have 0 cherries so they shouldn't be part of the inventory anymore, this lies obviously in `remove_item()`.
There should be some kind of verification that the item's quantity is 0 after removal, in that case we should remove the item from the inventory.

So there are some issues here:
1. When an item's quantity reaches 0, the item_count isn't decreased.
2. Say we decrease the item_count, the problem is that the parsing is made according to this value.
So if I have three items and I sell the whole quantity of my first item and decrease item_count, then when listing my items I'd only see the first two, which includes the one i ran out of.

So instead of trying to fix that, because it's gonna be pretty ugly, I'll just add a vector, that would be perfect for this case.

What I'm going to do : 
1. Add a vector containg Items* in the inventory instead of a table of Items
2. To add an item I'll ``push_back()``
3. When selling items, parsing is made using an iterator (*i love iterators*)
Once the item is found `remove_item` is called passing the iterator so we can call ``erase`` in case the quantity is set to 0.
4. In ``remove_item()`` we check whether the quantity equals 0, in that case we decrease ``item_count`` and we `erase` that element.
Let's test that

````cpp
//4 items added

Item name: cherry
Quantity: 4
Price: 2

Item name: apple
Quantity: 8
Price: 3

Item name: kiwi
Quantity: 7
Price: 3

Item name: strawberry
Quantity: 9
Price: 3

//sold 3 cherries
Item name: cherry
Quantity: 1 //ok
Price: 2

Item name: apple
Quantity: 8
Price: 3

Item name: kiwi
Quantity: 7
Price: 3

Item name: strawberry
Quantity: 9
Price: 3

//Sold all the kiwis

Item name: cherry
Quantity: 1
Price: 2

Item name: apple
Quantity: 8
Price: 3

Item name: strawberry
Quantity: 9
Price: 3
//ok
````
perfect exactly what we wanted and it doesn't disrupt the rest

![image](https://hackmd.io/_uploads/rJyBKDt4ex.png)
