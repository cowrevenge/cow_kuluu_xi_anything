/* f_0x1022f540 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1022f540(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10668ed8u)) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(COW_IMG(0x10668ed8u));
        g->eax = rd32(ecx);
        g->edx = in_edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1), ecx, 1, 1u);
        t3 = g->edx;
        wr32(COW_IMG(0x10668ed8u), 0u);
        eax = t2;
        edx = t3;
    }
    if (rd32(COW_IMG(0x10668ed4u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668ed4u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t4 = rd32(ecx);
        g->esp = sp0 - 4u;
        t5 = cow_thiscall(g, rd32(t4), ecx, 1, 1u);
        t6 = g->edx;
        wr32(COW_IMG(0x10668ed4u), 0u);
        eax = t5;
        edx = t6;
    }
    if (rd32(COW_IMG(0x10668eccu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668eccu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t7 = rd32(ecx);
        g->esp = sp0 - 4u;
        t8 = cow_thiscall(g, rd32(t7), ecx, 1, 1u);
        t9 = g->edx;
        wr32(COW_IMG(0x10668eccu), 0u);
        eax = t8;
        edx = t9;
    }
    if (rd32(COW_IMG(0x10668ed0u)) != 0u)
    {
        ecx = rd32(COW_IMG(0x10668ed0u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t10 = rd32(ecx);
        g->esp = sp0 - 4u;
        t11 = cow_thiscall(g, rd32(t10), ecx, 1, 1u);
        t12 = g->edx;
        wr32(COW_IMG(0x10668ed0u), 0u);
        eax = t11;
        edx = t12;
    }
    esi = COW_IMG(0x10668380u);
L_1022f5a0: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t13 = cow_thiscall(g, COW_IMG(0x1022ee90u), esi, 0);
    t14 = g->edx;
    if ((int32_t)(esi + 0x94u) < (int32_t)COW_IMG(0x106689dcu))
    {
        eax = t13;
        edx = t14;
        esi = esi + 0x94u;
        goto L_1022f5a0;
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022f540(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1022f540(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
