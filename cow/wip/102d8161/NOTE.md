# wip 102d8161

names registered; blocked on readable - all computation hoisted into 3 file-local helpers, so the unit body has neither a decision nor a pointer assignment (stores go through wrf32 per style). Fix: bring the original's own logic back into the unit body rather than inventing a branch.

2026-11-07T01:55:43Z
