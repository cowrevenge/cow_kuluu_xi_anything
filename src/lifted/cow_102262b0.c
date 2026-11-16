/* f_0x102262b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102262b0(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = rd32(COW_IMG(0x10456a28u));
        goto L_102262d3;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = rd32(COW_IMG(0x10456a28u));
    if (eax == 2u) goto L_102262cc;
    if (eax != 3u)
    {
        cf = eax < 3u;
        zf = eax == 3u;
        goto L_102262d6;
    }
L_102262cc: ;
    eax = 1u;
L_102262d8: ;
    t1 = rd32(COW_IMG(0x10226304u) + eax * 4u);
    switch (t1 - RD)
    {
    case 0x102262dfu: goto L_102262df;
    case 0x102262eeu: goto L_102262ee;
    default: rt_fatal(g, COW_IMG(0x102262d8u), "switch");
    }
    return 0;
L_102262d3: ;
    cf = eax < 3u;
    zf = eax == 3u;
L_102262d6: ;
    if (!cf && !zf) goto L_102262fd;
    goto L_102262d8;
L_102262df: ;
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg1, 0u);
    return t3;
L_102262ee: ;
    g->esp = sp0;
    t2 = cow_thiscall(g, COW_IMG(0x102578d0u), self, 2, arg1, 0u);
    return t2;
L_102262fd: ;
    return 0u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102262b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102262b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
