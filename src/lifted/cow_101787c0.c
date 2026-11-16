/* f_0x101787c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101787c0(Guest* g)
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
    uint32_t t25;
    uint32_t t26;
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
    cow_frame(g, sp0, 28u);

    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    if (rd32(self + 0x44u) == 0u)
    {
        eax = rd32(self + 0x44u);
        goto L_101788ec;
    }
    eax = rd32(self + 0x44u);
    if (eax == 1u) goto L_101787df;
    eax = eax - 1u;
    if (eax == 1u)
    {
        edx = in_edx;
        goto L_1017881b;
    }
    return;
L_101787df: ;
    if (rd32(self + rd32(self + 0x38u) * 0x78u + 0x60u) != 0u)
    {
        eax = rd32(self + 0x38u);
        edx = rd32(self + rd32(self + 0x38u) * 0x78u + 0x60u);
        wr32(sp0 - 0x14u, eax);
        g->esp = sp0 - 0x10u;
        cow_thiscall(g, COW_IMG(0x10178ac0u), self, 1, eax);
    }
    t1 = rd32(self + 0x48u);
    wr32(sp0 - 0x14u, t1);
    wr32(sp0 - 0x18u, sp0 - 8u);
    wr32(self + 0x54u, 1u);
    g->edx = t1;
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x10178d90u), self, 2, sp0 - 8u, t1);
    t3 = g->edx;
    wr32(self + 0x4cu, rd32(t2));
    t4 = rd32(self + 0x44u) + 1u;
    wr32(self + 0x44u, t4);
    edx = t3;
L_1017881b: ;
    g->edx = edx;
    t5 = rd32(self + 0x38u);
    g->esp = sp0 - 0x10u;
    t6 = cow_thiscall(g, COW_IMG(0x10071060u), self + 0x4cu, 0);
    t7 = g->edx;
    if ((uint8_t)t6 == 0u) goto L_101788f3;
    edx = t7;
    edi = self + t5 * 0x78u + 0x60u;
    if ((int32_t)rd32(self + 0x48u) >= 700)
    {
        eax = rd32(self + 0x48u);
        goto L_1017884c;
    }
    eax = rd32(self + 0x48u);
    ecx = rd32(self + 0x48u) + 0x64u;
    if ((int32_t)eax < 600) goto L_10178852;
L_1017884c: ;
    ecx = eax + 0x144f7u;
L_10178852: ;
    wr32(sp0 - 0x14u, ecx);
    g->esp = sp0 - 0x10u;
    t8 = cow_stdcall(g, COW_IMG(0x10178dd0u), 1, ecx);
    wr32(sp0 - 0x14u, t8);
    wr32(sp0 - 0x18u, sp0 - 4u);
    g->edx = sp0 - 4u;
    t9 = cow_thiscall(g, COW_IMG(0x10072fd0u), rd32(COW_IMG(0x1047d128u)), 2, sp0 - 4u, t8);
    t10 = g->edx;
    if (rd32(t9) == 0u)
    {
        edx = t10;
        eax = 0u;
    }
    else
    {
        eax = rd32(t9);
        edx = t10;
        eax = rd32(eax);
    }
    wr32(edi + 0x54u, eax);
    wr32(self + 0x54u, 0u);
    if (rd32(edi + 0x54u) == 0u)
    {
        ecx = rd32(edi + 0x54u);
    }
    else
    {
        ecx = rd32(edi + 0x54u);
        g->edx = edx;
        g->esp = sp0 - 0x10u;
        t11 = cow_call_regs(g, COW_IMG(0x10071e90u), eax, ecx, g->edx, 1, 0);
        t12 = g->ecx;
        t13 = g->edx;
        eax = t11;
        ecx = t12;
        edx = t13;
    }
    t14 = (eax & 0xffff0000u) | rd16(self + 0x48u);
    wr32(sp0 - 0x14u, t14);
    wr32(sp0 - 0x18u, 1u);
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t15 = cow_cdecl(g, COW_IMG(0x100fc680u), 2, 1u, t14);
    t16 = g->edx;
    wr8(COW_IMG(0x10376ee8u), (uint8_t)t15);
    t17 = rd32(self + 0x48u);
    wr32(self + 0x17cu, t17);
    wr32(sp0 - 0x14u, 1u);
    g->edx = t16;
    t18 = cow_thiscall(g, COW_IMG(0x10176dd0u), self + 0x34330u, 1, 1u);
    t19 = g->edx;
    t20 = cow_thiscall(g, COW_IMG(0x1017a630u), self, 0);
    wr32(sp0 - 0x14u, edi);
    t21 = rd32(edi + 0x54u);
    wr32(sp0 - 0x18u, t21);
    g->edx = t21;
    cow_thiscall(g, COW_IMG(0x10186d30u), self, 2, t21, edi);
    t22 = g->ecx;
    t23 = g->edx;
    wr32(sp0 - 0x14u, 0x30317665u);
    g->ecx = t22;
    g->edx = t23;
    t24 = cow_cdecl(g, COW_IMG(0x101889c0u), 1, 0x30317665u);
    t25 = g->ecx;
    t26 = g->edx;
    wr32(self + 0x50u, t24);
    cow_call_regs(g, COW_IMG(0x100852d0u), g->eax, g->ecx, t26, 1, 0);
    wr32(self + 0x44u, 0u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
L_101788ec: ;
    g->esp = sp0 - 0x10u;
    cow_call_regs(g, COW_IMG(0x10178790u), eax, self, g->edx, 1, 0);
L_101788f3: ;
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101787c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101787c0(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
