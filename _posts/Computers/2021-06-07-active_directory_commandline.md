---
layout: single
title: Command Line Active Directory Management
categories: computer activedirectory
permalink: /computers/ad_management
author: Pugnacious
toc: true
toc_label: Table of Contents
excerpt: Here are some tricks to managing active directory through command line.
---

## Introduction

I'm sure you all have some form of IT experience. If you didn't, you wouldn't be here. These are some tricks that I use on a regular basis to get things done. It's not all of the possibilities, but it's a reference for those who need it.

## Getting Information

One of the first things you need to do when you're looking at an AD account is to view the account. I find that the windows menu is horrible. I mean seriously Microsoft. Give us an account and permissions editor that isn't right out of Windows 98\. If anyone knows a functional replacement for those menus that works better and is more modern, please for the love of Pete, let me know. Anyway, I digress...

### Users

I find that looking at information in a command line window can be a lot better on the eyes and easier to read than the GUI sometimes. For that, we use the net user command with the domain flag.

`net user /domain "Active Directory Username"`

This will display all of the relevant details and give you a nice display. I'm sorry, but I'm not going to show you a screenshot as the information I have is for an actual user and I don't really have a ton of time to make a test domain at the moment. If you want to see what the command looks like, feel free to run it. If you're scared of me giving you arbitrary commands use the /? flag in windows and it will give you the help details of the command.

### Groups

Getting information on groups is just as easy as the previous. To get a list of all groups on a domain controller the command would be as follows.

`net group /domain`

To get information on a specific group you would use the command like this:

`net group /domain "Active Directory Group"`

## Modifying things

What day doesn't go without modifying or managing accounts?

### User Management

To change a user's password, the command would be as follows.

`net user "Active Directory Username" "password" /domain`

Or we can disable the account.

`net user "Active Directory Username" /active:no /domain`

### Group Management

One of the most common things I have to do on a daily basis is add and remove users from groups. To add a user it's the net group command like this.

`net group "Active Directory Group" "Active Directory Username" /add /domain`

To remove a user from a group it's almost the same.

`net group "Active Directory Group" "Active Directory Username" /delete /domain`

## Powershell tricks

Also, using powershell, you can accomplish some nifty things.

### List all locked user accounts

Here's the command to list all locked user accounts on your domain controller.

`Search-ADAccount -Lockedout | Select-Object Name, SamAccountName`

That will list all currently locked out accounts. So now how do we unlock them? Another powershell command.

`Search-ADAccount -Lockedout | Unlock-AdAccount`
