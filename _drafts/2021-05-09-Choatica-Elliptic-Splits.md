---
layout: single
title:  "Chaotica: Elliptic-Splits"
categories: fractal chaotica
permalink: "/chaotica/elliptic/splits"
author: "Pugnacious"
toc: true
toc_label: "Table of Contents"
excerpt: This tutorial will show you how to create a Elliptic-Splits form with chaotica.
---

## Chaotica: Elliptic-Splits

## Credits

This is a collaboration between myself and Crystalize but a huge thanks to the fractal community is also in order.

> *If I have seen further than others, it is by standing upon the shoulders of giants.  - Isaac Newton*

## Elliptic splits

Description

## Transform 1

    Transform: elliptic
        value: 1 to 1.25

Pre-affine lowered size.  Flipped 90 degrees counterclockwise
    x-axis 90
    y-axis 180

Post affine normal but flipped 90 degrees counterclockwise

Size of the pre-affine will affect final combination

## Transform 2

    Transform: Splits
        value: 1
        splits_x: 1.15 (same as elliptic?)
        splits_y: 0.081 (varies based on preference?)

pre-affine raised (controls distribution) normal rotation

post-affine normal but flipped 90 degrees clockwise
    x-axis -90
    y-axis 0

## Adding effects

cylinder transform
