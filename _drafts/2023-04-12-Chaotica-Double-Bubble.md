---
layout: single
title:  "Chaotica: Double Bubble"
categories: fractal chaotica
permalink: "/chaotica/double/bubble"
author: "technochroma"
toc: true
toc_label: "Table of Contents"
excerpt: This tutorial will show you how to create a double bubble form with chaotica.
---

## Chaotica: Double Bubble
or, bubble-hemisphere half-plane

## Basic Theory: Double Bubble

Double Bubble is a halfplane technique.
The theory behind the halfplane is, 
you have two half-planes containing some kind of pattern.
Each is shifted so they essentially mirror the other.

You can have lots of different patterns and textures.
For now we focus on a hemisphere-curl texture in this tutorial.

These two planes are connected by a container transform, Transform 5.
Transform 5 mirrors the planes.

Iterator 1+3=your left plane.
Iterator 1=hemisphere fill.
Iterator 3=curl. Fill direction and texturing.

Iterator 2 and 4 is your right plane.
Iterator 2=hemisphere fill.
Iterator 4=curl. Fill direction and texturing.

(Suggestion: add flowchart for xaos) 

## Credits

site: technochroma, PugnaciousOne
piethein21, tatasz

> *If I have seen further than others, it is by standing upon the shoulders of giants.  - Isaac Newton*

To make it easier to see what we are doing, we will use pre_blur on the hemispheres. This is just in the beginning. Later we will remove it.

## Iterator 1
Add a new iterator.

transform:
    hemisphere=1

pre-transform:
    pre-blur=1

Shader:
    Palette location=0
    Blend speed=0
    Opacity=0

Weights: 
    Iterator 1=0
    Iterator 2=0
    Iterator 3=1
    Iterator 4=0
    Iterator 5=0

## Iterator 2
Add a new iterator.

transform:
    hemisphere=1

pre-transform:
    pre-blur=1

Shader:
    Palette location=0
    Blend speed=0
    Opacity=0

Weights: 
    Iterator 1=0
    Iterator 2=0
    Iterator 3=0
    Iterator 4=1
    Iterator 5=0

## Iterator 3 (shared linked w Iterator 1)
Add a new iterator.

transform:
    curl=1, 

variable:
    c1=0.5

Pre Affine: 
    move 1 unit to the left.

Weights: 
    Iterator 1=0
    Iterator 2=0
    Iterator 3=0
    Iterator 4=0
    Iterator 5=1

Shader:
    Palette location=0
    Blend speed=0
    Opacity=0

## Iterator 4 (shared linked w Iterator 2)
Add a new iterator.

transform:
    curl=1, 

variable:
    c1= -0.5

Pre Affine:
    move 1 unit to the right.

Weights: 
    Iterator 1=0
    Iterator 2=0
    Iterator 3=0
    Iterator 4=0
    Iterator 5=1

Shader:
    Palette location=0
    Blend speed=0
    Opacity=1

## Iterator 5 (shared linked w Iterator 2)
Add a new iterator.

transform:
    linear=1 (leave linear on as is) 

Weights: 
    Iterator 1=1
    Iterator 2=1
    Iterator 3=0
    Iterator 4=0
    Iterator 5=0

Shader:
    Palette location=0
    Blend speed=1
    Opacity=1

You should now have what looks like a bubble split in half vertically.

[![Basic Shape](/assets/images/chaotica-double-bubble/double_bubble1.png)](/assets/images/chaotica-double-bubble/double_bubble1.png)

See example params: doublebubble.chaos
[![Example](/assets/files/params/starter or tutorial/double bubble1.chaos)](/assets/files/params/starter or tutorial/double bubble1.chaos)

## Set Texture, part 1: Remove Pre-Blur; 

Iterator 1 and 2:
    set pre-blur=0 on both.

This is the base of your fractal so far.

[![Basic Shape](/assets/images/chaotica-double-bubble/double_bubble2.png)](/assets/images/chaotica-double-bubble/double_bubble2.png)

See example params: doublebubble2.chaos
[![Example](/assets/files/params/starter or tutorial/doublebubble2.chaos)](/assets/files/params/starter or tutorial/doublebubble2.chaos)

## Set Texture, part 2: Scale and Rotate

Iterator 1 and 2: 
Scale down both by 300%

Set Pre-Affine
    Set X-axis length= .3
    Set Y-axis length= .3

Iterator 5:
Rotate by 30 degrees

Set Pre-Affine
    Set X-axis angle= -60.0
    Set Y-axis angle= 30.0

[![Basic Shape](/assets/images/chaotica-double-bubble/double_bubble3.png)](/assets/images/chaotica-double-bubble/double_bubble3.png)

See example params: doublebubble3.chaos
[![Example](/assets/files/params/starter or tutorial/doublebubble3.chaos)](/assets/files/params/starter or tutorial/doublebubble3.chaos)

## Customize to Make Your Own

Rule #1 of tutorials: make the results your own! Tweak, tweak, tweak!

Try the following:

Iterator 5:
You can tweak this iterator heavily.
    Add curl or any other transform on main
    Try post or pre-transforms!

    Weights: 
        Iterator 1=1
        Iterator 2=1
        All other weights 0
        Base weight 1

    Shaders
        Opacity=0

    Pre Affine:
        Rotate as desired

    Post-Affine:
        Rotate and scale as desired

Iterator 6: (Add a shared linked xform for Iterator 5)

You can tweak this iterator heavily.
    Try various transforms
    Try post or pre-transforms!
    See example params.

    I used jac_elk on main
    and arccsh on pre.

    Weights: 
        Base weight 1
        Iterator 5=1
        All other weights 0

    Shaders
        Opacity=0

    Pre Affine:
        Rotate as desired

    Post-Affine:
        Try scaling down and rotating

See example params: red pool of white tree2a.png)
[![Image](/assets/images/chaotica-double-bubble/red pool of white tree2a.png)](/assets/images/chaotica-double-bubble/red pool of white tree2a.png)

[![Params](/assets/images/chaotica-double-bubble/red pool of white tree2a.png)](/assets/images/chaotica-double-bubble/red pool of white tree2a.png)

[![Image](/assets/images/chaotica-double-bubble/red pool of white tree2a.png)](/assets/images/chaotica-double-bubble/red pool of white tree2a.png)

See example params: leafboom.chaos
[![Params](/assets/files/params/starter or tutorial/leafboom.chaos)](/assets/files/params/starter or tutorial/leafboom.chaos)

Have fun!

chroma