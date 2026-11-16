/* f_0x101af0f0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101af0f0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
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
    const uint32_t in_edi = g->edi;

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 8u);
        edx = in_edx;
        edi = 8u;
L_101af104: ;
        g->edi = edi;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x101192e0u), rd32(self + 8u), 1, edi);
        t2 = g->edx;
        if ((int32_t)(edi + 1u) < 83)
        {
            eax = t1;
            edx = t2;
            edi = edi + 1u;
            goto L_101af104;
        }
        edx = t2;
        if (rd32(rd32(COW_IMG(0x10456a28u)) + 8u) != 0u)
        {
            ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        }
        else
        {
            eax = rd32(COW_IMG(0x10456a28u));
            g->edi = in_edi;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 4u;
            t3 = cow_thiscall(g, COW_IMG(0x101192e0u), rd32(self + 8u), 1, 4u);
            t4 = g->edx;
            g->edi = in_edi;
            g->edx = t4;
            t5 = cow_thiscall(g, COW_IMG(0x101192e0u), rd32(self + 8u), 1, 0x55u);
            t6 = g->edx;
            g->edi = in_edi;
            g->edx = t6;
            t7 = cow_thiscall(g, COW_IMG(0x101192e0u), rd32(self + 8u), 1, 0x56u);
            t8 = g->edx;
            g->edi = in_edi;
            g->edx = t8;
            t9 = cow_thiscall(g, COW_IMG(0x101192e0u), rd32(self + 8u), 1, 0x57u);
            t10 = g->edx;
            g->edi = in_edi;
            g->edx = t10;
            t11 = cow_thiscall(g, COW_IMG(0x101192e0u), rd32(self + 8u), 1, 1u);
            t12 = g->edx;
            g->edi = in_edi;
            g->edx = t12;
            t13 = cow_thiscall(g, COW_IMG(0x101192e0u), rd32(self + 8u), 1, 2u);
            t14 = g->edx;
            g->edi = in_edi;
            g->edx = t14;
            t15 = rd32(self + 8u);
            cow_thiscall(g, COW_IMG(0x101192e0u), t15, 1, 3u);
            t16 = g->ecx;
            t17 = g->edx;
            ecx = t16;
            edx = t17;
        }
        if (rd32(self + 0x30u) == 0u)
        {
            eax = rd32(self + 0x30u);
        }
        else
        {
            eax = rd32(self + 0x30u);
            g->eax = eax - 4u;
            g->esp = sp0 - 4u;
            t18 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, ecx, edx, 1, 1, eax - 4u);
            t19 = g->edx;
            eax = t18;
            edx = t19;
        }
        wr32(self + 0x30u, 0u);
    }
    g->edi = in_edi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101af0f0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101af0f0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
