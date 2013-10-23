PatentSystemFSM
===============
October 23, 2013
Mark Bowman, IP Osgoode Intensive Fellow, CodeX Intern & Stanford Visiting Researcher, 2014 JD Candidate
---------------

The PatentSystemFSM project attempts to codify certain procedures of the patent system in certain international jurisdictions. This project is a collaboration between CodeX: The Stanford Center for Legal Informatics at Stanford University and IP Osgoode at Osgoode Hall Law School.  

The project will first focus on the patent application process in the U.S.A and Canada. Each process will be interpreted into a finite state machine (FSM), digitized using QFSM (qfsm.sourceforge.net) and then exported into Ragel (http://www.complang.org/ragel/), and then C++ code is generated from the Ragel file.

The software library will allow a user to enter in a set of boolean variables (yes or no, this happened or this didn't happen) with associated dates into the FSM and retrieve the state of the patent process which their actions would place them in. A brief example of a user for the US and CDN patent systems is a user who has applied for a patent (in either jurisdiction) within the past 18 months with no other actions: this would place the user in state where their application is active but confidential. As soon as the 18 month period elapses, the user would change state to a state where their application is active but disclosed to the public.

The short term implementation goal of this project is to create a software library representing the specific portion of the patent application procedure for the identified jurisdictions. Once this is completed the project might expand to additional jurisdictions, additional patent processes (such as processes related to challenging a patent, licensing, etc.), and/or additional software functionality.

The short term goals of this project include: 
1) creating an information source for current and future patent applicants that attempts to visually (through the FSM) and programically describe the entire scope of the relevant patent system, explaining the different states and outcomes of the patent system in a descriptive and easy to understand way
2) creating a "first step" in codifying the patent process, allowing other users to build functionality on top of this library
3) creating a comparative law tool that allows the comparison of patent systems around the world


The long term goals of this project include:
1) achieving the short term goals
2) introducing the principle of stare decisis into the transitions between states: the library created in the vision of the short term goal will ask the user a simple question such as "is the idea novel?", this question is much more complicated and consistently the subject of litigation; by introducing judicial interpretation and Patent Office Practice into the library, we can provide the user with a very detailed rule set that determines each transition (although we would still require the user to make the decision on whether the rules et allows or deny's the transition, i.e. determining if the idea is novel).
