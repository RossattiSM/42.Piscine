#!/bin/bash
ifconfig | grep -w "ether" | sed "s/ether//g" | cut -d ' ' -f 2
