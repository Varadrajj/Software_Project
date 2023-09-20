#1.DRY-->The DRY (Don't Repeat Yourself) principle is a fundamental concept in software development that encourages developers to avoid duplicating code or logic in a system. 
The main idea behind the DRY principle is to promote code reusability, maintainability, and readability by ensuring thatevery piece of knowledge
or logic in a system is represented in a single, authoritative place.
  Here are the key principles of DRY:
1.Avoid Code Duplication: Don't write the same code or logic in multiple places within your software. Repetition can lead to maintenance issues, inconsistencies, and
a higher likelihood of introducing bugs.
2.Single Source of Truth: Ensure that there's a single, unambiguous source for a specific piece of knowledge or logic.
  If you need to change that knowledge or logic, you only need to do it in one place.
3.Modularity and Reusability: Encourage the creation of reusable components, functions, or modules. This makes it easier to use the same code in different parts
  of your application or in different applications altogether.
4.Abstraction: Abstract common functionality into reusable abstractions or patterns. This reduces the need to reimplement the same logic across different parts of your codebase.
5.Keep Codebase Clean: A clean and well-organized codebase is easier to maintain. DRY encourages developers to think about how to structure their code effectively.
6.Code Review and Refactoring: Regularly review code to identify and eliminate duplications. Refactor code when necessary to adhere to the DRY principle.
7.Documentation: When you have a piece of knowledge or logic that's critical but can't be avoided in multiple places, document it thoroughly to ensure that everyone understands its purpose and usage.

#2.SOLID-->The SOLID principles are a set of five design principles in software development that help create more maintainable and scalable software. 
Here they are briefly:
1.Single Responsibility Principle (SRP): A class should have only one reason to change, meaning it should have a single responsibility. 
  This principle promotes modular design and helps prevent classes from becoming too complex.
2.Open/Closed Principle (OCP): Software entities (classes, modules, functions) should be open for extension but closed for modification.
  This encourages the use of interfaces, inheritance, and polymorphism to add new functionality without changing existing code.
3.Liskov Substitution Principle (LSP): Subtypes (derived classes) must be substitutable for their base types (parent classes) without altering the correctness of the program. 
  In other words, derived classes should extend base classes without changing their behavior.
4.Interface Segregation Principle (ISP): Clients should not be forced to depend on interfaces they don't use. This principle encourages
  the creation of small, specific interfaces rather than large, monolithic ones, reducing unnecessary dependencies.
5.Dependency Inversion Principle (DIP): High-level modules should not depend on low-level modules. Both should depend on abstractions. 
  This principle promotes the use of interfaces or abstract classes to decouple high-level and low-level components, making the system more flexible and easy to change.

#3.Hollywood-->The Hollywood Principle in software development is summarized as "Don't call us, we'll call you." It means that high-level modules or frameworks control
the flow of a program and call lower-level modules when needed, promoting a more structured and centralized approach to control flow.
The Hollywood Principle is often associated with the following ideas:
1.Inversion of Control (IoC): It represents a shift in control from the caller (the client code or lower-level module) to the callee (the framework or higher-level module).
  Instead of the caller directly invoking methods or functions of the callee, the callee defines hooks or callbacks that the caller implements. 
  The callee then invokes these callbacks when specific events or conditions occur.
2.Loose Coupling: By letting the higher-level module call the lower-level modules, you create a more loosely coupled system. This means that lower-level modules don't need to know 
  the specifics of how they're being used by higher-level modules, promoting greater flexibility and easier maintenance.
3.Plugin Architecture: The Hollywood Principle is often applied in plugin systems. Plugins register themselves with a framework or application, and the framework
  invokes them when necessary. This allows third-party developers to extend the functionality of an application without modifying its core code.
4.Event-Driven Programming: In event-driven systems, the Hollywood Principle is commonly used. Components register for specific events, and when those events occur,
  the system (or a central dispatcher) calls the registered components to handle the events.


