/* f_0x102b7920 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_102b7920(Guest* g)
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
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    if (rd32(rd32(sp0 + 4u) + 4u) == 4u)
    {
        eax = rd32(rd32(sp0 + 4u) + 4u) - 4u;
        esi = rd32(sp0 + 4u);
        goto L_102b7993;
    }
    eax = rd32(rd32(sp0 + 4u) + 4u) - 4u;
    esi = rd32(sp0 + 4u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102b7958;
    }
    eax = eax - 1u;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_102b7993;
    }
    eax = eax - 1u;
    g->eax = eax;
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103c2194u));
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 + 4u, COW_IMG(0x103c2430u));
    g->esp = sp0;
    g->edx = t3;
    cow_tailcall(g, COW_IMG(0x102858b0u), t1, t2, t3);
    return;
L_102b7958: ;
    if ((int32_t)rd32(esi) <= 4)
    {
        ecx = self;
        edx = in_edx;
    }
    else
    {
        g->eax = eax;
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 8u;
        t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103c2194u));
        t5 = g->ecx;
        t6 = g->edx;
        g->ecx = t5;
        g->edx = t6;
        g->esp = sp0 - 0xcu;
        cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103c2404u), COW_IMG(0x103b379cu));
        t7 = g->ecx;
        t8 = g->edx;
        ecx = t7;
        edx = t8;
    }
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102b7a70u), 2, esi + 8u, esi + 0x254u);
    return;
L_102b7993: ;
    g->esp = sp0 - 4u;
    cow_cdecl(g, COW_IMG(0x102b79b0u), 3, esi + 8u, esi + 0x254u, rd32(esi));
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102b7920(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_102b7920(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
