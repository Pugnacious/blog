---
layout: single
title:  "Chaotica: Crystalize Xforms"
categories: fractal chaotica
permalink: "/chaotica/crystalize/xforms"
author: "Pugnacious"
toc: true
excerpt: This is a tutorial on installing the Crystalize Xforms Pack of transforms for Chaotica.
---

## <a name="chaotica-crystalize-xforms"></a>Chaotica: Crystalize Xforms

This is a tutorial on installing the custom transforms created by Crystalize

## <a name="credits"></a>Credits

This is a collaboration between myself and Crystalize but a huge thanks to the fractal community is also in order.

> *If I have seen further than others, it is by standing upon the shoulders of giants.  - Isaac Newton*

## <a name="installation"></a>Installation

Installation can be accomplished using git, or using a flat file copy.  I'll cover each method here so you can make a decision on which method you prefer.

### <a name="user-transforms"></a>User transforms

User transforms are transforms written in the winter xml format and stored in the user_transforms folder.  This folder is located at

    %localappdata%\Chaotica\user_transforms

**NOTE: the %localappdata% environment variable points to C:\Users\<username>\Appdata\Local**

If this folder doesn't exist, simply create it.

This folder will accept subdirectories and you can create them at will to organize your files. Please keep in mind that organizing files in this way will have no impact on how the software lists them. They are listed by name in a case sensitive manner regardless of how their folders are structured.

### <a name="flat-file-copy"></a>Flat File Copy

The first method involves copying the files directly.  The files are located on the git repo.  

[Crystalize Xforms][crystalize-xforms]

Simply find the xml file you want and copy it to the user_transforms folder.  As I said before, you can create subfolders if you like.

### <a name="git-clone"></a>Git Clone

Since this is stored on a git repo, you can clone the repo and copy all the files to your directory.  If you have git installed, it's a simple command.  I highly suggest this method as it allows for a single command to update the pack.  This pack is under active development at the time of writing of this post, which means it gets frequent updates.

To start off with, I know there are GUI based methods for doing this, but I much prefer the command line.  Feel free to use a GUI if that's your thing.  This tutorial will cover the command line version.

First, open your command line of choice and navigate to the folder.  On windows it's

    cd %localappdata%\chaotica

Check to see if the user_transforms folder exists and if not create it.  You can simply attempt to make the directory and it will error out if it exists.  If not, it will create the directory.

    mkdir user_transforms

Then we change to that directory and clone the github repo

    cd user_transforms
    git clone https://git.pugnacious.site/Crystalize/crystalize_xforms.git

That will copy all the files into their correct locations.

#### <a name="git-update"></a>Git update

 If you used git to install this, you can use it to update the pack.  To run an update simply open your command prompt and use the following commands

    cd %localappdata%\Chaotica\user_transforms\crystalize_xforms
    git pull

[crystalize-xforms]: https://git.pugnacious.site/Crystalize/crystalize_xforms
[crystalize-xforms-git]: https://git.pugnacious.site/Crystalize/crystalize_xforms.git
