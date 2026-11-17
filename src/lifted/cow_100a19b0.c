/* f_0x100a19b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Calls FUN_100e47a0 with a pointer to a local slot, then returns 1 or 0 based on its low byte and a table/flag comparison involving the stack argument.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=1 */
uint32_t cow_fn_100a19b0(Guest* g, uint32_t sp0, uint32_t arg)
{
    const uint32_t local = cow_frame(g, sp0, 4u);

    /* Original: push ecx; lea eax,[esp]; push eax; call ...
       The local slot initially contains the entry ecx. */
    wr32(local, g->ecx);

    const uint32_t callee_eax = cow_cdecl(g, COW_IMG(0x100e47a0u), 1u, local);

    /* Preserve the callee's edx for paths that do not modify it. */
    const uint32_t edx_after_call = g->edx;

    if (((uint8_t)callee_eax) == 0u)
    {
        /* mov al, 1; pop ecx; ret
           Only al is written, upper eax remains from the callee. */
        g->edx = edx_after_call;
        return (callee_eax & 0xFFFFFF00u) | 1u;
    }

    /* mov eax, dword ptr [esp + 8] */
    uint32_t eax = arg;

    /* cmp ax, 0x146; jae false_path
       Unsigned 16-bit comparison. */
    if ((uint16_t)eax >= 0x146u)
    {
        /* xor al, al; pop ecx; ret
           Only al is cleared, upper eax remains from the stack argument. */
        g->edx = edx_after_call;
        return eax & 0xFFFFFF00u;
    }

    /* mov ecx, dword ptr [esp] */
    const uint32_t ecx = rd32(local);

    /* and eax, 0xffff */
    eax &= 0xFFFFu;

    /* mov dl, byte ptr [ecx + 1] */
    uint32_t edx = (edx_after_call & 0xFFFFFF00u) | (uint32_t)rd8(ecx + 1u);

    /* mov cl, byte ptr [eax + 0x1035b950] */
    const uint8_t cl = rd8(COW_IMG(0x1035b950u) + eax);

    /* shr edx, 3; and edx, 3 */
    edx >>= 3;
    edx &= 3u;

    /* cmp dl, cl; jle false_path
       Signed 8-bit comparison. */
    if ((int8_t)(uint8_t)edx <= (int8_t)cl)
    {
        /* xor al, al; pop ecx; ret
           eax currently has only its low 16 bits from arg. */
        g->edx = edx;
        return eax & 0xFF00u;
    }

    /* mov al, 1; pop ecx; ret */
    g->edx = edx;
    return (eax & 0xFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a19b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t arg = rd32(sp0 + 4u);
    const uint32_t result = cow_fn_100a19b0(g, sp0, arg);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
