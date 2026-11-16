/* f_0x101e0e30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_101e0e30(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 4u, in_esi);
    wr32(self + 0x70u, arg3);
    if (rd32(COW_IMG(0x1057817cu)) == 0u) goto L_101e0e50;
    eax = rd32(COW_IMG(0x1057817cu));
    if (rd32(eax + 8u) == 0u) goto L_101e0e50;
    return eax & 0xffffff00u;
L_101e0e50: ;
    wr32(sp0 - 8u, sp0 + 0xcu);
    g->edx = in_edx;
    g->esp = sp0 - 4u;
    t1 = cow_cdecl(g, COW_IMG(0x100eb800u), 1, sp0 + 0xcu);
    t2 = g->edx;
    if ((uint8_t)t1 != 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101e0e77;
    }
    edx = t2;
    wr32(sp0 - 8u, 0x8cu);
    g->esp = sp0 - 4u;
    t3 = cow_thiscall(g, COW_IMG(0x10129e30u), rd32(COW_IMG(0x10578158u)), 1, 0x8cu);
    g->esi = rd32(sp0 - 4u);
    return t3 & 0xffffff00u;
L_101e0e77: ;
    wr32(sp0 - 8u, in_ebx);
    g->esp = sp0 - 8u;
    cow_thiscall(g, COW_IMG(0x101e06c0u), self, 0);
    t4 = rd32(rd32(COW_IMG(0x10663740u)) + 0x5cu);
    t5 = rd32(COW_IMG(0x10663740u));
    wr32(self + 0x4cu, t4);
    wr32(sp0 - 0xcu, rd32(COW_IMG(0x106634d0u)));
    cow_thiscall(g, COW_IMG(0x101f23a0u), rd32(COW_IMG(0x10663740u)), 1, rd32(COW_IMG(0x106634d0u)));
    t6 = rd32(COW_IMG(0x106634d0u));
    wr8(t6 + 4u, (uint8_t)arg1);
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        edx = (t6 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_101e0ec3;
    }
    ecx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    edx = (t6 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (ecx == 2u) goto L_101e0ed9;
    if (ecx == 3u) goto L_101e0ed9;
L_101e0ec3: ;
    if (ecx == 0u)
    {
        wr32(sp0 - 0xcu, ecx);
        wr32(sp0 - 0x10u, 1u);
        wr32(sp0 - 0x14u, COW_IMG(0x1037f2c4u));
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f2c4u), 1u, ecx);
        t7 = g->edx;
        edx = t7;
    }
L_101e0ed9: ;
    wr32(sp0 - 0xcu, 0u);
    wr32(sp0 - 0x10u, 1u);
    wr32(sp0 - 0x14u, COW_IMG(0x1037f2b0u));
    g->edx = edx;
    g->esp = sp0 - 8u;
    t8 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f2b0u), 1u, 0u);
    t9 = g->edx;
    wr8(self + 0x14u, (uint8_t)arg1);
    wr16(self + 0x20u, (uint16_t)arg2);
    if (rd32(COW_IMG(0x106634b8u)) == 0u)
    {
        eax = (t8 & 0xffff0000u) | (uint16_t)arg2;
        ebx = rd32(sp0 - 8u);
    }
    else
    {
        eax = (t8 & 0xffff0000u) | (uint16_t)arg2;
        ecx = rd32(COW_IMG(0x106634b8u));
        edx = t9;
        ebx = rd32(sp0 - 8u);
        wr32(sp0 - 8u, COW_IMG(0x1037f2acu));
        g->eax = eax;
        g->esp = sp0 - 4u;
        t10 = cow_stdcall(g, COW_IMG(0x101e1e20u), 1, COW_IMG(0x1037f2acu));
        eax = t10;
    }
    g->ebx = ebx;
    g->esi = rd32(sp0 - 4u);
    return (eax & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e0e30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e0e30(g);
    g->esp = sp0;
    rt_return(g, r, 12u);
}
/* COW_ADAPTER END */
