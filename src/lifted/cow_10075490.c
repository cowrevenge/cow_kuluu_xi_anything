/* f_0x10075490 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10075490(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x1047d158u)) == 0u)
    {
        ecx = rd32(COW_IMG(0x1047d158u));
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x1047d158u));
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(ecx) + 0x18u), ecx, 1, 1u);
        t1 = g->ecx;
        t2 = g->edx;
        ecx = t1;
        edx = t2;
    }
    esi = 0u;
L_100754a7: ;
    if (rd32(COW_IMG(0x1047d168u) + esi) != 0u)
    {
        eax = rd32(COW_IMG(0x1047d168u) + esi);
        g->edx = edx;
        t3 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t3 + 8u), t3, 1, eax);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(COW_IMG(0x1047d168u) + esi, 0u);
        ecx = t4;
        edx = t5;
    }
    if (rd32(COW_IMG(0x1047d15cu) + esi) != 0u)
    {
        eax = rd32(COW_IMG(0x1047d15cu) + esi);
        g->edx = rd32(eax);
        t6 = rd32(eax);
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(t6 + 8u), ecx, 1, eax);
        t7 = g->ecx;
        t8 = g->edx;
        wr32(COW_IMG(0x1047d15cu) + esi, 0u);
        ecx = t7;
        edx = t8;
    }
    if ((int32_t)(esi + 4u) < 12)
    {
        esi = esi + 4u;
        goto L_100754a7;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10075490(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10075490(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
