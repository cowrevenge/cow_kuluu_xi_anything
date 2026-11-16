/* f_0x1028bc10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1028bc10(Guest* g)
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;

    edx = in_edx;
    esi = 0x968u;
L_1028bc19: ;
    if (rd32(esi + rd32(COW_IMG(0x1099d200u))) != 0u)
    {
        eax = rd32(esi + rd32(COW_IMG(0x1099d200u)));
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
    }
    t1 = rd32(COW_IMG(0x1099d200u));
    wr32(esi + t1, 0u);
    wr32(esi + rd32(COW_IMG(0x1099d200u)) + 8u, 0u);
    if ((int32_t)(esi + 4u) < 2416)
    {
        edx = t1;
        esi = esi + 4u;
        goto L_1028bc19;
    }
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x958u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0x958u);
        ecx = rd32(COW_IMG(0x1099d200u));
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
    }
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x958u, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x95cu, 0u);
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x960u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0x960u);
        edx = rd32(COW_IMG(0x1099d200u));
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), rd32(eax), 1, eax);
    }
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x960u, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x964u, 0u);
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x988u) != 0u)
    {
        eax = rd32(rd32(COW_IMG(0x1099d200u)) + 0x988u);
        ecx = rd32(COW_IMG(0x1099d200u));
        g->esp = sp0 - 8u;
        cow_thiscall(g, rd32(rd32(eax) + 8u), ecx, 1, eax);
    }
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x988u, 0u);
    t2 = rd32(COW_IMG(0x1099d200u));
    wr32(t2 + 0x98cu, 0u);
    if (rd32(rd32(COW_IMG(0x1099d200u)) + 0x994u) == 0u)
    {
        eax = rd32(COW_IMG(0x1099d200u));
        goto L_1028bd03;
    }
    eax = rd32(COW_IMG(0x1099d200u));
    ecx = t2;
    t3 = rd32(eax + 0x990u);
    g->edx = rd32(t3);
    t4 = rd32(t3);
    g->esp = sp0 - 8u;
    cow_thiscall(g, rd32(t4 + 8u), ecx, 1, t3);
    t5 = g->edx;
    t6 = rd32(COW_IMG(0x1099d200u));
    wr32(t6 + 0x990u, 0u);
    wr32(rd32(COW_IMG(0x1099d200u)) + 0x994u, 0u);
    g->edx = t5;
    return t6;
L_1028bd03: ;
    wr32(eax + 0x990u, 0u);
    t7 = rd32(COW_IMG(0x1099d200u));
    wr32(t7 + 0x994u, 0u);
    g->edx = t7;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1028bc10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1028bc10(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
