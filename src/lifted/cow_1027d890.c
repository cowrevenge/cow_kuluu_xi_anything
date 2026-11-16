/* f_0x1027d890 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1027d890(Guest* g)
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (arg1 != 0xffffffffu) goto L_1027d8a0;
    return in_eax & 0xffffff00u;
L_1027d8a0: ;
    wr32(sp0 - 0xcu, sp0 + 4u);
    wr32(sp0 - 0x10u, arg1);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1027d810u), 2, arg1, sp0 + 4u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        edx = t3;
        goto L_1027d8dd;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0xcu, 0x291u);
    wr32(sp0 - 0x10u, COW_IMG(0x103b4584u));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103b4584u));
    t5 = g->edx;
    wr32(sp0 - 0x18u, arg1);
    wr32(sp0 - 0x1cu, COW_IMG(0x103b4684u));
    g->esp = sp0 - 0x14u;
    t6 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b4684u), arg1);
    g->esi = rd32(sp0 - 8u);
    return t6 & 0xffffff00u;
L_1027d8dd: ;
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, 4u);
    wr32(sp0 - 0x14u, sp0 - 4u);
    wr32(sp0 - 0x18u, arg1);
    wr8(COW_IMG(0x109f826au), (uint8_t)((arg1 != 2u) - 1u));
    g->edx = (uint8_t)((arg1 != 2u) - 1u);
    g->esp = sp0;
    cow_cdecl(g, COW_IMG(0x1027d6e0u), 6, arg1, sp0 - 4u, 4u, 1u, rd32(sp0 - 8u), rd32(sp0 - 4u));
    t7 = g->edx;
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, 4u);
    wr32(sp0 - 0x24u, arg2);
    wr32(sp0 - 0x28u, arg1);
    g->esp = sp0 - 0x10u;
    t8 = cow_cdecl(g, COW_IMG(0x1027d6e0u), 6, arg1, arg2, 4u, 1u, arg1, sp0 - 4u);
    g->esi = rd32(sp0 - 8u);
    return (t8 & 0xffffff00u) | (uint8_t)(t8 | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1027d890(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1027d890(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
