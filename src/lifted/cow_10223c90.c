/* f_0x10223c90 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u8 stack_args=0 */
uint32_t cow_fn_10223c90(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
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
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    g->esp = sp0 - 8u;
    t1 = cow_thiscall(g, COW_IMG(0x100e6020u), self, 0);
    if (t1 != 0u)
    {
        eax = t1;
        goto L_10223ca2;
    }
    eax = t1;
    return eax & 0xffffff00u;
L_10223ca2: ;
    wr32(sp0 - 0xcu, sp0 - 1u);
    wr32(sp0 - 0x10u, 0xb00u);
    t2 = rd32(self + 0x1760u);
    wr32(sp0 - 0x14u, t2);
    wr32(sp0 - 0x18u, self + 0x160u);
    wr32(sp0 - 0x1cu, self);
    wr32(sp0 - 0x20u, eax);
    g->edx = t2;
    g->esp = sp0 - 8u;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x1021e550u), self + 0x160u, 6, eax, self, self + 0x160u, t2, 0xb00u, sp0 - 1u);
    t4 = g->ecx;
    t5 = g->edx;
    wr32(self + 0x1760u, t3);
    if (self >> 0x18u != 0u)
    {
        eax = (t3 & 0xffffff00u) | self >> 0x18u;
        goto L_10223ce8;
    }
    ecx = t4;
    edx = t5;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t6 = cow_stdcall(g, COW_IMG(0x10097d50u), 0);
    t7 = g->ecx;
    t8 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        goto L_10223ce4;
    }
    eax = t6;
    ecx = t7;
    edx = t8;
    g->esp = sp0;
    g->esi = rd32(sp0 - 8u);
    g->edx = edx;
    return cow_tailcall(g, COW_IMG(0x10223c30u), eax, ecx, edx);
L_10223ce4: ;
    eax = (eax & 0xffffff00u) | rd8(sp0 - 1u);
L_10223ce8: ;
    g->esi = rd32(sp0 - 8u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10223c90(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10223c90(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
