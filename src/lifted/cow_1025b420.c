/* f_0x1025b420 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1025b420(Guest* g)
{
    uint32_t eax;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x18u, in_edi, in_esi);
    t2 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_1025b46d;
    }
    edx = t2;
    esi = t1;
    wr32(esi + 4u, 0u);
    wr32(esi + 8u, 9u);
    wr32(esi, COW_IMG(0x1033cee0u));
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x1018d2d0u), esi + 0xcu, 1, arg1);
    t4 = g->edx;
    wr32(esi, COW_IMG(0x1033cefcu));
    g->edx = t4;
    cow_thiscall(g, COW_IMG(0x1025a880u), self, 1, esi);
    t5 = g->ecx;
    t6 = g->edx;
    g->edx = t6;
    cow_thiscall(g, COW_IMG(0x1025aab0u), t5, 0);
    t7 = g->edx;
    g->edx = t7;
    return;
L_1025b46d: ;
    g->edx = edx;
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x1025a880u), self, 1, 0u);
    t8 = g->ecx;
    t9 = g->edx;
    g->edx = t9;
    cow_thiscall(g, COW_IMG(0x1025aab0u), t8, 0);
    t10 = g->edx;
    g->edx = t10;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025b420(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025b420(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
