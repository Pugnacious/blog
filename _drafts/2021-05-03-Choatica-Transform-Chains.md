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

I'm going to start by giving it a starblur and set the value to 0.5.

[![Initial Transform](/assets/images/chaotica-transform-chains/screen_1413.png)](/assets/images/chaotica-transform-chains/screen_1413.png)
[![Initial Editor](/assets/images/chaotica-transform-chains/screen_1414.png)](/assets/images/chaotica-transform-chains/screen_1414.png)
