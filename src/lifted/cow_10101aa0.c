/* f_0x10101aa0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=2 */
uint32_t cow_fn_10101aa0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t t1;
    uint32_t t10;
    uint32_t t2;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0xcu, in_edi);
    wr32(sp0 - 8u, 0u);
    wr32(sp0 - 4u, 5u);
    if (rd8(arg2 + 4u) != 0u) goto L_10101ac6;
    return 0u;
L_10101ac6: ;
    if ((rd8(arg2 + 8u) & 0xfu) != 0u) goto L_10101ad3;
    return 0u;
L_10101ad3: ;
    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, arg2);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10101a00u), 1, arg2);
    t2 = g->ecx;
    t3 = g->edx;
    if ((int32_t)t1 <= 0)
    {
        eax = t1;
        ecx = t2;
    }
    else
    {
        eax = t1;
        edx = t3;
        wr32(sp0 - 0x14u, 1u);
        wr32(sp0 - 0x18u, -eax);
        wr32(sp0 - 0x1cu, 0x7ceu);
        wr32(sp0 - 0x20u, sp0 - 4u);
        wr32(sp0 - 0x24u, sp0 - 8u);
        wr32(sp0 - 0x28u, arg1);
        g->eax = sp0 - 4u;
        g->ecx = sp0 - 8u;
        g->esp = sp0 - 0xcu;
        t4 = cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x7ceu, -eax, 1u, rd32(sp0 - 0x10u));
        t5 = g->ecx;
        eax = t4;
        ecx = t5;
    }
    if (rd8(arg2 + 5u) != 0u)
    {
        wr32(sp0 - 0x14u, sp0 - 4u);
        wr32(sp0 - 0x18u, sp0 - 8u);
        wr32(sp0 - 0x1cu, arg1);
        g->eax = sp0 - 8u;
        g->esp = sp0 - 0x10u;
        t6 = cow_cdecl(g, COW_IMG(0x100ff980u), 3, arg1, sp0 - 8u, sp0 - 4u);
        wr32(sp0 - 0x20u, 1u);
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, 0x79du);
        wr32(sp0 - 0x2cu, sp0 - 4u);
        wr32(sp0 - 0x30u, sp0 - 8u);
        wr32(sp0 - 0x34u, arg1);
        g->edx = sp0 - 8u;
        g->esp = sp0 - 0x18u;
        cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, 0x79du, 1u, 1u, arg1);
        t7 = g->edx;
        wr32(sp0 - 0x38u, sp0 - 4u);
        wr32(sp0 - 0x3cu, sp0 - 8u);
        wr32(sp0 - 0x40u, arg1);
        g->esp = sp0 - 0x34u;
        cow_cdecl(g, COW_IMG(0x100ff980u), 3, arg1, sp0 - 8u, sp0 - 4u);
        wr32(sp0 - 0x44u, 1u);
        wr32(sp0 - 0x48u, 1u);
        t8 = rd8(arg2 + 5u) + 0x79du;
        wr32(sp0 - 0x4cu, t8);
        wr32(sp0 - 0x50u, sp0 - 4u);
        wr32(sp0 - 0x54u, sp0 - 8u);
        wr32(sp0 - 0x58u, arg1);
        g->esp = sp0 - 0x3cu;
        cow_cdecl(g, COW_IMG(0x100ff920u), 7, arg1, sp0 - 8u, sp0 - 4u, t8, 1u, 1u, arg1);
    }
    t9 = rd16(arg2 + 6u);
    wr32(arg1 + 0x164u, t9);
    t10 = rd32(arg2 + 8u) & 0xfu;
    wr32(arg1 + 0x160u, t10);
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0xcu);
    return rd32(sp0 - 8u);
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10101aa0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10101aa0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
