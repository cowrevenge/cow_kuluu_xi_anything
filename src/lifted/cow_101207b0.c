/* f_0x101207b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101207b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);

    if (rd32(self + 0x30u) != 0u)
    {
        eax = rd32(self + 0x30u);
        goto L_101207cc;
    }
    eax = rd32(self + 0x30u);
    g->esp = sp0 - 4u;
    cow_fastcall(g, COW_IMG(0x10120880u), self, in_edx, 0);
    if (rd32(self + 0x30u) != 0u)
    {
        eax = rd32(self + 0x30u);
        goto L_101207cc;
    }
    eax = rd32(self + 0x30u);
    return eax & 0xffffff00u;
L_101207cc: ;
    if ((int32_t)arg1 >= 0) goto L_10120816;
    if (rd32(eax + 0x40u) == 0u) goto L_101207f8;
    ecx = rd32(eax + 0x40u);
    t1 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = ecx;
    g->esp = sp0 - 4u;
    t2 = cow_thiscall(g, rd32(rd32(t1) + 0xf4u), t1, 3, t1, 0u, ecx);
    return (t2 & 0xffffff00u) | 1u;
L_101207f8: ;
    t3 = rd32(eax + 0x44u);
    t4 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
    g->eax = t3;
    g->esp = sp0 - 4u;
    t5 = cow_thiscall(g, rd32(rd32(t4) + 0xf4u), t4, 3, t4, 0u, t3);
    return (t5 & 0xffffff00u) | 1u;
L_10120816: ;
    eax = 1u;
    ecx = self + 0x3cu;
L_1012081e: ;
    if (rd32(ecx) <= arg1) goto L_1012082a;
    if ((int32_t)(eax - 1u) >= 0)
    {
        eax = eax - 1u;
        ecx = ecx - 4u;
        goto L_1012081e;
    }
    eax = eax - 1u;
L_1012082a: ;
    if (eax != 0u)
    {
        ecx = eax;
        if (ecx == 1u)
        {
            if (arg2 != 0u)
            {
                if (arg3 != 0u)
                {
                    wr32(arg2, rd32(arg3));
                }
            }
        }
        else
        {
            eax = 0u;
        }
    }
    if (rd32(eax * 4u + self + 0x30u) == 0u)
    {
        eax = rd32(eax * 4u + self + 0x30u);
    }
    else
    {
        eax = rd32(eax * 4u + self + 0x30u);
        if (rd32(eax + 0x40u) == 0u)
        {
            eax = rd32(eax + 0x44u);
        }
        else
        {
            ecx = rd32(eax + 0x40u);
            eax = ecx;
        }
        t6 = rd32(rd32(COW_IMG(0x1045666cu)) + 0xcu);
        g->eax = eax;
        g->esp = sp0 - 4u;
        t7 = cow_thiscall(g, rd32(rd32(t6) + 0xf4u), t6, 3, t6, 0u, eax);
        eax = t7;
    }
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101207b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101207b0(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
