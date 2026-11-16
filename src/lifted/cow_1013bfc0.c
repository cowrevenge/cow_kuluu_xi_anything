/* f_0x1013bfc0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_1013bfc0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t28;
    uint32_t t29;
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
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 24u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, sp0 - 8u);
    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x1013e560u), sp0 - 8u, self, g->edx, 0, 1, sp0 - 8u);
    t1 = g->ecx;
    t2 = g->edx;
    wr32(sp0 - 0x10u, 1u);
    g->edx = t2;
    t3 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 1u);
    t4 = g->edx;
    if (t3 == 0u)
    {
        eax = t3;
        edx = t4;
    }
    else
    {
        eax = t3;
        wr32(sp0 - 0x10u, in_ebx);
        wr32(sp0 - 0x14u, in_ebp);
        ecx = COW_IMG(0x1036fa1cu);
        edx = self + 0x358u;
L_1013bfeb: ;
        t5 = rd32(rd32(eax) + (uint32_t)(int16_t)rd16(ecx) * 4u);
        wr32(edx, t5);
        if ((int32_t)(ecx + 2u) < (int32_t)COW_IMG(0x1036fa26u))
        {
            ecx = ecx + 2u;
            edx = edx + 4u;
            goto L_1013bfeb;
        }
        edx = edx + 4u;
    }
    g->esp = sp0 - 0xcu;
    cow_thiscall(g, COW_IMG(0x1013bfb0u), self, 0);
    t6 = g->ecx;
    t7 = rd16(self + 0x372u) << 0x10u;
    t8 = rd32(self + 8u);
    t9 = rd16(self + 0x372u);
    wr32(t8 + 0xbcu, t7);
    wr32(sp0 - 0x10u, 0u);
    wr32(t8 + 0xc0u, 0u);
    cow_fastcall(g, COW_IMG(0x1013c180u), self, t8, 1, 0u);
    t10 = g->edx;
    if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
    {
        eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
        ecx = rd32(COW_IMG(0x10456a28u));
        edx = (t10 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
        goto L_1013c069;
    }
    eax = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
    ecx = rd32(COW_IMG(0x10456a28u));
    edx = (t10 & 0xffffff00u) | rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u);
    if (eax == 2u) goto L_1013c078;
    if (eax == 3u) goto L_1013c078;
L_1013c069: ;
    if (eax != 0u) goto L_1013c078;
    wr16(self + 0x34cu, 0x165u);
L_1013c081: ;
    if (rd32(self + 0x14u) == 0u)
    {
        wr32(sp0 - 0x10u, 0x68u);
        g->esp = sp0 - 4u;
        t11 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x68u, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        t12 = g->edx;
        if (t11 == 0u)
        {
            edx = t12;
            eax = 0u;
        }
        else
        {
            eax = t11;
            edx = t12;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t13 = cow_thiscall(g, COW_IMG(0x101c8260u), eax, 0);
            t14 = g->edx;
            eax = t13;
            edx = t14;
        }
        wr32(sp0 - 0x10u, 3u);
        wr32(self + 0x14u, eax);
        g->esp = sp0 - 0xcu;
        cow_fastcall(g, COW_IMG(0x101c8290u), eax, edx, 1, 3u);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(sp0 - 0x10u, 0x1cu);
        t17 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t16, 1, 1, 0x1cu);
        t18 = g->edx;
        wr32(sp0 - 0x10u, t17);
        g->edx = t18;
        t19 = rd32(self + 0x14u);
        cow_thiscall(g, COW_IMG(0x101c8380u), t19, 1, t17);
        t20 = g->ecx;
        t21 = g->edx;
        ecx = t20;
        edx = t21;
    }
    if (rd32(self + 0x18u) == 0u)
    {
        wr32(sp0 - 0x10u, 0x68u);
        g->esp = sp0 - 4u;
        t22 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x68u, rd32(sp0 - 0xcu), rd32(sp0 - 8u));
        t23 = g->edx;
        if (t22 == 0u)
        {
            edx = t23;
            eax = 0u;
        }
        else
        {
            eax = t22;
            edx = t23;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t24 = cow_thiscall(g, COW_IMG(0x101c8260u), eax, 0);
            t25 = g->edx;
            eax = t24;
            edx = t25;
        }
        wr32(sp0 - 0x10u, 0x13u);
        wr32(self + 0x18u, eax);
        g->esp = sp0 - 0xcu;
        cow_fastcall(g, COW_IMG(0x101c8290u), eax, edx, 1, 0x13u);
        t26 = g->ecx;
        t27 = g->edx;
        wr32(sp0 - 0x10u, 0x1bu);
        t28 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, t27, 1, 1, 0x1bu);
        t29 = g->edx;
        wr32(sp0 - 0x10u, t28);
        cow_thiscall(g, COW_IMG(0x101c8380u), rd32(self + 0x18u), 1, t28);
    }
    g->esi = rd32(sp0 - 0xcu);
    return;
L_1013c078: ;
    wr16(self + 0x34cu, 0x135u);
    goto L_1013c081;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1013bfc0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1013bfc0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
