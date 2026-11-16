/* f_0x1029cd60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_1029cd60(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
    uint32_t t17;
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t22;
    uint32_t t23;
    uint32_t t24;
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_esi = g->esi;
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_esi);
    if (rd32(sp0 + 4u) != 0u)
    {
        esi = rd32(sp0 + 4u);
        loc_4 = (self & 0xffffffu) | rd8(COW_IMG(0x109a2828u)) << 0x18u;
        goto L_1029cd78;
    }
    eax = (in_eax & 0xffffff00u) | rd8(COW_IMG(0x109a2828u));
    loc_4 = (self & 0xffffffu) | rd8(COW_IMG(0x109a2828u)) << 0x18u;
    return eax & 0xffffff00u;
L_1029cd78: ;
    wr32(sp0 - 0xcu, 1u);
    wr32(sp0 - 0x10u, esi);
    wr8(COW_IMG(0x109a2828u), 0u);
    wr8(COW_IMG(0x109f8268u), 0u);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 8u;
    t1 = cow_cdecl(g, COW_IMG(0x1029ce60u), 2, esi, 1u);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t3;
        goto L_1029cdbb;
    }
    eax = t1;
    ecx = t2;
    edx = t3;
    wr32(sp0 - 0xcu, 0xe5u);
    wr32(sp0 - 0x10u, COW_IMG(0x103bc7fcu));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t4 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc7fcu));
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x103bc83cu));
    g->esp = sp0 - 0x10u;
    t7 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc83cu), COW_IMG(0x103b379cu));
    g->esi = rd32(sp0 - 8u);
    return t7 & 0xffffff00u;
L_1029cdbb: ;
    t8 = rd8(sp0 - 1u);
    wr32(sp0 + 4u, 0u);
    if ((uint8_t)t8 != 0u)
    {
        wr32(sp0 + 4u, 1u);
    }
    wr32(sp0 - 0xcu, esi);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, sp0 + 4u);
    g->ecx = sp0 + 4u;
    g->edx = edx;
    g->esp = sp0 - 8u;
    t9 = cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 + 4u, 4u, 1u, esi);
    t10 = g->ecx;
    t11 = g->edx;
    if (t9 == 1u)
    {
        ecx = t10;
        goto L_1029ce10;
    }
    eax = t9;
    ecx = t10;
    edx = t11;
    wr32(sp0 - 0xcu, 0xedu);
    wr32(sp0 - 0x10u, COW_IMG(0x103bc7fcu));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t12 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc7fcu));
    t13 = g->ecx;
    t14 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x103bc828u));
    g->esp = sp0 - 0x10u;
    t15 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc828u), COW_IMG(0x103b379cu));
    g->esi = rd32(sp0 - 8u);
    return t15 & 0xffffff00u;
L_1029ce10: ;
    wr32(sp0 - 0xcu, esi);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, 4u);
    wr32(sp0 - 0x18u, sp0 + 8u);
    g->ecx = ecx;
    g->edx = sp0 + 8u;
    g->esp = sp0 - 8u;
    t16 = cow_cdecl(g, COW_IMG(0x10292200u), 4, sp0 + 8u, 4u, 1u, esi);
    t17 = g->ecx;
    t18 = g->edx;
    if (t16 == 1u)
    {
        eax = t16;
        goto L_1029ce4d;
    }
    eax = t16;
    ecx = t17;
    edx = t18;
    wr32(sp0 - 0xcu, 0xeeu);
    wr32(sp0 - 0x10u, COW_IMG(0x103bc7fcu));
    wr32(sp0 - 0x14u, COW_IMG(0x103b379cu));
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0xcu;
    t19 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103b379cu), COW_IMG(0x103bc7fcu));
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0x18u, COW_IMG(0x103bc828u));
    g->esp = sp0 - 0x10u;
    t22 = cow_cdecl(g, COW_IMG(0x102858b0u), 2, COW_IMG(0x103bc828u), COW_IMG(0x103b379cu));
    g->esi = rd32(sp0 - 8u);
    return t22 & 0xffffff00u;
L_1029ce4d: ;
    t23 = rd8(sp0 - 1u);
    t24 = rd32(sp0 - 8u);
    wr8(COW_IMG(0x109a2828u), (uint8_t)t23);
    g->esi = t24;
    return ((eax | t23) & 0xffffff00u) | (uint8_t)(t23 | 0xffu);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1029cd60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1029cd60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
