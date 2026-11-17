/* f_0x1000c850 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1000c850(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 52u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_esi);
    if (rd32(rd32(COW_IMG(0x104566e8u)) + 0x18u) == 0u)
    {
        eax = rd32(COW_IMG(0x104566e8u));
        edi = in_edi;
        loc_c = in_ebx;
        loc_10 = in_esi;
        goto L_1000c8f5;
    }
    eax = rd32(COW_IMG(0x104566e8u));
    edx = rd32(rd32(COW_IMG(0x104566e8u)) + 0x18u);
    t1 = rd32(sp0 + 4u);
    wr32(sp0 - 0x14u, t1);
    wr32(sp0 - 0x18u, 1u);
    wr32(sp0 - 0x1cu, 0x15u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, 1u);
    wr32(sp0 - 0x28u, 0x10u);
    wr32(sp0 - 0x2cu, 1u);
    t2 = rd32(self + 0xcu);
    wr32(sp0 - 0x30u, t2);
    g->eax = eax;
    g->esp = sp0 - 0x10u;
    t3 = cow_stdcall(g, COW_IMG(0x102d2fd9u), 8, t2, 1u, 0x10u, 1u, 0u, 0x15u, 1u, t1);
    if ((int32_t)t3 >= 0)
    {
        esi = t1;
        goto L_1000c88e;
    }
    eax = t3;
    g->ebx = rd32(sp0 - 0xcu);
    g->esi = rd32(sp0 - 0x10u);
    return eax & 0xffffff00u;
L_1000c88e: ;
    wr32(sp0 - 0x14u, in_edi);
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, sp0 - 8u);
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, rd32(esi));
    g->edx = rd32(rd32(esi));
    t4 = rd32(rd32(esi));
    g->esp = sp0 - 0x14u;
    cow_thiscall(g, rd32(t4 + 0x40u), sp0 - 8u, 5, rd32(esi), 0u, sp0 - 8u, 0u, 0u);
    t5 = g->edx;
    ecx = 0u;
    edx = (t5 & 0xffffff00u) | rd8(sp0 + 4u);
L_1000c8a9: ;
    if (ecx == 0u) goto L_1000c8b9;
    eax = ecx;
    if (eax != 1u) goto L_1000c8c3;
    wr8(sp0 + 6u, 0x48u);
L_1000c8bd: ;
    wr8(sp0 + 5u, 0u);
    edx = edx & 0xffffff00u;
L_1000c8c3: ;
    t6 = rd32(sp0 - 4u);
    t7 = rd32(sp0 - 8u);
    t8 = rd8(sp0 + 5u);
    wr8(t6 + t7 * ecx + 1u, (uint8_t)t8);
    t9 = rd8(sp0 + 6u);
    wr8(t6 + t7 * ecx, (uint8_t)edx);
    wr8(t6 + t7 * ecx + 2u, (uint8_t)t9);
    wr8(t6 + t7 * ecx + 3u, 0x80u);
    if ((int32_t)(ecx + 1u) < 16)
    {
        ecx = ecx + 1u;
        goto L_1000c8a7;
    }
    ecx = ecx + 1u;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, rd32(esi));
    g->eax = rd32(esi);
    t10 = rd32(esi);
    g->esp = sp0 - 0x14u;
    t11 = cow_thiscall(g, rd32(rd32(t10) + 0x44u), ecx, 2, t10, 0u);
    eax = t11;
    edi = rd32(sp0 - 0x14u);
    loc_c = rd32(sp0 - 0xcu);
    loc_10 = rd32(sp0 - 0x10u);
L_1000c8f5: ;
    g->ebx = loc_c;
    g->esi = loc_10;
    g->edi = edi;
    return (eax & 0xffffff00u) | 1u;
L_1000c8a7: ;
    goto L_1000c8a9;
L_1000c8b9: ;
    wr8(sp0 + 6u, 0u);
    goto L_1000c8bd;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1000c850(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1000c850(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
