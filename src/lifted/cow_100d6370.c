/* f_0x100d6370 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_100d6370(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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

    if (rd32(self + 0x764u) == 0u)
    {
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x764u);
        if (rd32(eax) == 0u)
        {
            edx = in_edx;
        }
        else
        {
            if (eax == 0u)
            {
                edi = 0u;
            }
            else
            {
                edi = rd32(eax);
            }
            g->eax = eax;
            g->edx = in_edx;
            g->esp = sp0 - 8u;
            t1 = cow_thiscall(g, COW_IMG(0x10071ec0u), edi, 0);
            t2 = g->ecx;
            t3 = g->edx;
            g->edx = t3;
            g->esp = sp0;
            cow_thiscall_cdecl(g, COW_IMG(0x100543a0u), t2, 3, edi, in_edi, in_esi);
            t4 = g->edx;
            wr32(self + 0x764u, 0u);
            edx = t4;
        }
    }
    if (rd32(self + 0x814u) == 0u)
    {
        eax = rd32(self + 0x814u);
    }
    else
    {
        eax = rd32(self + 0x814u);
        if (rd32(eax) != 0u)
        {
            ecx = rd32(eax);
            if (eax != 0u)
            {
                if (ecx != 0u)
                {
                    edi = ecx;
                    g->eax = eax;
                    g->edx = edx;
                    g->esp = sp0 - 8u;
                    t5 = cow_thiscall(g, COW_IMG(0x10071ec0u), ecx, 0);
                    t6 = g->ecx;
                    t7 = g->edx;
                    g->edx = t7;
                    g->esp = sp0;
                    t8 = cow_thiscall_cdecl(g, COW_IMG(0x100543a0u), t6, 3, edi, in_edi, in_esi);
                    t9 = g->edx;
                    eax = t8;
                    edx = t9;
                }
            }
            wr32(self + 0x814u, 0u);
        }
    }
    g->eax = eax;
    g->esp = sp0 - 8u;
    t10 = cow_fastcall(g, COW_IMG(0x10085570u), self, edx, 0);
    t11 = g->edx;
    wr8(self + 0x9e8u, 0u);
    g->edx = t11;
    return t10;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100d6370(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100d6370(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
