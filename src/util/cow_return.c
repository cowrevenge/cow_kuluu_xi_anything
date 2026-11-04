/* The shared body for entries whose generated original is a bare `ret`.

   f_100035a0, f_1000bb10, f_1000bb20, ... all compile to one instruction: `ret`. They compute
   nothing, touch no memory and return eax untouched - MSVC /OPT:ICF folds identical leaves and the
   entry table points at each of them. The faithful conversion is therefore a function that does
   nothing, and the honest thing to do about that is to write it once, name it, and let every such
   entry's adapter call it, rather than mint four copies of the same empty body.

   This is not a stub: cowdiff compares it against the generated original per entry (return registers,
   callee-saved, esp, memory, calls) and the gate allows the empty body only because
   `cowdiff.py --count` reports two instruction sites - the entry and the ret - and only after the ledger names the owner: the vtable slot it fills, the call site that reaches it, or the data table that holds it.
*/
#include "cow.h"

void cow_return_immediate(void)
{
    /* the original is a bare `ret`: there is nothing here to say */
}

/* `mov al, 1` then `ret`: the entry answers "yes", and nothing else.
   The original writes only the low byte of eax, so the top three bytes are exactly what the caller
   left behind - which is why this takes eax instead of returning a literal 1. */
uint32_t cow_always_true(uint32_t eax)
{
    return (eax & ~0xffu) | 1u;
}

/* `xor eax, eax` then `ret`: the entry returns 0.
   The xor clears the whole register (flags are not compared by cowdiff), so this is exactly a 0 in eax
   and nothing else - the shape MSVC emits for a virtual method whose body is `return 0;`. */
uint32_t cow_return_zero(void)
{
    return 0u;
}

/* `xor al, al` then `ret`: the entry answers "no".
   Only the low byte is cleared, so the top three bytes of eax come back as the caller left them - the
   faithful body takes eax for that reason. */
uint32_t cow_always_false(uint32_t eax)
{
    return eax & ~0xffu;
}

/* `mov eax, ecx` then `ret`: the entry returns the object it was called on.
   thiscall keeps the object in ecx, so this is the body MSVC emits for `T* clone_target() { return this; }`
   and for the accessor half of a getter/setter pair. ecx is not dereferenced, so nothing is assumed about
   the object's layout. */
/* `mov eax, imm32` then `ret`: the entry answers one fixed number and nothing else.
   The adapter hands the immediate in - it is the only per-entry difference between these, so the
   meaning ("return that constant") is said once here instead of in a hundred identical files. */
uint32_t cow_return_value(uint32_t v)
{
    return v;
}

/* `mov eax, dword ptr [esp + 4]` then `inc eax` then `ret`: the entry's answer is the caller's first
   argument plus one. A cdecl leaf that reads its stack argument and counts it up - MSVC's habit for a
   trivial `return arg + 1;`. */
uint32_t cow_increment_argument(uint32_t n)
{
    return n + 1u;
}

uint32_t cow_return_object(uint32_t ecx)
{
    return ecx;
}
