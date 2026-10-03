# Lab 4: C++ Averages and Ocean-Level Projections

Course section: CIS-165-W099.2026FA

Repository: https://github.com/eustateo/cis165-lab4

This documentation was drafted with OpenAI Codex. The plans were recorded
before the code draft in this workspace, although an earlier chat had already
provided the average program. Codex performed the OnlineGDB runs documented
below. Student review, independent calculations, and personal explanations
remain part of the assignment.

## 3. Program plans and AI use

### Plan for average.cpp

1. Create five separate `double` variables: `value1 = 28`, `value2 = 32`,
   `value3 = 37`, `value4 = 24`, and `value5 = 33`.
2. Add all five variables: `sum = value1 + value2 + value3 + value4 + value5`.
3. Calculate `average = sum / 5` after the sum is complete.
4. Display `sum` with the label `Sum:` and `average` with the label `Average:`.
   Do not ask for input.

### Plan for ocean_levels.cpp

1. Store the annual rate, 1.5 millimeters per year, in
   `const double ANNUAL_RATE`.
2. Store the three year counts separately: `years5 = 5`, `years7 = 7`, and
   `years10 = 10`.
3. Calculate and store `increase5 = ANNUAL_RATE * years5`,
   `increase7 = ANNUAL_RATE * years7`, and
   `increase10 = ANNUAL_RATE * years10`.
4. Display each year count and its stored increase, including the unit
   `millimeters higher`. Do not ask for input or calculate inside `cout`.

Codex helped draft the code, explain the variables and calculations, perform
verification, and organize this documentation. Code should be read and
understood before it is submitted.

## 4. Program tests

### Expected results recorded before the runs

Average with the assigned values:

```text
28 + 32 = 60
60 + 37 = 97
97 + 24 = 121
121 + 33 = 154
154 / 5 = 30.8
```

Average with changed values:

```text
10 + 20 + 30 + 40 + 53 = 153
153 / 5 = 30.6
```

Ocean with the assigned rate:

```text
1.5 * 5 = 7.5 millimeters
1.5 * 7 = 10.5 millimeters
1.5 * 10 = 15 millimeters
```

Ocean with a changed positive decimal rate:

```text
2.3 * 5 = 11.5 millimeters
2.3 * 7 = 16.1 millimeters
2.3 * 10 = 23 millimeters
```

These expectations and the following test record were prepared with AI
assistance. They do not claim that the student personally calculated or ran
the tests.

### Test results from OnlineGDB

All four tests were run on October 3, 2026.

| Program and test | Values used | Expected results | Actual results | Match or correction |
| --- | --- | --- | --- | --- |
| Average — assigned values | 28, 32, 37, 24, 33 | Sum: 154; average: 30.8 | Sum: 154; average: 30.8 | Match; no correction needed |
| Average — changed values | 10, 20, 30, 40, 53 | Sum: 153; average: 30.6 | Sum: 153; average: 30.6 | Match; no correction needed |
| Ocean — assigned rate | 1.5 mm/year | 5 years: 7.5 mm; 7 years: 10.5 mm; 10 years: 15 mm | 5 years: 7.5 mm; 7 years: 10.5 mm; 10 years: 15 mm | Match; no correction needed |
| Ocean — changed rate | 2.3 mm/year | 5 years: 11.5 mm; 7 years: 16.1 mm; 10 years: 23 mm | 5 years: 11.5 mm; 7 years: 16.1 mm; 10 years: 23 mm | Match; no correction needed |

### Restored values and final runs

The five assigned values were restored to 28, 32, 37, 24, and 33. The annual
rate was restored to 1.5 millimeters per year. Final runs of both programs in
OnlineGDB completed with exit code 0 and produced:

`average.cpp`:

```text
Sum: 154
Average: 30.8
```

`ocean_levels.cpp`:

```text
After 5 years: 7.5 millimeters higher
After 7 years: 10.5 millimeters higher
After 10 years: 15 millimeters higher
```

As an additional check, both saved source files compiled separately with
`-std=c++17 -Wall -Wextra` without warnings. Their local outputs matched the
OnlineGDB results. The final sources were downloaded from OnlineGDB and renamed to the required
filenames. Both downloads matched the previously tested sources exactly. No
executables are included in the repository.

## 5. Code explanations

The following explanations are AI-assisted drafts for student review and
rewriting in the student's own words.

### Why do the five values and the average use double?

`double` stores numbers with a fractional part. The five assigned numbers
are whole numbers, but their average is 30.8. If the values and average used
`int`, the fractional part could be lost. Using `double` also follows the
assignment's requirement.

### Trace the assigned values through sum and average.

The program adds 28 and 32 to get 60, adds 37 to get 97, adds 24 to get 121,
and adds 33 to get 154. That total is stored in `sum`. It then divides
`sum` by 5 and stores 30.8 in `average`. Finally, `cout` displays the two
stored results.

### Why divide the completed sum instead of only the final value?

An average is the total of all five values divided by the count of five.
`sum / 5` divides the whole total. Writing
`value1 + value2 + value3 + value4 + value5 / 5` would divide only `value5`
because division happens before addition. For these values, that incorrect
expression would produce 127.6 instead of 30.8.

### How do the ocean calculations use the rate and years?

Each stored increase equals `ANNUAL_RATE` multiplied by its year count.
For example, `1.5 * 7` gives 10.5 millimeters after seven years. Multiplying
millimeters per year by years gives millimeters. This model assumes the
same rise each year.

### Why is the annual rate a good named constant?

The rate is fixed during a program run and reused in three calculations.
`const` prevents it from being changed accidentally, and `ANNUAL_RATE`
explains what the number means. If the assumption changes, the source has
one rate definition to update.

### Why store calculations before using cout?

Storing each answer makes the program easier to follow and inspect.
`sum`, `average`, and the three increase variables hold results that can
be checked separately from their printed labels. The output statements
then display existing results, following the course rule.

## 6. Repository files and run instructions

The repository contains these four files at its top level:

```text
average.cpp
ocean_levels.cpp
README.md
AI_REFLECTION.md
```

### OnlineGDB

1. Open https://www.onlinegdb.com/online_c++_compiler and select C++.
2. Open one program at a time and place its source in the editor.
3. Click Run and compare the output with the expected results above.
4. For temporary tests, change only the values or annual rate, run again,
   and compare the new output. Restore the assigned values and run again.
5. Download the actual `.cpp` files and use the required filenames.

Each file has its own `main` function. Run them separately; do not place
both programs in one compilation.

### Terminal alternative

From the repository folder:

```sh
g++ -std=c++17 -Wall -Wextra average.cpp -o average
./average
g++ -std=c++17 -Wall -Wextra ocean_levels.cpp -o ocean_levels
./ocean_levels
```

Upload readable source files, not executables or screenshots. Keep the
repository public until grading and any regrade requests are complete.

## 7. AI reflection

See `AI_REFLECTION.md` for tools used, a design decision, verification
results, and a learning reflection based on the student's comments about
Python, programming logic, and practicing C++ style.

## 8. Canvas submission

Submit the student's name, course section `CIS-165-W099`, the repository
URL, and the URL of the final commit containing all four files. Confirm
that the repository and final commit are readable in a private window
while signed out, and that `AI_REFLECTION.md` is in that commit.

Due: October 3, 2026, at 11:00 PM Eastern. The submitted commit is the
version that will be graded.
