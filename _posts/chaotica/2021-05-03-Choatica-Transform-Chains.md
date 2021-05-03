---
layout: single
title:  "Chaotica: Transform Chains"
categories: fractal chaotica
permalink: "/chaotica/transform/chains"
author: "Pugnacious"
toc: true
toc_label: "Table of Contents"
excerpt: This tutorial will show you how to create a transform chain and what it does.
---

## What is a transform chain?

A transform chain is a series of transforms that get executed in top down order instead of the normal way.  I'm going to give some background here so everyone can be on the same page.  

### Normal Transform Behavior
A normal iterator has pre and post transforms as well as the normal transform nodes.  The normal behavior is to have your transform nodes and the transforms will kind of bounce around between all the iterators based on the weights.  This isn't exactly what happens, but it's the mental image that I choose to assign to how this process happens.  It will start with iterator 1 and the weight says how likely it is to bounce to the next iterator and so forth and so on.  You can use weights to control how the iterators interact, and even choose for two iterators not to interact with each other.  That however is another tutorial.  The scope of this one is to teach how pre and post transforms behave and how to use this to your advantage.

### Pre and Post Transform Behavior.

Pre and Post Transform nodes only effect the current iterator and not the rest of the world.  A Pre Transform will act on the iterator before it moves on and a Post Transform will act on it after it moves on.  To understand this, you need to understand the flow.  Lets say you have two iterators.  The first one will bounce to the second and then back over and over as long as they have normal weights.  If you apply a pre transform to the first iterator, it will execute it's change to the first iterator before anything else and then make the change from it's transform node.  The same applies to post transforms, but those will take place after the normal transform node is applied.  This is a confusing subject and that's ok.  The rest of this tutorial will be designed to demonstrate how this can be used and how you can take advantage of it.

## What we're going to create

This tutorial will show you how to create this type of image.

LINK

## Initial Setup

I'm going to start this tutorial in the normal way by opening up Chaotica and starting a new blank world.  Then I'm going to go to the World Editor and create my first Iterator.

At this point a good idea is to state your goal and keep that in mind, however as always the creative process might just work the opposite way.  Too often I find that I have no goal and one appears afterwards.  I will say that using this method needs some type of goal as you have to have an idea of what you're wanting the iterator to do beforehand.

I'm going to start by giving it a starblur and set the value to 0.5.

[![Initial Transform](/assets/images/chaotica-transform-chains/screen_1413.png)](/assets/images/chaotica-transform-chains/screen_1413.png)
[![Initial Editor](/assets/images/chaotica-transform-chains/screen_1414.png)](/assets/images/chaotica-transform-chains/screen_1414.png)

Now, let's say we want the starblur to tile to the left and right.  So, I'm going to enable the post transform on this iterator and add tile_hlp.

[![Tile_hlp](/assets/images/chaotica-transform-chains/screen_1415.png)](/assets/images/chaotica-transform-chains/screen_1415.png)

Next I'm going to add another post transform and add tile_log with all default values.

[![Tile_log](/assets/images/chaotica-transform-chains/screen_1416.png)](/assets/images/chaotica-transform-chains/screen_1416.png)

This will take a transform and make a tile both left and right of it.  Next, for the sake of showing how it works, lets make that tile go up and down too.

Start by adding another post transform.  This time Moebius.  Moebius will allow us to tweak things.  So now set Im_A to 1 and Im_D to -1.  That will flip it 90 degrees without changing it's size.

[![Moebius](/assets/images/chaotica-transform-chains/screen_1417.png)](/assets/images/chaotica-transform-chains/screen_1417.png)

Next add two more.  One tile_hlp and the next tile_log.  Feel free to add them out of order to see what will happen.  The entire benefit is that they are executed in a top down way.

[![Second Tile](/assets/images/chaotica-transform-chains/screen_1418.png)](/assets/images/chaotica-transform-chains/screen_1418.png)

## What does this mean?

So, now we ask ourselves, what does this tell us?  It tells us that we can take an interator, and then change how it looks before we hand it off to the next iterator.  This way we can precicely control how it looks before it interacts with other iterators.  

If you think about it, this is incredibly powerful and can be used for a LOT of different things.  Lets go back to the example and take away the last three transforms to get us back to the point where we had a single line of 
