# C++ Calculator Project
In this project I am going to programm a calculator. At first there will be no gui. It just works in a terminal. And there it will do the basic stuff like add numbers and stuff. 

Over the time I am going to add more features and maybe I will try to create a simple gui for it. I will define some goals to create the calculator step by step and maybe write some words to it if I achieved the goal.

***The goal(s):***
<br/>//TODO :D

##IDE
I'm using [cevelop](https://www.cevelop.com) as IDE. This is a new IDE very similar to [eclipse](https://eclipse.org) just with the C/C++ bundle, created by the [institute for Software](http://ifs.hsr.ch).

##Setup
As you can see there are three Projects.

The my_calc Project is a static Library Project, so the others need it as a reference. the my_calc_main is just the executable Project of the calculator and the my_calc_test, as you can imagine, is the test project with the test cases for the calculator.

To set the Project Reference do the following:

	right click on the Project (not for my_calc) > Properties > Project References > select my_calc

To check if all works, try build the my_calc Project and then the others and if this works you're good to go!<br />
***It is very important to build the my_calc Project first, because the others try to find the archive files of it and if this isn't here the won't build.***