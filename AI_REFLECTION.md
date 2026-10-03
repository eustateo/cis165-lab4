# AI Reflection

**Tools used:** I used OpenAI Codex to help with both C++ programs, their
explanations, and the README. Codex also used OnlineGDB to run the programs
and compare their outputs with expected results. The plans and documentation
were AI-assisted; an average-program example had already been supplied before
the workspace plans were recorded.

**One decision:** A design decision in the code was to keep five separate
`double` variables rather than use a list or array. This follows the lab
instructions and makes the addition easy to trace. The code also stores
`sum`, `average`, and each ocean-level increase before displaying them.

**Verification:** In OnlineGDB, the assigned average test produced a sum of
154 and an average of 30.8. Changing the values to 10, 20, 30, 40, and 53
produced 153 and 30.6. The ocean program produced 7.5, 10.5, and 15
millimeters at the assigned rate, and 11.5, 16.1, and 23 at a rate of 2.3.
These were Codex-operated tests. The assigned values were restored for final
runs, which ended with exit code 0.

**Learning:** These programs feel similar to Python. I feel more confident
that understanding programming logic matters more than the particular
language. Coming from Python, I still struggle with C++ style. My next step
is to practice its variable declarations, semicolons, braces, and indentation
while tracing the calculations myself.
