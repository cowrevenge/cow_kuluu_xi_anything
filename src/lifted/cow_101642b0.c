/* f_0x101642b0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Increments the 16-bit field at [self+0x14] into [self+8]+0x4c, then calls FUN_10118170 with the full 32-bit value read back from that field.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_101642b0(Guest* g, uint32_t self)
{
    uint32_t eax = g->eax;
    uint32_t edx;
    uint32_t ecx;

    /* 101642b0: mov ax, word ptr [ecx + 0x14] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)rd16(self + 0x14u);

    /* 101642b4: mov edx, dword ptr [ecx + 8] */
    edx = rd32(self + 8u);

    /* 101642b7: inc ax */
    {
        uint16_t a = (uint16_t)eax;
        uint16_t r = (uint16_t)(a + 1u);
        eax = (eax & 0xFFFF0000u) | (uint32_t)r;
    }

    /* 101642b9: mov word ptr [edx + 0x4c], ax */
    wr16(edx + 0x4Cu, (uint16_t)eax);

    /* 101642bd: mov ecx, dword ptr [ecx + 8] */
    ecx = rd32(self + 8u);

    /* 101642c0: mov ax, word ptr [ecx + 0x4c] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)rd16(ecx + 0x4Cu);

    /* Prepare registers for the call exactly as the original has them at 101642c5. */
    g->eax = eax;
    g->edx = edx;
    g->ecx = ecx;

    /* 101642c4: push eax
       101642c5: call 0x10118170
       The callee ends in ret 4, so it pops the one stack argument.
       ecx is already the value used as `this` by the original. */
    cow_thiscall(g, COW_IMG(0x10118170u), ecx, 1u, eax);

    /* 101642ca: ret */
    g->edx = g->edx;
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101642b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_101642b0(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
