/* f_0x10323c50 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10323c50(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t2;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 4u, in_ebp);
    if (rd32(sp0 + 4u) != 0u)
    {
        eax = rd32(sp0 + 4u);
        goto L_10323c5c;
    }
    eax = rd32(sp0 + 4u);
    return eax;
L_10323c5c: ;
    if (rd32(COW_IMG(0x109b27b8u)) != 0u) goto L_10323c77;
    if ((uint16_t)arg2 > 0xffu)
    {
        ecx = (self & 0xffff0000u) | (uint16_t)arg2;
        edx = in_edx;
        goto L_10323ca9;
    }
    wr32(sp0 - 8u, 1u);
    wr8(eax, (uint8_t)arg2);
    return 1u;
L_10323c77: ;
    wr32(sp0 + 4u, 0u);
    wr32(sp0 - 8u, sp0 + 4u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, rd32(COW_IMG(0x103d023cu)));
    wr32(sp0 - 0x14u, eax);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, sp0 + 8u);
    wr32(sp0 - 0x20u, 0x220u);
    wr32(sp0 - 0x24u, rd32(COW_IMG(0x109b27c8u)));
    g->eax = sp0 + 8u;
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_thiscall(g, rd32(COW_IMG(0x10329154u)), sp0 + 4u, 8, rd32(COW_IMG(0x109b27c8u)), 0x220u, sp0 + 8u, 1u, eax, rd32(COW_IMG(0x103d023cu)), 0u, sp0 + 4u);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ecx = t2;
        edx = t3;
        goto L_10323ca9;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    if (rd32(sp0 + 4u) == 0u) goto L_10323cb7;
L_10323ca9: ;
    g->edx = edx;
    g->esp = sp0 - 4u;
    t4 = cow_stdcall(g, COW_IMG(0x10319c89u), 0);
    t5 = g->edx;
    wr32(t4, 0x2au);
    eax = 0xffffffffu;
    edx = t5;
L_10323cb7: ;
    g->ebp = rd32(sp0 - 4u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10323c50(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10323c50(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
