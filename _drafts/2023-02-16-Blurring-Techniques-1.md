---
layout: single
title:  "Blurring Techniques 1"
categories: fractal chaotica
permalink: "/chaotica/"
author: "technochroma" "Pugnacious" 
---
Source git: assets\files\incoming_collection_of_older_content\blur_1_-_tatasz.pdf
Source web: 

## Blurring Techniques - Part 1 by tatasz on DeviantArt
Effects and Fillers category

technochroma's note: please note that as with all drafts, this is just inspo/draft material and does not represent a final version. 
The final version will be totally rewritten by Pugnacious to 1) convert to Chaotica format, and 2) preserve only the fractal technique.
Text will be redrafted and images replaced to honor the wishes of all original creators and fractal pioneers,
and we will provide a link to your original source material as a reference.

---

Some methods to add cool blurs to your fractal, requested by Nobody and written in collaboration with him 
The parameters are for learning purpose only. Please tweak a lot and credit back.

Part of Structured IFS tutorial collection.

## Starting Parameters

As example, we will use basic elliptic splits parameters. Lets make it:

1. Start with a blank flame
2. On transform 1, replace linear with elliptic = 1
3. Rotate it 90 degrees CCW
4. Scale transform 1 down by 150%
5. Add a new transform
6. On transform 2, replace linear with splits = 1
7. Set splits_x variable to 1
8. Rotate transform 2 90 CCW
9. Scale transform 2 up by 200%

Or just grab the parameters here: 
Starting Parameters: Elliptic Splits 
...\assets\files\params\starter or tutorial\Starting Parameters Elliptic Splits_tatasz.chaos

## Trick 1. Falloff2 / falloff3

Falloff2 and falloff3 create amazing blur effects. 
For best results, add either the pre version (pre_falloff2 for example), or on a pre_linked transform. 
Post and post_linked are not recommended, as they may mess up the shapes.

Like this, for example: Elliptic Splits with Falloff2
...\assets\files\params\starter or tutorial\Elliptic Splits with Falloff2_tatasz.chaos


Basically, falloff plugins blur the sides, but leave the center not blurred.
As it has many variables, lets go through some examples. 
As usual, those are not all options, just some directions for experimentation.

Left, type = 0 and right, type = 1
Left, mul_x = 1 and mul_y =0, and right, the opposite.
Example by Nobody - click to see the parameters:
And, just for fun, 2 examples of falloff blurring from my gallery:

## Trick 2. Other blurs

Instead using falloff, you can use other blurs too. 
Or even combine different variations in one pre_linked transform.

Left, blur_linear and right, blur_zoom.
 Left, radial blur and right, qwave.

No example params

From my gallery:

## Trick 3. Add small amount of blur to existingtransforms

Instead of doing all this xaos, just add a small amount of blur (like 0.0001 - 0.1)

to either elliptic or splits transform. Or to both 

Left, 0.01 radial blur added to elliptic trasnform, 
and right, 0.05 sineblur added to splits transform:

 This one is only possible in Chaotica. 
 Here, I added two instances of rays (one with 0.1 and one with -0.1) to splits iterator - two instances are needed to make the blurring symmetrical.

No example params

From my gallery:

## Trick 4. Spherical + pre_blur + spherical

Using pre_blur in a combo with sphericals allows to achieve a falloff sort of effect.

Starting with basic parameters, lets:

1. add a pre linked transform to splits
2. on this transform, replace linear with spherical
3. add a linked transform to this new transform
4. again, replace linear with spherical - this should make you fractal look like the starting params
5. add a bit of pre_blur to the second spherical

And you should get something like this: Spherical + pre_blur + spherical. 
...\assets\files\params\starter or tutorial\spherical pre_blur spherical_tatasz.chaos

On the image below, I used 0.1 pre_blur:

The first spherical is optional, it just cancels the changes added by the second spherical.

As a side note, this technique imho works best on bubbles / hemispheres. 
For example, an elliptic splits with a hole filled with hemisphere (and blurred using this technique):

No example params

Also, I used this trick in two works below to blur the hemispheres