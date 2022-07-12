---
layout: single
title: 'Chaotica: Crystalize Xforms'
categories: fractal chaotica
permalink: /chaotica/crystalize/xforms
author: Pugnacious
toc: true
toc_label: Table of Contents
excerpt: >-
  This is a tutorial on installing the Crystalize Xforms Pack of transforms for Chaotica.
---

# Introduction

This is a tutorial on installing the custom transforms created by Crystalize

# Credits

This is a collaboration between myself and Crystalize but a huge thanks to the fractal community is also in order.

> _If I have seen further than others, it is by standing upon the shoulders of giants. - Isaac Newton_

# Installation

Installation can be accomplished using git, or using a flat file copy. I'll cover each method here so you can make a decision on which method you prefer.

## User transforms

User transforms are transforms written in the winter xml format and stored in the user_transforms folder. This folder is located at

```
%appdata%\Chaotica\user_transforms
```

**NOTE: the %appdata% environment variable points to C:\Users\\<username\>\Appdata\Roaming</username\>**

If this folder doesn't exist, simply create it.

**ANOTHER NOTE: the linux file path is ~/.glare_technologies/Chaotica/user_transforms**

This folder will accept subdirectories and you can create them at will to organize your files. Please keep in mind that organizing files in this way will have no impact on how the software lists them. They are listed by name in a case sensitive manner regardless of how their folders are structured.

## Flat File Copy

The first method involves copying the files directly. The files are located on the git repo.

[Crystalize Xforms][crystalize-xforms]

Simply find the xml file you want and copy it to the user_transforms folder. As I said before, you can create subfolders if you like.

## Git Clone

Since this is stored on a git repo, you can clone the repo and copy all the files to your directory. If you have git installed, it's a simple command. I highly suggest this method as it allows for a single command to update the pack. This pack is under active development at the time of writing of this post, which means it gets frequent updates.

To start off with, I know there are GUI based methods for doing this, but I much prefer the command line. Feel free to use a GUI if that's your thing. This tutorial will cover the command line version.

First, open your command line of choice and navigate to the folder. On windows it's

```
cd %appdata%\chaotica
```

Check to see if the user_transforms folder exists and if not create it. You can simply attempt to make the directory and it will error out if it exists. If not, it will create the directory.

```
mkdir user_transforms
```

Then we change to that directory and clone the github repo

```
cd user_transforms
git clone https://git.pugnacious.site/Crystalize/crystalize_xforms.git
```

That will copy all the files into their correct locations.

## Winter Library

With the most recent update, the winter library needs to be modified to add functions. Some of the newer transforms will not work without this update.

### Update Process

The file winter_std_lib_updates.txt is included. The file will be located at

```
%appdata%\Chaotica\user_transforms\crystalize_xforms\winter_std_lib_updates.txt
```

First pull up this text file and open it up.

Next go to the folder

```
C:\Program Files\Chaotica\data
```

Open the winter_stdblib.txt file and copy the entirety of the code from the updates into a new line at the bottom of this file. Don't replace anything. Just add it to the end and save the file.

### Git update

If you used git to install this, you can use it to update the pack. To run an update simply open your command prompt and use the following commands

```
cd %appdata%\Chaotica\user_transforms\crystalize_xforms
git pull
```

[crystalize-xforms]: https://git.pugnacious.site/Crystalize/crystalize_xforms
[crystalize-xforms-git]: https://git.pugnacious.site/Crystalize/crystalize_xforms.git
