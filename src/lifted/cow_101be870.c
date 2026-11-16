/* f_0x101be870 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101be870(Guest* g)
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
    uint32_t t7;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    wr32(self, COW_IMG(0x10337c84u));
    g->esp = sp0 - 0xcu;
    cow_fastcall(g, COW_IMG(0x101beb70u), self, in_edx, 0);
    t1 = g->ecx;
    t2 = g->edx;
    if (rd32(self + 0x80u) == 0u)
    {
        ecx = t1;
        edx = t2;
    }
    else
    {
        ecx = t1;
        edx = t2;
        ebx = 0u;
        edi = self + 0xcu;
L_101be892: ;
        if (rd32(edi) != 0u)
        {
            eax = rd32(edi);
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x10u;
            cow_cdecl(g, COW_IMG(0x101907d0u), 1, eax);
            t3 = g->ecx;
            t4 = g->edx;
            ecx = t3;
            edx = t4;
        }
        wr32(edi + 0x3cu, 0u);
        if (ebx + 1u < rd32(self + 0x80u))
        {
            ebx = ebx + 1u;
            edi = edi + 4u;
            goto L_101be892;
        }
    }
    t5 = rd32(self + 0xbcu);
    wr32(self + 0x44u, 0u);
    wr32(self + 0x80u, 0u);
    if (t5 != 0u)
    {
        eax = t5;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x101907d0u), 1, eax);
        t6 = g->ecx;
        t7 = g->edx;
        wr32(self + 0xc0u, 0u);
        ecx = t6;
        edx = t7;
    }
    if (rd32(self + 0xc4u) != 0u)
    {
        eax = rd32(self + 0xc4u);
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x101907d0u), 1, eax);
        wr32(self + 0xc4u, 0u);
        wr32(self + 0xccu, 0u);
        wr32(self + 0xc8u, 0u);
    }
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101be870(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101be870(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
