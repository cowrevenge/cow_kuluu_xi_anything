/* f_0x101afbb0 - CONVEYOR UNIT. COW_OWNER: conveyor   station: draft   attempt: 1

   Updates the object's cached value at offset 0x2c from FUN_101af630 if it changed and FUN_101afb40 accepts it.

   Written by the local model from the original's instructions and kept ONLY because judge v2
   proved it (tools/cow/conveyor.py, docs/cow/SYSTEM2.md). This is not a reading with evidence: the
   summary above and every name below are the model's guess. Naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101afbb0(Guest* g, uint32_t self)
{
    uint32_t r630;
    uint32_t edi;
    uint32_t old;
    uint32_t rb40;

    /* Original has esi = ecx before the first call. */
    g->esi = self;

    /* 101afbb4: call 0x101af630
     * No stack arguments; ecx is self.  The callee returns with bare ret,
     * so the caller pops (none).
     */
    r630 = cow_thiscall_cdecl(g, COW_IMG(0x101af630u), self, 0u);

    /* 101afbb9: mov edi, dword ptr [eax + 0x18] */
    edi = rd32(r630 + 0x18u);

    /* 101afbbc: mov eax, dword ptr [esi + 0x2c] */
    old = rd32(self + 0x2cu);

    /* 101afbbf: cmp eax, edi / 101afbc1: je */
    if (old == edi)
    {
        /* 101afbd7: pop edi; xor al, al; pop esi; ret
         * eax currently contains old; only al is cleared.
         */
        return old & 0xFFFFFF00u;
    }

    /* 101afbc3: push edi
     * 101afbc4: mov ecx, esi
     * 101afbc6: call 0x101afb40
     *
     * This is a thiscall with one stack argument (edi), callee pops 4.
     * Preserve the register state the original has at the call site.
     */
    g->esi = self;
    g->edi = edi;
    g->eax = old;

    rb40 = cow_thiscall(g, COW_IMG(0x101afb40u), self, 1u, edi);

    /* 101afbcb: test al, al / 101afbcd: je */
    if ((uint8_t)rb40 == 0u)
    {
        /* 101afbd7: pop edi; xor al, al; pop esi; ret
         * eax currently contains rb40; only al is cleared.
         */
        return rb40 & 0xFFFFFF00u;
    }

    /* 101afbcf: mov dword ptr [esi + 0x2c], edi */
    wr32(self + 0x2cu, edi);

    /* 101afbd3: mov al, 1
     * eax currently contains rb40; only al is set to 1.
     */
    return (rb40 & 0xFFFFFF00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101afbb0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;

    const uint32_t saved_ebx = g->ebx;
    const uint32_t saved_esi = g->esi;
    const uint32_t saved_edi = g->edi;
    const uint32_t saved_ebp = g->ebp;

    const uint32_t result = cow_fn_101afbb0(g, self);

    g->ebx = saved_ebx;
    g->esi = saved_esi;
    g->edi = saved_edi;
    g->ebp = saved_ebp;

    g->esp = sp0;
    rt_return(g, result, 0u);
}
/* COW_ADAPTER END */
