/* f_0x1003c7d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=f64 stack_args=2 */
void cow_fn_1003c7d0(Guest* g)
{
    double d13;
    double d14;
    uint32_t eax;
    uint32_t ebx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    double x0;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((rd8(arg1) & 2u) != 0u)
    {
        eax = in_eax;
        edx = in_edx;
        ebx = in_ebx & 0xffffff00u;
    }
    else
    {
        g->edx = in_edx;
        g->esp = sp0 - 0xcu;
        t1 = cow_thiscall(g, COW_IMG(0x1003b8b0u), self, 0);
        t2 = g->edx;
        if (t1 == 0u)
        {
            eax = t1;
            edx = t2;
            ebx = in_ebx & 0xffffff00u;
        }
        else
        {
            edx = t2;
            g->esp = sp0 - 0xcu;
            t3 = cow_thiscall(g, COW_IMG(0x1003b8b0u), self, 0);
            g->edx = rd32(t3);
            t4 = rd32(t3);
            t5 = cow_thiscall(g, rd32(t4 + 0x304u), t3, 0);
            t6 = g->edx;
            eax = t5;
            edx = t6;
            ebx = (in_ebx & 0xffffff00u) | (uint8_t)t5;
        }
    }
    if ((rd8(arg1) & 4u) == 0u)
    {
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        t7 = cow_thiscall(g, COW_IMG(0x1003b900u), self, 0);
        t8 = g->edx;
        if (t7 == 0u)
        {
            eax = t7;
            edx = t8;
        }
        else
        {
            edx = t8;
            g->esp = sp0 - 0xcu;
            t9 = cow_thiscall(g, COW_IMG(0x1003b900u), self, 0);
            g->edx = rd32(t9);
            t10 = rd32(t9);
            t11 = cow_thiscall(g, rd32(t10 + 0x304u), t9, 0);
            t12 = g->edx;
            eax = t11;
            edx = t12;
            ebx = (ebx & 0xffffff00u) | (uint8_t)(ebx | t11);
        }
    }
    if (!(rd8(arg1) & 1u))
    {
        eax = (eax & 0xffffff00u) | rd8(arg1);
        x0 = (double)rdf32(COW_IMG(0x1032961cu));
        goto L_1003c84c;
    }
    eax = (eax & 0xffffff00u) | rd8(arg1);
    x0 = (double)rdf32(COW_IMG(0x1032961cu));
    if ((uint8_t)ebx == 0u) goto L_1003c846;
    d13 = (double)rdf32(sp0 + 8u);
    if (d13 == (double)rdf32(COW_IMG(0x103295d8u))) goto L_1003c846;
L_1003c842: ;
    x0 = (double)rdf32(sp0 + 8u);
L_1003c846: ;
    g->edx = edx;
    fpush(g, x0);
    return;
L_1003c84c: ;
    if ((uint8_t)ebx != 0u) goto L_1003c846;
    d14 = (double)rdf32(sp0 + 8u);
    if (d14 != (double)rdf32(COW_IMG(0x103295d8u))) goto L_1003c842;
    g->edx = edx;
    fpush(g, (double)rdf32(COW_IMG(0x10329a08u)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1003c7d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1003c7d0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
