/* f_0x101afb80 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Updates the object's cached value at offset 0x2c from the value returned by FUN_101af630, if it differs and FUN_101afb40 accepts it.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101afb80(Guest* g, uint32_t self)
{
    const uint32_t entry_esi = g->esi;
    const uint32_t entry_edi = g->edi;

    /* 101afb82: mov esi, ecx */
    g->esi = self;

    /* 101afb84: call 0x101af630 */
    /* Original leaves ecx = self and esi = self at this call. */
    g->ecx = self;
    uint32_t r1 = cow_thiscall_cdecl(g, COW_IMG(0x101af630u), self, 0u);

    /* 101afb89: mov edi, dword ptr [eax + 0x14] */
    const uint32_t edi = rd32(r1 + 0x14u);
    g->edi = edi;

    /* 101afb8c: mov eax, dword ptr [esi + 0x2c] */
    const uint32_t old = rd32(self + 0x2cu);

    /* 101afb8f: cmp eax, edi / 101afb91: je */
    if (old == edi)
    {
        /* 101afba7: pop edi */
        /* 101afba8: xor al, al */
        /* 101afbaa: pop esi */
        g->esi = entry_esi;
        g->edi = entry_edi;
        return (old & 0xFFFFFF00u);
    }

    /* 101afb93: push edi */
    /* 101afb94: mov ecx, esi */
    /* 101afb96: call 0x101afb40 */
    g->ecx = self;
    g->esi = self;
    g->edi = edi;
    g->eax = old;
    uint32_t r2 = cow_thiscall(g, COW_IMG(0x101afb40u), self, 1u, edi);

    /* 101afb9b: test al, al / 101afb9d: je */
    if ((r2 & 0xFFu) == 0u)
    {
        /* 101afba7: pop edi */
        /* 101afba8: xor al, al */
        /* 101afbaa: pop esi */
        g->esi = entry_esi;
        g->edi = entry_edi;
        return (r2 & 0xFFFFFF00u);
    }

    /* 101afb9f: mov dword ptr [esi + 0x2c], edi */
    wr32(self + 0x2cu, edi);

    /* 101afba2: pop edi */
    /* 101afba3: mov al, 1 */
    /* 101afba5: pop esi */
    g->esi = entry_esi;
    g->edi = entry_edi;
    return (r2 & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101afb80(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t result = cow_fn_101afb80(g, self);
    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
