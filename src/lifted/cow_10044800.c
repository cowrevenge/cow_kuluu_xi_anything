/* f_0x10044800 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_10044800(Guest* g)
{
    double d3;
    uint32_t eax;
    uint32_t t1;
    uint32_t t2;
    const uint32_t sp0 = g->esp;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_esi);
    t1 = rd32(sp0 + 8u);
    wr32(sp0 - 8u, t1);
    wr32(sp0 - 0xcu, 5u);
    wr32(sp0 - 0x10u, arg1);
    wr32(sp0 - 0x14u, sp0 + 8u);
    g->esp = sp0 - 4u;
    t2 = cow_call_regs(g, COW_IMG(0x10072430u), t1, g->ecx, g->edx, 0, 4, sp0 + 8u, arg1, 5u, t1);
    if (rd32(t2) == 0u) goto L_1004484b;
    eax = rd32(t2);
    if (rd32(rd32(eax) + 0xb0u) == 0u)
    {
        eax = rd32(rd32(eax) + 0xb0u);
        goto L_1004484d;
    }
    eax = rd32(rd32(eax) + 0xb0u);
    wr32(sp0 + 8u, (uint8_t)arg3);
    d3 = fr(g, (double)(int32_t)rd32(sp0 + 8u) * (double)rdf32(COW_IMG(0x10329e94u)));
    wrf32(eax + 0x134u, (float)d3);
    return eax;
L_1004484b: ;
    eax = 0u;
L_1004484d: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10044800(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10044800(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
