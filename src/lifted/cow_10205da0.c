/* f_0x10205da0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10205da0(Guest* g)
{
    uint32_t eax;
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
    const uint32_t in_edx = g->edx;

    if ((uint32_t)(int16_t)rd16(sp0 + 4u) - 1u > 6u)
    {
        eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
        edx = in_edx;
        goto L_10205df3;
    }
    eax = (uint32_t)(int16_t)rd16(sp0 + 4u) - 1u;
    t1 = rd32(COW_IMG(0x10205df8u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x10205db2u: goto L_10205db2;
    case 0x10205dbbu: goto L_10205dbb;
    case 0x10205dc3u: goto L_10205dc3;
    case 0x10205dcbu: goto L_10205dcb;
    case 0x10205dd4u: goto L_10205dd4;
    case 0x10205dddu: goto L_10205ddd;
    case 0x10205deeu: goto L_10205dee;
    default: rt_fatal(g, COW_IMG(0x10205dabu), "switch");
    }
    return 0;
L_10205db2: ;
    wr32(sp0 + 4u, self);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10204d50u), eax, self, in_edx);
L_10205dbb: ;
    g->edx = in_edx;
    g->esp = sp0;
    t7 = cow_call_regs(g, COW_IMG(0x10205280u), eax, g->ecx, g->edx, 1, 0);
    t8 = g->edx;
    g->edx = t8;
    return t7;
L_10205dc3: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t5 = cow_stdcall(g, COW_IMG(0x10204f90u), 0);
    t6 = g->edx;
    g->edx = t6;
    return t5;
L_10205dcb: ;
    wr32(sp0 + 4u, self);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10205100u), eax, self, in_edx);
L_10205dd4: ;
    wr32(sp0 + 4u, self);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x102051d0u), eax, self, in_edx);
L_10205ddd: ;
    t4 = (eax & 0xffffff00u) | rd8(self + 0x2cu) == 0u;
    wr32(sp0 + 4u, t4);
    g->esp = sp0;
    return cow_tailcall(g, COW_IMG(0x10204ee0u), t4, self, in_edx);
L_10205dee: ;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0;
    t2 = cow_stdcall(g, COW_IMG(0x10204ed0u), 0);
    t3 = g->edx;
    eax = t2;
    edx = t3;
L_10205df3: ;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10205da0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10205da0(g);
    if (g->esp > sp0)
        return; /* left through a tail call: the callee returned for us */
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
