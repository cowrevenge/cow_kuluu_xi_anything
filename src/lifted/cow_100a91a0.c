/* f_0x100a91a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_100a91a0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(self + 0x20u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ecx = rd32(self + 0x20u);
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t1 = cow_thiscall(g, COW_IMG(0x1018c890u), ecx, 0);
        t2 = g->edx;
        if (t1 == 0u)
        {
            edx = t2;
        }
        else
        {
            eax = t1;
            edx = t2;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x100a4160u), eax, eax, g->edx, 1, 0);
            t3 = g->edx;
            edx = t3;
        }
        esi = 0u;
L_100a91bd: ;
        if (rd32(self + 0x20u) == 0u)
        {
            ecx = rd32(self + 0x20u);
            eax = (uint32_t)(int16_t)rd16(self + 0x24u);
        }
        else
        {
            ecx = rd32(self + 0x20u);
            eax = (uint32_t)(int16_t)rd16(rd32(ecx + 0xcu) + 0x1eu);
        }
        if ((int32_t)esi >= (int32_t)eax) goto L_100a91e9;
        g->edx = edx;
        g->esp = sp0 - 8u;
        t4 = cow_thiscall(g, COW_IMG(0x1018c8c0u), ecx, 1, esi);
        t5 = g->edx;
        if (t4 == 0u)
        {
            edx = t5;
        }
        else
        {
            eax = t4;
            edx = t5;
            g->edx = edx;
            g->esp = sp0 - 8u;
            cow_call_regs(g, COW_IMG(0x100a4160u), eax, eax, g->edx, 1, 0);
            t6 = g->edx;
            edx = t6;
        }
        esi = esi + 1u;
        goto L_100a91bd;
    }
L_100a91e9: ;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t7 = cow_thiscall(g, COW_IMG(0x100814e0u), self + 0x14u, 0);
    t8 = g->edx;
    g->esp = sp0;
    g->edx = t8;
    cow_tailcall(g, COW_IMG(0x100814e0u), t7, self + 8u, t8);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a91a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_100a91a0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
