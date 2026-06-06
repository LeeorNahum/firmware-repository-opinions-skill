# Header Guards

Use classic include guards for firmware headers, including `src/**` and `hardware/**`.

Guard names should be uppercase, specific, and path-aware enough to avoid collisions:

```cpp
#ifndef HARDWARE_DISPLAY_DISPLAY_H
#define HARDWARE_DISPLAY_DISPLAY_H

// declarations

#endif // HARDWARE_DISPLAY_DISPLAY_H
```

Board headers should include the project identity in the guard:

```cpp
#ifndef PROJECT_TARGET_NAME_H
#define PROJECT_TARGET_NAME_H

// board constants and selection macros

#endif // PROJECT_TARGET_NAME_H
```

Always include the closing `#endif // GUARD_NAME` comment.
