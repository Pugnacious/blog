---
layout: single
title:  "Tutorial Template"
categories: fractal chaotica
permalink: "/chaotica/"
author: "technochroma" "Pugnacious"
---

## Chaotica: Hypertiled Kleinians

The following is a tutorial to create a [fractal type] of the [fractal category]. This uses/does not use the custom transforms created by Crystalize. If you haven't already installed them, see the tutorial to do so [HERE][crystalize]

[Crystalize Xforms][crystalize]

## Credits

This is a collaboration between myself and technochroma, but a huge thanks to the fractal community is also in order.

> *If I have seen further than others, it is by standing upon the shoulders of giants.  - Isaac Newton*

## Initial Setup

I'm going to start this tutorial in the normal way by opening up chaotica and starting a new blank world. Then I'm going to go to the World Editor and create my first Iterator.

[Anything past this section is filler text and should be customized accordingly per the tutorial being written.]

---

## Iterator 1

[![Iterator 1](/assets/images/chaotica-hypertiled-kleinian/chaotica_i6PRLLkuvE.png)](/assets/images/chaotica-hypertiled-kleinian/chaotica_i6PRLLkuvE.png)

    Transform: hypertile2
    value: 1
    hypertile2_p: 6
    hypertile2_q: 6

    base_weight: 1

## Iterator 2

[![Iterator 2](/assets/images/chaotica-hypertiled-kleinian/chaotica_i6PRLLkuvE.png)](/assets/images/chaotica-hypertiled-kleinian/chaotica_i6PRLLkuvE.png)

    Transform: kleinian
    value: 2.618033988749
    klein_b: 0

    base_weight: 1

## Math

Insert the formulas or math here on how this is setup

## Iterator 3

    pre_transforms:
      transform: sineblur
      value: 1
      sineblur_power: 1

      transform: smartshape
      value: 1
      sshape_power: 12
      sshape_roudnstr: 0
      sshape_roundwidth: 1
      sshape_distortion: 1
      sshape_compression: 1

      transform: hypersize
      value: 1
      hypersize_p: 6
      hypersize_q: 6

    transform: linear
    value: 1

    base_weight: 0.1

## Iterator 4

    pre_transforms:
      transform: sineblur
      value: 1
      sineblur_power: 1

      transform: smartshape
      value: 0.56
      sshape_power: 6
      sshape_roudnstr: 0
      sshape_roundwidth: 1
      sshape_distortion: 1
      sshape_compression: 1

      transform: hypershift2
      value: 1
      hypersize_p: 6
      hypersize_q: 6

    transform: linear
    value: 1

    base_weight: 0.1

## Iterator 5

    pre_transforms:
      transform: sineblur
      value: 1
      sineblur_power: 1

      transform: smartshape
      value: 0.305
      sshape_power: 12
      sshape_roudnstr: 0
      sshape_roundwidth: 1
      sshape_distortion: 1
      sshape_compression: 1

      transform: hypershift2
      value: 1
      hypersize_p: 6
      hypersize_q: 6

      transform: kleinian
      klein: 1
      klein_b: 0

    transform: linear
    value: 1

    base_weight: 0.03    


[crystalize]: https://www.pugnacious.site/chaotica/crystalize/xforms
