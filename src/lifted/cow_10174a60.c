/* f_0x10174a60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10174a60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(COW_IMG(0x10621a08u)) == 0u)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        esi = rd32(COW_IMG(0x10621a08u));
        edx = in_edx;
L_10174a77: ;
        if ((int32_t)rd32(esi + 0x10u) <= 0)
        {
            ecx = rd32(esi + 0x10u);
            ebp = rd32(esi);
        }
        else
        {
            eax = rd32(esi + 0xcu);
            ecx = rd32(esi + 0x10u);
            ebp = rd32(esi);
            ebx = eax + 0xd8u;
            edi = 0u;
L_10174a89: ;
            if (rd32(ebx) != 0u)
            {
                eax = rd32(ebx);
                g->ecx = ecx;
                g->edx = edx;
                g->esp = sp0 - 0x14u;
                cow_cdecl(g, COW_IMG(0x10028700u), 1, eax);
                t1 = g->ecx;
                t2 = g->edx;
                ecx = t1;
                edx = t2;
            }
            if ((int32_t)(edi + 1u) < (int32_t)rd32(esi + 0x10u))
            {
                ebx = ebx + 0xf4u;
                edi = edi + 1u;
                goto L_10174a89;
            }
        }
        if (rd32(esi + 0xcu) == 0u)
        {
            eax = rd32(esi + 0xcu);
        }
        else
        {
            eax = rd32(esi + 0xcu);
            g->eax = eax;
            g->ecx = ecx;
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t3 = cow_cdecl(g, COW_IMG(0x10028700u), 1, eax);
            t4 = g->ecx;
            t5 = g->edx;
            eax = t3;
            ecx = t4;
            edx = t5;
        }
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        cow_cdecl(g, COW_IMG(0x10028700u), 1, esi);
        t6 = g->ecx;
        t7 = g->edx;
        if (ebp != 0u)
        {
            edx = t7;
            esi = ebp;
            goto L_10174a77;
        }
        ecx = t6;
        edx = t7;
    }
    if (rd32(self + 0xcu) != 0u)
    {
        eax = rd32(self + 0xcu);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        cow_cdecl(g, COW_IMG(0x10028700u), 1, eax);
        t8 = g->ecx;
        t9 = g->edx;
        ecx = t8;
        edx = t9;
    }
    t10 = rd32(self + 4u);
    wr32(self + 0xcu, 0u);
    wr32(self + 0x10u, 0u);
    if (t10 == 0u)
    {
        eax = t10;
    }
    else
    {
        eax = t10;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t11 = cow_cdecl(g, COW_IMG(0x10028700u), 1, eax);
        t12 = g->edx;
        eax = t11;
        edx = t12;
    }
    wr32(self + 4u, 0u);
    wr32(self + 8u, 0u);
    g->esp = sp0;
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10174770u), eax, self, edx);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10174a60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10174a60(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
