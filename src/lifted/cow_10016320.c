/* f_0x10016320 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10016320(Guest* g)
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

    eax = in_eax;
    edx = in_edx;
    esi = COW_IMG(0x10456a00u);
L_10016326: ;
    if (rd32(esi) == 0u)
    {
        ecx = rd32(esi);
    }
    else
    {
        ecx = rd32(esi);
        g->eax = rd32(ecx);
        g->edx = edx;
        t1 = rd32(ecx);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, rd32(t1 + 0x18u), ecx, 1, 1u);
        t3 = g->ecx;
        t4 = g->edx;
        wr32(esi, 0u);
        eax = t2;
        ecx = t3;
        edx = t4;
    }
    if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x10456a28u))
    {
        esi = esi + 4u;
        goto L_10016326;
    }
    g->eax = eax;
    g->esp = sp0 - 4u;
    t5 = cow_fastcall(g, COW_IMG(0x100191b0u), ecx, edx, 0);
    t6 = g->edx;
    if (rd32(COW_IMG(0x103d3c64u)) == 0u)
    {
        eax = t5;
        edx = t6;
    }
    else
    {
        eax = t5;
        ecx = rd32(COW_IMG(0x103d3c64u));
        g->eax = eax;
        g->edx = rd32(ecx);
        t7 = rd32(ecx);
        g->esp = sp0;
        t8 = cow_thiscall(g, rd32(t7 + 0x18u), ecx, 1, 1u);
        t9 = g->edx;
        wr32(COW_IMG(0x103d3c64u), 0u);
        eax = t8;
        edx = t9;
    }
    if (rd32(COW_IMG(0x1045666cu)) != 0u)
    {
        ecx = rd32(COW_IMG(0x1045666cu));
        g->eax = rd32(ecx);
        g->edx = edx;
        t10 = rd32(ecx);
        g->esp = sp0;
        t11 = cow_thiscall(g, rd32(t10 + 0x18u), ecx, 1, 1u);
        t12 = g->edx;
        wr32(COW_IMG(0x1045666cu), 0u);
        eax = t11;
        edx = t12;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0;
    t13 = cow_thiscall(g, COW_IMG(0x10120200u), COW_IMG(0x104e1bf8u), 0);
    t14 = g->edx;
    g->edx = t14;
    cow_tailcall(g, COW_IMG(0x1015d9e0u), t13, COW_IMG(0x10621838u), t14);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10016320(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10016320(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
