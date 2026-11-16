/* f_0x1003cbf0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_1003cbf0(Guest* g)
{
    uint32_t eax;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);

    edx = in_edx;
L_1003cc01: ;
    eax = rd32(COW_IMG(0x1047d140u));
    esi = rd32(rd32(COW_IMG(0x1047d140u)) + 0xd50u);
L_1003cc0c: ;
    if (esi == 0u) goto L_1003cc51;
    g->eax = eax;
    g->edx = rd32(esi);
    t1 = rd32(esi);
    g->esp = sp0 - 0x14u;
    t2 = cow_thiscall(g, rd32(t1), esi, 0);
    t3 = g->edx;
    if (t2 != COW_IMG(0x1032ab34u))
    {
        eax = t2;
        edx = t3;
        goto L_1003cc41;
    }
    edx = t3;
    if (rd32(esi + 0x74u) != self)
    {
        eax = self;
        goto L_1003cc41;
    }
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t4 = cow_thiscall(g, COW_IMG(0x1003b6d0u), esi + 0x34u, 0);
    t5 = g->edx;
    if (t4 != arg1)
    {
        eax = t4;
        edx = t5;
        goto L_1003cc41;
    }
    edx = t5;
    edi = esi + 0x34u;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t6 = cow_thiscall(g, COW_IMG(0x1003b700u), edi, 0);
    t7 = g->edx;
    if (t6 == arg2)
    {
        eax = t6;
        goto L_1003cc46;
    }
    eax = t6;
    edx = t7;
L_1003cc41: ;
    esi = rd32(esi + 0xcu);
    goto L_1003cc0c;
L_1003cc46: ;
    g->edx = rd32(esi);
    t8 = rd32(esi);
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(t8 + 0x18u), esi, 1, 1u);
    t9 = g->edx;
    edx = t9;
    goto L_1003cc01;
L_1003cc51: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003cbf0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1003cbf0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
