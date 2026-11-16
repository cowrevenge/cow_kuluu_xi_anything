/* f_0x1025a470 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_1025a470(Guest* g)
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
        goto L_1025a4bd;
    }
    edx = t2;
    esi = t1;
    wr32(esi + 4u, 0u);
    wr32(esi + 8u, 5u);
    wr32(esi, COW_IMG(0x1033ceccu));
    g->eax = arg1;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall(g, COW_IMG(0x1018d2d0u), esi + 0xcu, 1, arg1);
    t4 = g->edx;
    wr32(esi, COW_IMG(0x1033ced8u));
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10259ee0u), self, 1, esi);
    t6 = g->ecx;
    t7 = g->edx;
    cow_thiscall(g, COW_IMG(0x10259f40u), t6, 0);
    return;
L_1025a4bd: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x10259ee0u), self, 1, 0u);
    t9 = g->ecx;
    t10 = g->edx;
    cow_thiscall(g, COW_IMG(0x10259f40u), t9, 0);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1025a470(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1025a470(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
