# Overview
This application was created to help me learn the C++ language especial in use of classes. It is a basic calculator that performs basic functionality as a windows form application.
By using the visual studio .NET framework this app was simple to create but had a high learning curve. Careful review of the useful websites is recomended when trying to use this software. If you don't have experience in visual studio these website will help and is recommended to understand the layout and functionality first.

To use this app, simply open visual studio and clone the repository. You can then click the run button in the top menu bar and the application will launch from there. Simply use the application as directed in the demo video below.

[Visual Studio Install](https://learn.microsoft.com/en-us/visualstudio/install/install-visual-studio?view=vs-2022)
On install of visual studio make sure to select the .NET framework tools as well as the C++ tools to be able to run this project.

[C++ Calculator Demo](https://youtu.be/e3iyuHnBqNQ)

# Development Environment

Visual Studio was used for this application to create the framework and a windows form app. This was the easiest solution for this as Visual Stuido offers a suite of tools that are easy to use and set up. Visual Studio can be difficult to learn at first, so I have included a helpful video as well. 

# Useful Websites

- [C++ W3Schools](https://www.w3schools.com/cpp/)
- [C++ Windows Forms app in Visual Studio](https://www.youtube.com/watch?v=gB51Tla5pPI)

# Future Work

- Reorganize classes: I would like to make my classes and button functions more modular. There was probaby a better way to create my classes and use inheritance for my operators and calculating fucntions. 
- Add graphic calculator: With more knowledge of the C++ language it would be useful to add graphing calculator functionality. This would require more classes and a better interface as well.
- Add capacity for negative numbers and scientific notation: By adding negative and scientific notation it would greatly increase the capacity this calculator has to be able to handle larger numbers. I use a ToInt64 conversion for all calculations which can handle most numbers. Once numbers get larger though there are some issues associated with how C++ handles them. This can be seen when trying to exponent large numbers as well.
- Add decimal capacity: By using Int type for all variables and calculations the decimal capacity is reduced cause division to be less accurate. Changing all Int data types to double would be a better solution in hiendsight. 