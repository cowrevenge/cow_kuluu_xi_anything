/* f_0x10268c10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_10268c10(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 8u) == 0u)
    {
        eax = rd32(self + 8u);
        edx = in_edx;
    }
    else
    {
        edx = in_edx;
        ebx = 0u;
        edi = 0u;
L_10268c20: ;
        if (rd16(edi + rd32(self)) == 8u)
        {
            eax = rd16(edi + rd32(self)) - 8u;
            ecx = edi + rd32(self);
            if (rd32(ecx + 8u) != 0u)
            {
                ecx = rd32(ecx + 8u);
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_cdecl(g, COW_IMG(0x10311bf0u), 1, ecx - 2u);
                t6 = g->edx;
                edx = t6;
            }
        }
        else
        {
            eax = rd16(edi + rd32(self)) - 8u;
            ecx = edi + rd32(self);
            if (eax == 1u)
            {
                t4 = rd32(ecx + 8u);
                g->edx = edx;
                g->esp = sp0 - 0xcu;
                cow_thiscall(g, rd32(rd32(t4) + 8u), t4, 1, t4);
                t5 = g->edx;
                edx = t5;
            }
            else
            {
                eax = eax - 1u;
                if (eax == 4u)
                {
                    eax = eax - 4u;
                    t1 = rd32(ecx + 8u);
                    g->edx = rd32(t1);
                    t2 = rd32(t1);
                    g->esp = sp0 - 0xcu;
                    cow_thiscall(g, rd32(t2 + 8u), t1, 1, t1);
                    t3 = g->edx;
                    edx = t3;
                }
            }
        }
        if (ebx + 1u < rd32(self + 8u))
        {
            ebx = ebx + 1u;
            edi = edi + 0x10u;
            goto L_10268c20;
        }
        eax = rd32(self + 8u);
    }
    g->esp = sp0 - 8u;
    cow_cdecl(g, COW_IMG(0x10311bf0u), 1, rd32(self));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10268c10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_10268c10(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
