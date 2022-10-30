---
layout: single
title: 'Chaotica: Pixelated Style'
categories: fractal chaotica
permalink: /chaotica/pixel-style
author: Pugnacious
toc: true
toc_label: Table of Contents
excerpt: This is a tutorial on using a pixelated style with chaotica.
---

[![Intro Image](/assets/images/chaotica-pixel-style/mobius_eyes.png)](/assets/images/chaotica-pixel-style/mobius_eyes.png)

# Credits

A huge thanks to the fractal community is in order. 

> _If I have seen further than others, it is by standing upon the shoulders of giants. - Isaac Newton_

## Introduction

I've been asked to provide a tutorial on how I created a pixelated style using chaotica.  The method is incredibly simple and can work with any already created image.  In this case, we can use an image that I've been working on, but didn't consider up to my usual standards of publishing. 

[![Basic Image](/assets/images/chaotica-pixel-style/mobius_eyes_normal.png)](/assets/images/chaotica-pixel-style/mobius_eyes_normal.png)

Once you have your image picked out, go to the camera transform.  If you already have a camera transform, that's fine.  Add a new post-transform to the camera and set it to blur_pixelize.

This will run the entire image through a pixel filter.  Now to explain the settings in that transform.

### Settings

The main settings are as follows:

#### blur_pixelize

This is the size of the overall transform.  Raising or lowering this value will increase or decrease the overall size of the image as a whole.  This applies to the camera and is not always going to be this way if you use it outisde of this method.

#### blur_pixelize_size

This is the size of the pixels.  I find that 0.025 is a good size for me, but you might find that bigger or smaller pixels suits your needs.  Play with this at will and enjoy yourself.  This is similar to the next value but not exactly the same.

#### blur_pixelize_scale

This will control the scale of the pixels.  The previous value controls how big the pixels are initially while this value controls the individual pixel scale.  Think of it like the size is how many pixels there are per inch, and the scale is how big each one is and how big of a gap there is between pixels.  Personally, I like a little gap in between them.  That's just my tate though.  I set my value to 0.75, but you can set it to 1 and have no gap between the pixels.  Make sure you play with the values until you're happy.  

### My Settings

[![My Settings](/assets/images/chaotica-pixel-style/node_editor_pixelize.png)](/assets/images/chaotica-pixel-style/node_editor_pixelize.png)

It's really that simple.  Have fun and keep learning!  As always, if you create something awesome with this, let me know so I can see it and shower you with favorites.  

-PugnaciousOne
