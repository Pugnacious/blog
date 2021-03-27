---
layout: post
title:  "Chaotica: An Introduction"
date:   2021-03-27 13:26:00 +0000
categories: fractal chaotica
---
What is it?
Welcome Friends!  I'd like to introduce you to Chaotica.  
This is a software that's still being developed.  It's similar to [Apophysis](https://sourceforge.net/projects/apophysis/) (or more recently [Apophysis 7x](https://sourceforge.net/projects/apophysis7x/)) but more geared at this time towards rendering.

[Chaotica: https://chaoticafractals.com/](https://chaoticafractals.com/)

Chaotica has a free version, but if one wants to render in high resolution or
for monetary gain, one must buy a license.  I'm going to go out on a limb and
guess that if you're here, reading this, than you likely know at least something
about what it is and does.

Since I started trying to learn chaotica, I've found the biggest hurdle is
figuring out what feature does what, and how it's similar or different to
Apophysis.  I got my start learning Apophysis and I'll be the first to admit
that I'm still learning.  There's a lot to learn when it comes to this subject
and we're all taking our own path to our own goal.  There is no one path and no
one goal.

Where to get it?
First and foremost, snag a copy off the site. I suggest snagging the beta of
Chaotica 2 off the forum.  It's a bit more feature filled and this guide will be
using that version.

What does it look like?

[//]: # (![Chaotica](/assets/images/chaotica_2021-03-27_13-47-00.png) )
<img src="/assets/images/chaotica_2021-03-27_13-47-00.png" alt="Chaotica" width="1700"></img>

When you first boot up the software, you'll be presented with a screen like so.

At first glance, this can seem a bit overwhelming.  Let me start by
explaining what you're seeing.

The window in the middle is a Parameter Browser.  It let's you create a new
"World" based on random parameters.  If you've used Apophysis think "flame."  In
Apophysis you call it a flame, and here it's a world.  It's just a different way
of thinking about it really.  You can either accept one of the random variables,
or click that button on the left that says "New random worlds".

The main window in the back is where your world will take shape.  You can safely
close the parameter browser now and we can focus on the rest of the window.

Random World Generator
Since we're on that subject, let me explain that first.  The button, will
generate a new set of random for you to play with.  The number next to it,
conveniently labelled "number," will tell the software how many to give you.
 Every time you hit it, the software will attempt to generate new ones.
 Sometimes they look fairly close to the same, that's just the whole random
factor at work.

Next we have Min and Max iterators.  Let me explain that.

In Apophysis you have Transforms.  In Chaotica, you have Iterators.  The min and
max iterators tell the random generator how many or few to use when it creates
random parameters.  We'll come back to this topic when we get to the practical
part of the tutorial, so be prepared for it.

The next part of this section is "Partial Randomization"  This allows you to
randomize parts of your world and leave others alone.

Palette will randomize the palette and you can select how many color nodes to
generate with the selection box.  This will randomize the base colors.
 Apophysis uses a gradient, but Chaotica uses a palette.  The next tutorial will
get into more of this but you can color your work in new and interesting ways.

Transforms will randomize the transforms across the whole piece.  This doesn't
touch the Camera Transform, but I'll get into what that is in the next tutorial.

Shaders will randomize the palette location and blend speeds for each iterator.
 In Apophysis this would be the transform color and color speed.  These behave a
bit differently in Chaotica, so if you're used to Apophysis, I'll cover this in
a future tutorial.

Selectors will randomize the weights of the iterators.  Think Xaos from
Apophysis. It controls how the iterators interact with each other and how much
they blend (this is an over-simplification, but we'll leave it for now).

World Browser
Next, we can look at the top left.  This is the world browser.  If you're used
to Apophysis it's like the flame list on the left.  You can right click the box
to rename your world, or add another world to the list for quick switching.  It
would be amazing, if this list could remember it's settings on application
start, but this software is still being worked on, and we'll all just have to
wait and see.

Render Settings
This section will be likely covered in a future tutorial as it needs it's own to
fully appreciate this.  This is your width and height settings for how big you
want your render to be.  I suggest leaving these at default until you know more
about how they function.  Though if you're brave, go nuts.

For the record, it's almost pointless to go above AA level 4 (Anti-Aliasing).
 Doing so would increase the ram requirements astronomically.

OpenCL Settings
This selects the device used and has a few more options for rendering.  In order
to use your device for rendering, you must check the "Use OpenCL" option.

Imaging Settings
These settings control the various features of the active render.  These
settings can be changed on the fly without needing to restart the render
process.  They get saved when you save your world (I still love saying that...).
 Now, if you're familiar with Apophysis, some of these will be the same, others
different or new altogether.

Tone Mapping
This controls the main settings.

Brightness - How bright the image is.  It's a multiplier on density (how much
structure is in an area)

1/Gamma - Think of this as contrast. It trades brightness for body.  The higher
the gamma, the less impact brightness has and vice versa.

I suggest playing with both of these numbers until you have a sense of how they
interact with your render.

Highlight Power - This changes how the brightest and densest parts of the
fractal show up.

Vibrancy - Lowering this will whiten the overall fractal, and raising it will
darken it.  You can get some greyscale with tweaking this value.

Gamma Threshold - Raising this value hides the less dense parts of your fractal.
This can help to reduce noise or grainy areas.  This will have an example in a
future tutorial.

Response Curves
These are nifty and resemble things you find in Photoshop or other image editing
software.  There are five of them in Chaotica.  The overall curve controls the
low, mid and high lights in the image.  There are three color channels, as well
as an alpha.  The alpha controls the transparencies.  Definitely play with this
to get a feel for how it changes the image.  Don't be afraid to hit the reset
button.

Background Color - This one is kind of obvious.  This is the RGB value of your
background.  The difference is that the scale is not 0 - 255 it's 0 - 1.
 Chaotica uses floating points instead of the standard scale so it can render in
HDR.  It allows for some rather crazy settings and even negative brightness and
negative saturation. That being said it's handy to remember 0 = black, 1 = full
color.  You can select the background to be applied before the curves if you
wish.

All that is awesome, but how do I make a fractal?
OK, in this guide I'm going to cover the basics.  I'll have another guide
shortly that explains how to deal with the more advanced techniques and use the
world editor.  This one is going to be simple and sweet.

Generate a random world.  Congrats, you've made a fractal.  OK, I get it, you
want more.  Here it comes.

One option is to import a fractal from Apophysis.  In that software hit Edit -->
Copy to copy your flame.  Then go to Chaotica, and hit Edit --> Paste XML from
Clipboard.  That will pull the flame from apophysis and convert it to Chaotica.
 The formats are not interchangeable at this time.  Currently there is no
official way to go from Chaotica back to Apophysis.  If you want to get advanced
and do xaos editing, it's suggested to start in Apophysis and render in
Chaotica.

If however you want to create something purely in Chaotica, here's a way to get
started.  First, I should mention.  Save often.  You'll eventually thank me.

Now, Generate a random world.  This will get you a starting point.

Once you have something you like, click on it.  Feel free to adjust the min and
max iterators values if you want more or less iterators to work with.  This will
move it from the browser to the world.  Next, hit Palette under the random world
generator to find a color you like.

Click on it to get it into the window.  Next hit the transform button a few
times until you see something you like. If you can't find anything that looks
good, that's fine.  You can always go back or start over.  (Hint: CTRL + Z =
undo when you hit it while the main window is in focus)

Once you're happy with that part, Hit the shaders button and get some more depth
to things.  Again, keep in mind, you can undo  or even start over.

Next hit the selectors button and repeat.

Once you're at a happy place, tweak your image settings.  On mine, I'm going to
tweak the gamma threshold, and color curves.

Once you're happy with the result comes time to render.  Oh wait, with
Apophysis, you have to wait a while for it to render to disk.  Well, with
Chaotica, the one thing it has that's truly outstanding is It renders while
you're playing with it.  If you look down at the bottom there's a status bar.
 It's been rendering the whole time.  In a  future tutorial, we'll cover all of
that.  The quick and simple is, this thing has been rendering the image for you
the whole time.  All you have to do is wait around a bit until the image in the
view looks good to you and the lines are smooth enough for you and go to the
File menu.  Then hit save image. (it's a truly good idea to save the world
while you're here.  And save often).



What Now?
Now you play until you have something you like, and enjoy.  If you like the
software, kick some cash towards the dev so they can keep working on the
software.

Next time, we'll cover more advanced editing, how to use the other menus and
editors and creating a basic fractal.  I'll leave you with a few things that
Chaotica can render for your viewing pleasure.

https://www.deviantart.com/monkeyshack/art/Golden-Rings-847960629
https://www.deviantart.com/monkeyshack/art/Origin-of-Life-845458767
https://www.deviantart.com/monkeyshack/art/Stuck-In-A-Chessboard-847813508In
part 2, we will cover the world and palette editors and the basics of using
them.

 1. This Tutorial
 #2. Chaotica: Edit the World [/chaotica-edit-the-world/]
 #3. Chaotica: Linear Latitude [/chaotica-linear-latitude/]
