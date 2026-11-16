/* f_0x101e4d10 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=0 */
uint32_t cow_fn_101e4d10(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
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
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0x10u, in_esi);
    wr32(sp0 - 0x14u, in_edi);
    if (rd8(self + 0x894u) == 1u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x894u);
        goto L_101e4d29;
    }
    eax = (in_eax & 0xffffff00u) | rd8(self + 0x894u);
    if ((uint8_t)eax != 2u)
    {
        edx = in_edx;
        goto L_101e4e38;
    }
L_101e4d29: ;
    wr32(sp0 - 0x18u, eax);
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x24u, sp0 - 4u);
    g->eax = sp0 - 4u;
    g->edx = in_edx;
    g->esp = sp0 - 0x14u;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x100e9730u), self, 4, sp0 - 4u, 0u, 0u, eax);
    t2 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t2;
        goto L_101e4e38;
    }
    eax = t1;
    edx = t2;
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t3 = cow_thiscall(g, COW_IMG(0x1020a420u), self, 0);
    t4 = g->edx;
    if (rd8(rd32(sp0 - 4u) + 8u) == 1u)
    {
        eax = rd8(rd32(sp0 - 4u) + 8u) - 1u;
        ecx = rd32(sp0 - 4u);
        edx = t4;
        edi = t3;
        goto L_101e4da2;
    }
    eax = rd8(rd32(sp0 - 4u) + 8u) - 1u;
    edx = t4;
    edi = t3;
    if (eax == 1u)
    {
        eax = eax - 1u;
        goto L_101e4d8e;
    }
    eax = eax - 1u;
    if (eax != 1u)
    {
        eax = eax - 1u;
        goto L_101e4d71;
    }
    eax = eax - 1u;
L_101e4d5e: ;
    wr32(sp0 - 0x18u, 0u);
    wr32(sp0 - 0x1cu, 1u);
    wr32(sp0 - 0x20u, COW_IMG(0x1037f3d0u));
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t21 = cow_thiscall(g, COW_IMG(0x1015e350u), COW_IMG(0x10621838u), 3, COW_IMG(0x1037f3d0u), 1u, 0u);
    t22 = g->edx;
    eax = t21;
    edx = t22;
L_101e4d71: ;
    if (edi != 0u)
    {
        wr32(sp0 - 0x18u, edi + 4u);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t23 = cow_call_regs(g, COW_IMG(0x1020b3e0u), eax, g->ecx, g->edx, 0, 1, edi + 4u);
        t24 = g->edx;
        eax = t23;
        edx = t24;
    }
    g->esi = rd32(sp0 - 0x10u);
    g->edi = rd32(sp0 - 0x14u);
    g->edx = edx;
    return (eax & 0xffffff00u) | 1u;
L_101e4d8e: ;
    t5 = (edx & 0xffffff00u) | rd8(self + 0x894u);
    wr32(sp0 - 0x18u, t5);
    g->edx = t5;
    g->esp = sp0 - 0x14u;
    t6 = cow_call_regs(g, COW_IMG(0x101e6b30u), eax, rd32(COW_IMG(0x1066354cu)), g->edx, 0, 1, t5);
    t7 = g->edx;
    eax = t6;
    edx = t7;
    goto L_101e4d71;
L_101e4da2: ;
    wr32(sp0 - 0xcu, 0u);
    wr8(sp0 - 8u, 0u);
    if (edi == 0u) goto L_101e4e38;
    wr32(sp0 - 0x18u, sp0 - 0xcu);
    t8 = (ecx & 0xffffff00u) | rd8(self + 0x894u);
    wr32(sp0 - 0x1cu, t8);
    g->eax = sp0 - 0xcu;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t9 = cow_thiscall_cdecl(g, COW_IMG(0x101e4ca0u), t8, 3, t8, sp0 - 0xcu, rd32(sp0 - 0x14u));
    t10 = g->edx;
    if ((uint8_t)t9 == 0u)
    {
        eax = t9;
        edx = t10;
        goto L_101e4e38;
    }
    wr32(sp0 - 0x18u, sp0 - 8u);
    t11 = rd32(sp0 - 0xcu);
    wr32(sp0 - 0x1cu, t11);
    wr32(sp0 - 0x20u, edi + 0x40u);
    g->eax = t11;
    g->ecx = edi + 0x40u;
    g->edx = sp0 - 8u;
    g->esp = sp0 - 0x14u;
    t12 = cow_cdecl(g, COW_IMG(0x101e4ce0u), 3, edi + 0x40u, t11, sp0 - 8u);
    t13 = g->ecx;
    t14 = g->edx;
    if ((uint8_t)t12 == 0u)
    {
        eax = t12;
        edx = t14;
        goto L_101e4e38;
    }
    ecx = t13;
    if (rd8(edi + (uint8_t)rd32(sp0 - 8u) + 0x3cu) == 1u)
    {
        eax = rd8(edi + (uint8_t)rd32(sp0 - 8u) + 0x3cu) - 1u;
        edx = (uint8_t)rd32(sp0 - 8u);
        goto L_101e4d5e;
    }
    eax = rd8(edi + (uint8_t)rd32(sp0 - 8u) + 0x3cu) - 1u;
    edx = (uint8_t)rd32(sp0 - 8u);
    if (eax == 1u)
    {
        eax = eax - 1u;
        t18 = (ecx & 0xffffff00u) | rd8(self + 0x894u);
        wr32(sp0 - 0x18u, t18);
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t19 = cow_call_regs(g, COW_IMG(0x101e6aa0u), eax, rd32(COW_IMG(0x10663548u)), g->edx, 0, 1, t18);
        t20 = g->edx;
        eax = t19;
        edx = t20;
    }
    else
    {
        eax = eax - 1u;
        if (eax != 1u)
        {
            eax = eax - 1u;
        }
        else
        {
            eax = eax - 1u;
            t15 = (eax & 0xffffff00u) | rd8(self + 0x894u);
            wr32(sp0 - 0x18u, t15);
            g->edx = edx;
            g->esp = sp0 - 0x14u;
            t16 = cow_call_regs(g, COW_IMG(0x101e69c0u), t15, rd32(COW_IMG(0x10663544u)), g->edx, 0, 1, t15);
            t17 = g->edx;
            eax = t16;
            edx = t17;
        }
    }
    goto L_101e4d71;
L_101e4e38: ;
    g->edx = edx;
    return eax & 0xffffff00u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e4d10(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e4d10(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
