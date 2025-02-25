---
layout: single
title: "Chaotica: Weights"
categories: fractal chaotica
permalink: /chaotica/weights
author: Pugnacious
toc: true
toc_label: Table of Contents
excerpt: This is a tutorial on the concept of weights in chaotica.
---

# Introduction

Welcome to the weighty world of weights in your favorite fractal software.  In this tutorial we're going to cover the basics of weights, what they are and how to configure them.  We'll leave the advanced stuff for a future tutorial.  If you want to see it, keep reminding me until I sit down and actually write it all out.  I mean it.  Don't be afraid to reach out.  I'm always happy to answer questions.

# Credits

The original ideas are kicking around in various tutorials and blogs. In this tutorial, I'm distilling my own thoughts and ideas down into something that can be used as a framework to get you pointed in the right direction. A big thanks also goes out to the community as a whole. Thanks ladies and gentlemen!

> _If I have seen further than others, it is by standing upon the shoulders of giants. - Isaac Newton_

## Knowledge Check

If you haven't read through the other tutorials, you'll need concepts from most of them.  I suggest going back and reading through most of the basics and some of the intermediate tutorials before tackling this one. You'll definitely need to understand the basic concepts behind Transform Chains. LINK: [Tutorials][tutorial-link]

# What are weights?

Weights are at their heart, the amount that an iterator expresses itself.  That's a vast simplification, but we're starting from the basics here and you need a framework to learn from.  Think about it like this.  An iterator has a weight.  If that weight is set lower less of that iterator will be expressed.  If it's higher, more will be expressed.  Think about this as a system.  It's not like turning an opacity value on and off to make something more or less transparent.  If you go all the way back to that chaos math example from one of the beginning tutorials, it talks about setting the rules.  Weights are how you bend the rules a bit more for special cases or define them in some cases.  Read on and hopefully you'll get an idea of what I'm talking about.

# Using Weights to turn on and off iterators.

The simplest form of weights is turning iterators on and off.  First, look at the weights settings under the weights node for the iterator. 

[![Weights Properties](/assets/images/chaotica-weights/where_to_find_it.png)](/assets/images/chaotica-weights/where_to_find_it.png)

If you look at it, you'll notice a few different things.  First is the node type.  This is where to look for weights.  The second thing you notice is the Base weight and the Iterator 1 when you select it.  The base weight controls the iterator itself.  That tells the software how much or little the iterator will be expressed.  Lets use an example.

First take setup a square transform in your iterator.

[![Square](/assets/images/chaotica-weights/square1.png)](/assets/images/chaotica-weights/square1.png)
[![Square Properties](/assets/images/chaotica-weights/square2.png)](/assets/images/chaotica-weights/square2.png)

Next, change the base weight to 0.  Your square now looks like this.

[![New Square](/assets/images/chaotica-weights/square1.png)](/assets/images/chaotica-weights/square1.png)

Did you expect something to happen?  Think about why nothing did.  The iterator expresses exactly the same as it did before because the ratio of expression is identical to what it was before.  There was only one iterator and thus it's always going to express the same amount.  changing the ratio of expression does nothing unless you have something else to base it against.  

Go ahead and flip that value back to 1.  Then add a second iterator.  Lets make it a circleblur.  This example will be easier using something that creates points instead of translates or changes them.  Your view should now look like this.

[![Circle Square](/assets/images/chaotica-weights/circle_square.png)](/assets/images/chaotica-weights/circle_square.png)
[![Circle Square Properties](/assets/images/chaotica-weights/circle_square1.png)](/assets/images/chaotica-weights/circle_square1.png)

Now go back to the first iterator and change the weight to zero.  You get this.

[![Circle](/assets/images/chaotica-weights/circle.png)](/assets/images/chaotica-weights/circle.png)

## What just happened?

The ratio of expression between the two iterators shifted.  Now one of them weighs nothing and the other weighs everything.  You told the software to control how much of each one to express.  Now we're going to use the knowledge and expand on it.  The first thing you might think about trying is to use a value other than 1 or 0.  That's exactly what we're going to do.  In the previous example, change the weight on the square to 0.5 and see what happens.  I'm not going to post a photo, because I'm hoping you're trying this out yourself.  Experiment a little.  Break things.  Then fix them again.  Try a value that's more than 1.  How about 50?  Go for it.  Watch how the expression changes based on the weight.  Now that you've had your fun, lets move on to the other values.  The iterator weights.

# Weights to control iterators

# Using weights instead of transform chains

## What are the different methods?

### Differences and Benefits.

[tutorial-link]: https://www.pugnacious.site/tutorials
