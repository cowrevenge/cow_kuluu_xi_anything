/* f_0x10081ac0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls a helper to obtain a pointer; if non-null, calls a thiscall method with that pointer as `this` and the original `this` as the sole stack argument, otherwise tail-calls a fastcall helper with the

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10081ac0(Guest* g, uint32_t self)
{
    uint32_t r;

    /* 10081ac0: push esi
       10081ac1: mov esi, ecx
       The pushed esi is dead after the function returns, so only the value is kept. */
    const uint32_t esi = self;

    /* 10081ac3: call 0x10085220
       ecx is still the original `this` on entry, matching the original register state. */
    g->ecx = self;
    r = cow_cdecl(g, COW_IMG(0x10085220u), 0u);

    /* 10081ac8: test eax, eax
       10081aca: je 0x10081ad6 */
    if (r != 0u)
    {
        /* 10081acc: push esi
           10081acd: mov ecx, eax
           10081acf: call 0x10081b30
           10081ad4: pop esi
           10081ad5: ret

           The callee is __thiscall and ends in `ret 4`, so it receives ecx = eax
           and one stack argument, the saved esi. */
        cow_thiscall(g, COW_IMG(0x10081b30u), r, 1u, esi);

        /* eax and edx are whatever the callee left in them. */
        g->edx = g->edx;
        return g->eax;
    }

    /* 10081ad6: mov ecx, esi
       10081ad8: pop esi
       10081ad9: jmp 0x10081ae0

       Tail call to FUN_10081ae0.  It is __fastcall with one register argument in ecx.
       edx is not an argument here, so preserve the current edx exactly as the original
       would carry it into the tail call. */
    cow_fastcall(g, COW_IMG(0x10081ae0u), esi, g->edx, 0u);

    /* The tail callee returns to this function's caller.  Its `ret` is bare, so
       rt_return pops 0 bytes.  eax/edx are whatever the tail callee left. */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10081ac0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10081ac0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
