/* f_0x100e0500 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100e0500(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x58u, in_edi);
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(sp0 - 0x4cu, 0x5cu);
    t1 = rd32(arg3 + 4u);
    wr32(sp0 - 0x44u, t1);
    t2 = rd16(arg3 + 8u);
    wr32(sp0 - 0x48u, t2);
    eax = arg3 + 0xau;
    ecx = t2;
L_100e0537: ;
    t3 = rd8(eax);
    wr8(eax + sp0 - arg3 - 0x3eu, (uint8_t)t3);
    if ((uint8_t)t3 != 0u)
    {
        eax = eax + 1u;
        ecx = (ecx & 0xffffff00u) | t3;
        goto L_100e0537;
    }
    ecx = (ecx & 0xffffff00u) | t3;
    wr32(sp0 - 0x58u, sp0 - 0x54u);
    g->eax = sp0 - 0x54u;
    g->edx = sp0 - 0x34u - (arg3 + 0xau);
    g->esp = sp0 - 0x54u;
    t4 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t5 = g->edx;
    g->edx = t5;
    return (t4 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100e0500(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100e0500(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
