/* f_0x10244870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10244870(Guest* g)
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
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(arg1 + 8u);
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x101c4d20u), rd32(COW_IMG(0x10662dccu)), in_edx, 3, t1, COW_IMG(0x10244900u), arg1);
    t2 = g->edx;
    if (rd32(arg1 + 4u) != 0u)
    {
        eax = rd32(arg1 + 4u);
        edx = t2;
        goto L_10244895;
    }
    eax = rd32(arg1 + 4u);
    return eax & 0xffffff00u;
L_10244895: ;
    if (rd32(arg1 + 0x10u) != 0u)
    {
        ecx = rd32(arg1 + 0x10u);
    }
    else
    {
        ecx = rd32(arg1 + 0x10u);
        g->esp = sp0 - 4u;
        t3 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 1, eax);
        t4 = g->ecx;
        t5 = g->edx;
        wr32(arg1 + 0x10u, t3);
        ecx = t4;
        edx = t5;
    }
    if (rd32(arg1 + 0xcu) != 0u)
    {
        eax = rd32(arg1 + 0xcu);
    }
    else
    {
        eax = rd32(arg1 + 0xcu);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t6 = cow_cdecl(g, COW_IMG(0x1002c890u), 1, 0x18u);
        t7 = g->edx;
        if (t6 == 0u)
        {
            eax = t6;
            edx = t7;
            edi = 0u;
        }
        else
        {
            edx = t7;
            edi = t6;
            t8 = rd32(arg1 + 4u);
            t9 = rd32(arg1 + 0x10u);
            wr32(edi, COW_IMG(0x1033cb80u));
            g->eax = t8;
            g->edx = edx;
            g->esp = sp0 - 8u;
            t10 = cow_thiscall(g, COW_IMG(0x102117b0u), edi, 3, t9, t8, 0u);
            t11 = g->edx;
            eax = t10;
            edx = t11;
        }
        wr32(arg1 + 0xcu, edi);
    }
    t12 = rd32(arg1 + 8u);
    g->eax = eax;
    g->esp = sp0 - 4u;
    t13 = cow_fastcall(g, COW_IMG(0x101c4d20u), rd32(COW_IMG(0x10662dccu)), edx, 3, t12, COW_IMG(0x10244930u), arg1);
    t14 = g->edx;
    t15 = cow_thiscall(g, COW_IMG(0x10211830u), rd32(arg1 + 0xcu), 0);
    return (t15 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10244870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10244870(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
