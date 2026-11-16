/* f_0x1031cfaa - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1031cfaa(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;

    ecx = self;
    edx = in_edx;
    esi = COW_IMG(0x103d29e0u);
    edi = rd32(COW_IMG(0x103292f4u));
L_1031cfb7: ;
    if (rd32(esi) == 0u)
    {
        eax = rd32(esi);
    }
    else
    {
        eax = rd32(esi);
        if (esi != COW_IMG(0x103d2a24u))
        {
            if (esi != COW_IMG(0x103d2a14u))
            {
                if (esi != COW_IMG(0x103d2a04u))
                {
                    if (esi != COW_IMG(0x103d29e4u))
                    {
                        g->eax = eax;
                        g->edx = edx;
                        g->esp = sp0 - 8u;
                        t1 = cow_thiscall(g, edi, ecx, 1, eax);
                        t2 = g->ecx;
                        t3 = g->edx;
                        t4 = rd32(esi);
                        g->esp = sp0;
                        t5 = cow_call_regs(g, COW_IMG(0x10312eedu), g->eax, t2, t3, 1, 3, t4, in_edi, in_esi);
                        t6 = g->edx;
                        eax = t5;
                        ecx = t4;
                        edx = t6;
                    }
                }
            }
        }
    }
    if ((int32_t)(esi + 4u) < (int32_t)COW_IMG(0x103d2aa0u))
    {
        esi = esi + 4u;
        goto L_1031cfb7;
    }
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, edi, ecx, 1, rd32(COW_IMG(0x103d2a04u)));
    t8 = g->ecx;
    t9 = g->edx;
    g->edx = t9;
    t10 = cow_thiscall(g, edi, t8, 1, rd32(COW_IMG(0x103d2a14u)));
    t11 = g->ecx;
    t12 = g->edx;
    g->edx = t12;
    t13 = cow_thiscall(g, edi, t11, 1, rd32(COW_IMG(0x103d2a24u)));
    t14 = g->ecx;
    t15 = g->edx;
    cow_thiscall(g, edi, t14, 1, rd32(COW_IMG(0x103d29e4u)));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1031cfaa(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1031cfaa(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
