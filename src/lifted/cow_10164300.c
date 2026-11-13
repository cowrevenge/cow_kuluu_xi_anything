/* f_0x10164300 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Increments the 16-bit field at self+0x14 into (self+8)->0x4c, then calls FUN_10118170 with that stored word (full eax) and this=(self+8).

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=strict stack_args=0 */
uint32_t cow_fn_10164300(Guest* g, uint32_t self)
{
    uint32_t edx;
    uint32_t new_self;
    uint32_t arg;

    /* 10164300: mov ax, word ptr [ecx + 0x14] */
    g->eax = (g->eax & 0xFFFF0000u) | (uint32_t)rd16(self + 0x14u);

    /* 10164304: mov edx, dword ptr [ecx + 8] */
    edx = rd32(self + 8u);
    g->edx = edx;

    /* 10164307: inc ax */
    g->eax = (g->eax & 0xFFFF0000u) | (uint32_t)(uint16_t)((uint16_t)g->eax + 1u);

    /* 10164309: mov word ptr [edx + 0x4c], ax */
    wr16(edx + 0x4Cu, (uint16_t)g->eax);

    /* 1016430d: mov ecx, dword ptr [ecx + 8] */
    new_self = rd32(self + 8u);
    g->ecx = new_self;

    /* 10164310: mov ax, word ptr [ecx + 0x4c] */
    g->eax = (g->eax & 0xFFFF0000u) | (uint32_t)rd16(new_self + 0x4Cu);

    /* 10164314: push eax */
    arg = g->eax;

    /* 10164315: call 0x10118170 */
    cow_thiscall(g, COW_IMG(0x10118170u), new_self, 1u, arg);

    /* 1016431a: ret */
    return g->eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10164300(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t result = cow_fn_10164300(g, g->ecx);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
