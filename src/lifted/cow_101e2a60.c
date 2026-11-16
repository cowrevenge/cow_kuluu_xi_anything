/* f_0x101e2a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
void cow_fn_101e2a60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if (arg1 != 0u)
    {
        g->eax = rd16(arg1);
        g->edx = in_edx;
        t1 = rd16(arg1);
        g->esp = sp0 - 4u;
        t2 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t1);
        t3 = g->edx;
        if (t2 != 0u)
        {
            eax = t2;
            edx = t3;
            if (rd16(rd32(eax + 0x14b4u)) == 8u)
            {
                ecx = rd32(eax + 0x14b4u);
                g->ecx = ecx;
                g->esp = sp0 - 4u;
                t4 = cow_call_regs(g, COW_IMG(0x101cc0d0u), eax, g->ecx, edx, 1, 2, 0x77u, 0u);
                t5 = g->ecx;
                t6 = g->edx;
                if ((uint8_t)t4 == 0u)
                {
                    eax = t4;
                    ecx = t5;
                    edx = t6;
                    goto L_101e2ab3;
                }
                eax = t4;
                edx = t6;
                t7 = (edx & 0xffff0000u) | rd16(arg1);
                t8 = (eax & 0xffffff00u) | rd8(arg1 + 2u);
                g->eax = t8;
                g->edx = t7;
                t9 = rd32(COW_IMG(0x106634acu));
                g->esp = sp0 - 4u;
                t10 = cow_thiscall(g, COW_IMG(0x101e0e30u), t9, 3, t8, t7, 1u);
                t11 = g->ecx;
                t12 = g->edx;
                if ((uint8_t)t10 != 0u) goto L_101e2ab8;
                eax = t10;
                ecx = t11;
                edx = t12;
L_101e2ab3: ;
                g->esp = sp0 - 4u;
                cow_thiscall(g, COW_IMG(0x10037c50u), ecx, 0);
            }
        }
    }
L_101e2ab8: ;
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e2a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101e2a60(g);
    g->esp = sp0;
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
