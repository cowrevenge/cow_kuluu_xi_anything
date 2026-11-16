/* f_0x1025afd0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=4 */
void cow_fn_1025afd0(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg4 = rd32(g->esp + 0x10u);
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (arg2 != 0xffffffffu) goto L_1025afe7;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1025aab0u), self, 0);
    t1 = g->edx;
    g->edx = t1;
    return;
L_1025afe7: ;
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x28u, in_esi, in_edi);
    t3 = g->edx;
    if (t2 == 0u)
    {
        eax = t2;
        edx = t3;
        goto L_1025b045;
    }
    esi = t2;
    wr32(esi + 0x14u, arg4);
    wr32(esi + 4u, 0u);
    wr32(esi + 8u, 7u);
    wr32(esi, COW_IMG(0x1033cee0u));
    wr32(esi + 0xcu, arg1);
    wr32(esi + 0x10u, arg2);
    g->esp = sp0 - 0xcu;
    t4 = cow_fastcall(g, COW_IMG(0x1018d2d0u), esi + 0x18u, arg3, 1, arg3);
    t5 = g->edx;
    wr32(esi + 0x24u, 0u);
    wr32(esi, COW_IMG(0x1033cee4u));
    g->edx = t5;
    cow_thiscall(g, COW_IMG(0x1025b120u), self, 1, esi);
    t6 = g->edx;
    g->edx = t6;
    return;
L_1025b045: ;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1025b120u), self, 1, 0u);
    t7 = g->edx;
    g->edx = t7;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025afd0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025afd0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
