/* f_0x1025b180 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1025b180(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x28u, in_esi, in_ebx);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1025b1ea;
    }
    edx = t2;
    esi = t1;
    wr32(esi + 4u, 0u);
    wr32(esi + 8u, 7u);
    wr32(esi, COW_IMG(0x1033cee0u));
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t3 = cow_thiscall(g, COW_IMG(0x10258ab0u), arg1, 0);
    t4 = g->edx;
    wr32(esi + 0xcu, t3);
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x1018d2b0u), esi + 0x18u, 0);
    t5 = g->edx;
    wr32(esi + 0x24u, arg1);
    wr32(esi, COW_IMG(0x1033cee4u));
    g->edx = t5;
    t6 = cow_thiscall(g, COW_IMG(0x10258ad0u), arg1, 0);
    t7 = g->edx;
    wr32(esi + 0x10u, t6);
    g->edx = t7;
    t8 = cow_thiscall(g, COW_IMG(0x10258ae0u), arg1, 0);
    t9 = g->edx;
    wr32(esi + 0x14u, t8);
    g->edx = t9;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1025b120u), self, 1, esi);
    t10 = g->edx;
    g->edx = t10;
    return;
L_1025b1ea: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1025b120u), self, 1, 0u);
    t11 = g->edx;
    g->edx = t11;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025b180(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025b180(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
