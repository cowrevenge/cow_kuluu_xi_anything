/* f_0x10269f10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_10269f10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    if (arg1 != 0u) goto L_10269f2b;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10269cb0u), self, 1, arg2);
    return;
L_10269f2b: ;
    if (arg1 != rd32(self)) goto L_10269f40;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x10269d20u), self, 1, arg2);
    return;
L_10269f40: ;
    if (rd32(self + 0x14u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_10269f58;
    }
    eax = rd32(self + 0x14u);
    t1 = rd32(eax + 4u);
    t2 = rd32(self + 0x10u);
    wr32(self + 0x14u, t1);
    wr32(self + 0x10u, t2 - 1u);
    if (eax != 0u) goto L_10269f6b;
    ecx = t2 - 1u;
    edx = t1;
L_10269f58: ;
    g->esp = sp0;
    t3 = cow_cdecl(g, COW_IMG(0x10311bfbu), 3, 0xcu, in_edi, in_esi);
    if (t3 != 0u)
    {
        eax = t3;
        goto L_10269f6b;
    }
    return;
L_10269f6b: ;
    wr32(eax + 8u, arg2);
    t4 = rd32(arg1);
    wr32(eax, t4);
    wr32(eax + 4u, arg1);
    wr32(arg1, eax);
    wr32(t4 + 4u, eax);
    t5 = rd32(self + 8u) + 1u;
    wr32(self + 8u, t5);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10269f10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10269f10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
