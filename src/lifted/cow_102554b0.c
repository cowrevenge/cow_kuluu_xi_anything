/* f_0x102554b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 3

   normalizes the argument, calls the thiscall helper, then tail-jumps to the shared epilogue.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_102554b0(Guest* g, uint32_t self, uint32_t param, uint32_t sp0)
{
    uint32_t esi = param;
    uint32_t v = esi | 0x1Fu;

    /* cmp esi, -3 / jbe: unsigned compare against 0xfffffffd */
    if (v > 0xFFFFFFFDu)
        v = param;

    /*
     * The original function has a SEH prologue and saves ebx/esi/edi below ebp.
     * The tail jump enters a shared epilogue that restores those saved values.
     * Recreate enough of the frame for that epilogue to observe the same stack.
     */
    const uint32_t ebp = sp0 - 4u;
    const uint32_t frame = cow_frame(g, sp0, 44u);

    wr32(ebp - 0x04u, 0u);                 /* [ebp-4] */
    wr32(ebp - 0x10u, frame);              /* [ebp-0x10], esp after saved-reg pushes */
    wr32(ebp - 0x14u, self);               /* [ebp-0x14] */
    wr32(ebp - 0x18u, v);                  /* [ebp-0x18] */

    /* Values pushed by the original prologue, in decreasing address order. */
    wr32(frame + 0x00u, g->edi);           /* saved edi */
    wr32(frame + 0x04u, g->esi);           /* saved esi */
    wr32(frame + 0x08u, g->ebx);           /* saved ebx */
    wr32(frame + 0x0Cu, 0u);               /* [ebp-0x1c], filled after the helper call */
    wr32(frame + 0x10u, v);                /* [ebp-0x18] */
    wr32(frame + 0x14u, self);             /* [ebp-0x14] */
    wr32(frame + 0x18u, frame);            /* [ebp-0x10] */
    wr32(frame + 0x1Cu, rd32(g->fs_base)); /* saved fs:[0] */
    wr32(frame + 0x20u, COW_IMG(0x10327540u)); /* SEH handler */
    wr32(frame + 0x24u, 0xFFFFFFFFu);      /* SEH marker */
    wr32(frame + 0x28u, g->ebp);           /* saved ebp */

    /*
     * call 0x10255820
     * Arguments are pushed 0 then (esi+2); thiscall passes ecx=self.
     * The callee is stdcall/thiscall and pops 8 bytes.
     */
    cow_thiscall(g, COW_IMG(0x10255820u), self, 2, v + 2u, 0u);

    /* mov dword ptr [ebp - 0x1c], eax */
    wr32(frame + 0x0Cu, g->eax);
    wr32(ebp - 0x1Cu, g->eax);

    /*
     * jmp 0x1025552b
     *
     * The epilogue is reached with the original callee-saved registers still on
     * the stack and restores them before its ret 4.  Set the guest state to the
     * state observed immediately before the original tail jump, call the target,
     * then force the restored callee-saved registers to the values the original
     * epilogue will leave in them.
     */
    g->ebx = self;
    g->esi = v;
    g->ebp = ebp;
    g->esp = frame;

    cow_stdcall(g, COW_IMG(0x1025552bu), 1, param);

    /* Shared epilogue restores the registers saved by this function's prologue. */
    g->ebx = rd32(frame + 0x08u);
    g->esi = rd32(frame + 0x04u);
    g->edi = rd32(frame + 0x00u);
    g->ebp = rd32(frame + 0x28u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102554b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t param = rd32(sp0 + 4u);

    cow_fn_102554b0(g, g->ecx, param, sp0);

    g->esp = sp0;
    rt_return(g, g->eax, 4u);   /* tail target ends in ret 4 */
}
/* COW_ADAPTER END */
