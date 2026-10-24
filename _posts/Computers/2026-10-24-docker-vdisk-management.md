---
layout: single
title: Docker Vdisk Management
categories: computer docker
permalink: /computers/docker-management
author: Pugnacious
toc: true
toc_label: Table of Contents
excerpt: A few commands to keep your docker vdisk size down.
---

## Introduction

If you're like me and you run docker containers, over time, you can get some buildup of images or containers.  Here's a few things you can do to troubleshoot and correct high vdisk/disk usage for docker containers.

## Getting Information

You always want to start with getting information.  The first step is to realize there's a problem and then figure out the cause.  You can't repair it if you don't know what the problem is.

### Symptoms

Your docker vdisk size is bigger than when you started because you weren't paying attention and now it's maxing out.

### Commands

First, we need to check the sizes.  You can do that with the following command.

`docker system df`

This will show you a list of the basics, but you'll probably want a more detailed list.  First take note of the reclaimable space numbers in the output from that command.  It will become important later.

To get a more in-depth breakdown use the command

`docker system df -v`

This will give you a verbose output and give you all the details on what's using up space.  More importantly it will show you any images that are lingering and not associated with containers.

## Fixing the issue

Using the information provided by the breakdown, determine where the problem is coming from.  If you have a docker container that's significantly bigger than it should be, it's likely that you've mapped your volume to inside the container or something like that.  If that's the case, fix it by modifying the container.  If It's logs eating all the space, correct that by fixing the container or containers that are creating all the logs.  If you're like me however, you may have a lot of images that aren't associated with containers.  We all tend to update and not think about it.  Over time there can be leftovers, or maybe images that linger after you deleted the containers.  This command will clear any image not assoicated with at least one container.

`docker images prune -a`

I managed to recover about 60gb of space.  Good luck and I hope you have a great day.
