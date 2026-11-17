/* f_0x102eea16 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102eea16(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_8;
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
    uint32_t t3;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;

    t1 = rd32(rd32(rd32(sp0 + 4u) + 0x14u) + 4u);
    t2 = rd32(rd32(rd32(sp0 + 4u) + 0x14u));
    t3 = rd32(sp0 + 4u);
    t4 = rd32(rd32(sp0 + 4u) + 0x14u);
    t5 = rd32(rd32(rd32(sp0 + 4u) + 0x14u) + 4u);
    wr32(sp0 + 4u, t1);
    if (t5 != 0u)
    {
        ecx = self;
        edx = in_edx;
        ebx = t2;
        esi = t3;
        edi = t4;
        goto L_102eea40;
    }
    eax = t1;
    esi = t3;
    edi = t4;
    g->eax = eax;
    g->edx = in_edx;
    g->esp = sp0 - 0x18u;
    t6 = cow_thiscall(g, rd32(edi + 0xcu), self, 0);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u)
    {
        eax = t6;
        goto L_102eea5a;
    }
    ecx = esi;
    edx = t7;
    t8 = rd32(edi + 4u);
    t9 = rd32(edi);
    wr32(sp0 + 4u, t8);
    ebx = t9;
L_102eea40: ;
    wr32(sp0 + 4u, rd32(sp0 + 4u) - 1u);
    t10 = rd8(ebx) << 8u;
    if (rd32(sp0 + 4u) != 0u)
    {
        ebx = ebx + 1u;
        loc_8 = t10;
        goto L_102eea66;
    }
    eax = t10;
    loc_8 = t10;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    t11 = cow_thiscall(g, rd32(edi + 0xcu), ecx, 0);
    t12 = g->edx;
    if ((uint8_t)t11 != 0u)
    {
        edx = t12;
        goto L_102eea5e;
    }
    eax = t11;
L_102eea5a: ;
    eax = eax & 0xffffff00u;
L_102eeaad: ;
    return eax;
L_102eea5e: ;
    t13 = rd32(edi + 4u);
    t14 = rd32(edi);
    wr32(sp0 + 4u, t13);
    ebx = t14;
L_102eea66: ;
    t15 = loc_8 + rd8(ebx);
    wr32(rd32(esi) + 0x14u, 0x5au);
    t16 = rd32(esi + 0x178u);
    wr32(rd32(esi) + 0x18u, t16);
    wr32(rd32(esi) + 0x1cu, t15);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    cow_thiscall(g, rd32(rd32(esi) + 4u), t15, 0);
    t17 = g->edx;
    t18 = rd32(sp0 + 4u);
    wr32(edi, ebx + 1u);
    wr32(edi + 4u, t18 - 1u);
    g->eax = rd32(esi + 0x14u);
    t19 = rd32(esi + 0x14u);
    g->esp = sp0 - 0x24u;
    t20 = cow_thiscall(g, rd32(t19 + 0x10u), t15 - 2u, 0);
    eax = (t20 & 0xffffff00u) | 1u;
    goto L_102eeaad;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102eea16(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102eea16(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
