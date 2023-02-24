---
layout: single
title:  "Blurring Techniques 2"
categories: fractal chaotica
permalink: "/chaotica/"
author: "technochroma" "Pugnacious"
---
Source git: assets\files\incoming_collection_of_older_content\blur_2_-_tatasz.pdf
Source web: https://www.deviantart.com/tatasz/art/Blurring-Techniques-Part-2-577609043
Original author: tatasz

Continuation of: 
blur_1_-_tatasz.pdf
_drafts\2023-02-16-Blurring-Techniques-1.md

## Blurring Techniques - Part 2
Effects and Fillers category

The following is a tutorial to add cool blur effects to any fractal. 

## Credits

This is a collaboration between myself and technochroma, but a huge thanks to the fractal community is also in order.

> *If I have seen further than others, it is by standing upon the shoulders of giants.  - Isaac Newton*

technochroma's note: please note that as with all drafts, this is just inspo/draft material and does not represent a final version. 
The final version will be totally rewritten by Pugnacious to 1) convert to Chaotica format, and 2) preserve only the fractal technique.
Text will be redrafted and images replaced to honor the wishes of all original creators and fractal pioneers,
and we will provide a link to your original source material as a reference.

## Initial Setup

I'm going to start this tutorial in the normal way by opening up chaotica and starting a new blank world. Then I'm going to go to the World Editor and create my first Iterator.

---

The parameters are for learning purpose only. Please tweak a lot and credit back.

Part of Structured IFS tutorial collection.

## Starting Parameters

As example, we will use basic elliptic splits parameters. Lets make it:

    1. Start with a blank flame
    2. On transform 1, replace linear with elliptic = 1
    3. Rotate it 90 degrees CCW
    4. Scale transform 1 down
    5. Add a new transform
    6. On transform 2, replace linear with splits = 1
    7. Set splits_x variable to 1
    8. Rotate transform 2 90 CCW
    9. Scale transform 2 up by 200%

Or just grab the parameters here: 
Starting Parameters: Elliptic Splits 
Starting Parameters assets\files\params\starter or tutorial\Elliptic Splits_tatasz.flame

Img: example render of starting params


## Trick 5. Spherical to send blurs to infinite

Sometimes you will have some empty ares in your fractal that cannot be filled by placing elements close to the origin. For example, below, you have those black gaps:

Img: example of elliptic splits with gaps
img: example render of starter params

To fill those gaps:

    1. Add a new transform
    2. Replace linear with radial blur (small amount like 0.01)
    3. Reduce the weight of this new transform (a lot, to something like 0.001-0.05 usually)
    4. Add a linked spherical to it


:la: the gaps are filled:
img: example render of starter params

Check the parameters: Splits with blur at infinite
assets\files\params\starter or tutorial\splits with blur at infinite_tatasz_zyorg.flame

Now, this i learned from zy0rg - and i'm sure he had some more intelligent way to do it, but i am a dummy and cannot remember it.

There is trick to do it better even. The gaps are mostly caused by elliptic. So your blur bust have same shape as the elliptic (elliptic maps the whole place to a strip, so you need a vertical strip). So...

    1. Replace the radial blur with sineblur (0.3 - 0.4)
    2. Go to spherical transform and add another linked transform to it, this time with polar
    3. Duplicate the polar transform
    4. For the second polar transform, flip vertically the post transform

img: example render of starter params

This second trick is specially useful when you may have overlap issues otherwise. You may replace 2 polars with 1 crop, for example, or use other variations - like elliptic itself =D

Img: example of customized/tweak
Img: example of customized/tweak

## Trick 6. Overlay with blurry cylinders

Another trick based on what zy0rg shared.

This trick produces an effect similar to the previous one. The step by step is:

    1. Add a new transform
    2. Replace linear with cylinder and pre_blur
    3. On transform tab, change the post transform y value from 1 to something like 20
    4. Lower the transform's weight

And here we go:
img: example render of starter params

Examples from my gallery:
Img: example of customized/tweak
Img: example of customized/tweak


## Trick 7. Duplicate transforms and blur them up

Blurring removes parts of the pattern that you like? Easy, keep both by duplicating a transform and blurring one of the copies.
This trick works better when your blurring does not distort a transform too much.

Let's try an example:

    1. Duplicate the elliptic transform (xform 3)
    2. Add a pre linked transform (xform 4) to the duplicate
    3. On pre linked, replace linear with spherical
    4. To this second transform, add a new linked transform (xform 5)
    5. On this (xform 5), replace linear with pre_blur and spherical
    6. Lower the weight of the transform with only spherical (xform 4)

If you had any trouble, check out the parameters: Duplicated Elliptic
assets\files\params\starter or tutorial\Duplicated Elliptic_tatasz.flame

img: example render of starter params

I used the 2 linked sphericals with pre_blur in the middle to force it to blur more the extremes, rather than the middle of the fractal.

And here comes the resul:
img: example render of starter params


## Trick 8. Epispiral

I figured this one out by looking at fractals by lindelokse and Xyrus-02 - although most likely it is not exactly how they do it:

    Add a pre linked transform to elliptic
    Keep linear, and add a small amout of epispiral to it (lets say 0.05)
    On variables, set n to 1, thickness to 1 and holes to 0

Here we go: Elliptic with epispiral

assets\files\params\starter or tutorial\Elliptic with epispiral_tatasz.flame
img: example render of starter params

Experiment with the amount of epispiral and the variables setup. Just a few possible tweaks:
Img: example of customized/tweak
Img: example of customized/tweak

And, as usual, examples from my gallery:
Img: example of customized/tweak
Img: example of customized/tweak
