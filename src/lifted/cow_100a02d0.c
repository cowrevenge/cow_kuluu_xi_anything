/* f_0x100a02d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100a02d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
    uint32_t t16;
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
    cow_frame(g, sp0, 28u);

    if (rd8(COW_IMG(0x10487e48u)) == 0u) goto L_100a0310;
    ecx = (self & 0xffffff00u) | rd8(COW_IMG(0x10487e48u));
    wr32(sp0 - 4u, 0u);
    wr32(sp0 - 8u, 1u);
    wr8(sp0 + 0xdu, 0u);
    wr8(sp0 + 0xeu, 0u);
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, sp0 + 0xcu);
    wr32(sp0 - 0x14u, 0x81u);
    wr32(sp0 - 0x18u, 9u);
    wr8(sp0 + 0xcu, 0xbfu);
    g->eax = sp0 + 0xcu;
    g->edx = in_edx;
    g->esp = sp0 - 0x10u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 9u, 0x81u);
    t2 = g->edx;
    wr32(sp0 - 0x14u, t1);
    g->esp = sp0;
    t3 = cow_thiscall(g, COW_IMG(0x10127c00u), rd32(COW_IMG(0x10578158u)), 5, t1, sp0 + 0xcu, 0u, 1u, 0u);
    return t3 & 0xffffff00u;
L_100a0310: ;
    if (rd32(rd32(COW_IMG(0x10456a28u))) == 0x60u)
    {
        ecx = rd32(COW_IMG(0x10456a28u));
        goto L_100a031e;
    }
    return 0u;
L_100a031e: ;
    wr32(sp0 - 4u, in_esi);
    wr32(sp0 - 8u, 1u);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t4 = cow_call_regs(g, COW_IMG(0x10123e60u), 0u, g->ecx, g->edx, 1, 1, 1u);
    t5 = g->edx;
    t6 = rd32(sp0 + 0xcu);
    wr8(COW_IMG(0x10487e48u), 1u);
    wr16(COW_IMG(0x1047fb40u), (rd16(t6 + 0x2eu) & 0xffff00ffu) | (rd16(t6 + 0x2eu) >> 8u | 0x20u) << 8u);
    wr16(COW_IMG(0x104804c4u), rd16(t6 + 0x32u));
    eax = COW_IMG(0x10488800u);
    ecx = t6 + 8u;
    esi = t6;
L_100a0354: ;
    t7 = rd32(ecx);
    wr32(eax, t7);
    if ((int32_t)(eax + 4u) < (int32_t)COW_IMG(0x10488820u))
    {
        eax = eax + 4u;
        ecx = ecx + 4u;
        goto L_100a0354;
    }
    ecx = ecx + 4u;
    edx = t7;
    t8 = (ecx & 0xffff0000u) | rd16(rd32(COW_IMG(0x104dfd98u)) + 0x3c35au);
    wr32(sp0 - 8u, t8);
    t9 = (edx & 0xffff0000u) | rd16(esi + 0x30u);
    wr32(sp0 - 0xcu, t9);
    t10 = (rd32(COW_IMG(0x104dfd98u)) & 0xffff0000u) | rd16(esi + 0x2cu);
    wr32(sp0 - 0x10u, t10);
    t11 = (t8 & 0xffff0000u) | rd16(esi + 0x2au);
    wr32(sp0 - 0x14u, t11);
    g->eax = t10;
    g->edx = t9;
    g->esp = sp0 - 4u;
    t12 = cow_cdecl(g, COW_IMG(0x100aed00u), 4, t11, t10, t9, t8);
    t13 = g->edx;
    t14 = rd16(esi + 0x2au);
    wr16(COW_IMG(0x10485f7cu), (uint16_t)t14);
    t15 = rd16(esi + 0x2cu);
    wr16(COW_IMG(0x1047fb3au), (uint16_t)t15);
    t16 = rd32(esi + 4u);
    wr32(COW_IMG(0x10480aa4u), t16);
    wr16(COW_IMG(0x10482f1au), rd16(esi + 0x28u));
    g->esi = rd32(sp0 - 4u);
    return (((t12 & 0xffff0000u) | t15) & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100a02d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100a02d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
