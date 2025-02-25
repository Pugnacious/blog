---
layout: single
title:  "Computers: Powershell Active Directory Management"
categories: Computer Powershell Active_Directory
permalink: "/computer/powershell/active_directory
author: "Pugnacious"
toc: true
toc_label: "Table of Contents"
excerpt: Managing Active Directory Using Powershell
---

## Computers: Powershell Active Directory Management

### Powershell Basics

With Powershell you have a few basic command types.  Powershell commands start with what you want to do.  Some examples are Add-ADGroupMember, Get-ADUser, Set-ADUser.  You will start to notice a pattern, the more commands you learn.  This is the basic layout though.  You start the command with what you're wanting to do, then toss a dash in, followed by what you want to use the command on.  It takes some memorization or leaving the documentation up a lot.  The more you use it, the easier it gets.

### Getting information

Like anything else, you can't perform your end goal without knowing what, who and where you're interacting with.  I'm going to start with getting user details as that's the most likely use case.

Get-ADUser -Identity "username" -Properties CN,UserPrincipalName

Get-ADUser -Filter 'Name -like "*George*"' | Format-Table Name,CN,SamAccountName,UserPrincipalName -A
