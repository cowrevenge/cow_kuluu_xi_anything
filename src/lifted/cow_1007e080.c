/* f_0x1007e080 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_1007e080(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_edi = g->edi;
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 100u);

    wr32(sp0 - 0x58u, 1u);
    wr32(sp0 - 0x5cu, 1u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x54u;
    t1 = cow_cdecl(g, COW_IMG(0x100e46a0u), 2, 1u, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        edx = t3;
        goto L_1007e0c5;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0x58u, in_edi);
    wr32(sp0 - 0x5cu, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x58u;
    cow_cdecl(g, COW_IMG(0x100f7a90u), 1, 1u);
    t4 = g->edx;
    edi = sp0 - 0x54u;
    eax = 0u;
    ecx = 0x15u;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(sp0 - 0x4cu, 0x77u);
    wr32(sp0 - 0x60u, sp0 - 0x54u);
    g->edx = t4;
    g->esp = sp0 - 0x5cu;
    cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
    t5 = g->edx;
    g->edx = t5;
    return arg3;
L_1007e0c5: ;
    g->edx = edx;
    return -arg3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1007e080(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1007e080(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
