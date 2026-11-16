/* f_0x100ae1e0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_100ae1e0(Guest* g)
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    wr8(COW_IMG(0x104896e4u), 0u);
    wr16(COW_IMG(0x104886d8u), (uint16_t)arg1);
    if ((uint16_t)arg1 < 0x7d0u)
    {
        if ((uint16_t)arg1 < 0x3e8u)
        {
            if ((uint16_t)arg1 < 0x100u)
            {
                g->eax = in_eax;
                g->esp = sp0 - 8u;
                t7 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x6bu);
                t8 = g->edx;
                eax = t7;
                edx = t8;
                edi = t7 + (uint16_t)arg1;
            }
            else
            {
                g->eax = in_eax;
                g->esp = sp0 - 8u;
                t5 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x6eu);
                t6 = g->edx;
                eax = t5;
                edx = t6;
                edi = t5 + (uint16_t)arg1 - 0x100u;
            }
        }
        else
        {
            g->eax = in_eax;
            g->esp = sp0 - 8u;
            t3 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x6cu);
            t4 = g->edx;
            eax = t3;
            edx = t4;
            edi = t3 + (uint16_t)arg1 - 0x3e8u;
        }
    }
    else
    {
        g->eax = in_eax;
        g->esp = sp0 - 8u;
        t1 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, in_edx, 1, 1, 0x6du);
        t2 = g->edx;
        eax = t1;
        edx = t2;
        edi = t1 + (uint16_t)arg1 - 0x7d0u;
    }
    if (rd32(COW_IMG(0x10487e88u)) != edi) goto L_100ae284;
    t9 = rd32(COW_IMG(0x10487e84u));
    wr32(COW_IMG(0x10489908u), t9);
    wr8(COW_IMG(0x104896e4u), 2u);
    return t9;
L_100ae284: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t10 = cow_thiscall(g, COW_IMG(0x101c4af0u), rd32(COW_IMG(0x10662dccu)), 1, edi);
    t11 = g->edx;
    t12 = rd32(COW_IMG(0x10662dccu));
    wr32(COW_IMG(0x104897f0u), t10);
    g->edx = t11;
    t13 = cow_thiscall(g, COW_IMG(0x101c4820u), t12, 6, edi, 0u, 0u, COW_IMG(0x104896e4u), COW_IMG(0x100ae2d0u), 0u);
    t14 = g->ecx;
    t15 = g->edx;
    if ((int32_t)t13 >= 0)
    {
        eax = t13;
    }
    else
    {
        eax = t13;
        ecx = t14;
        edx = t15;
        g->eax = eax;
        g->esp = sp0 - 0x10u;
        t16 = cow_stdcall(g, COW_IMG(0x10017d20u), 0);
        wr8(COW_IMG(0x104896e4u), 0xffu);
        eax = t16;
    }
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ae1e0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ae1e0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
