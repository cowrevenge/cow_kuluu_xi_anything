/* f_0x101ea150 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101ea150(Guest* g)
{
    double d24;
    double d28;
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t25;
    uint32_t t26;
    uint32_t t27;
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 92u);

    wr32(sp0 - 0x24u, in_ebp);
    wr32(sp0 - 0x28u, in_esi);
    g->edx = in_edx;
    g->esp = sp0 - 0x28u;
    t1 = cow_stdcall(g, COW_IMG(0x101e8880u), 0);
    t2 = g->edx;
    if (t1 != 0u)
    {
        eax = t1;
        goto L_101ea178;
    }
    edx = t2;
    wr32(sp0 - 0x2cu, 1u);
    t3 = rd32(self + 8u);
    wr32(sp0 - 0x30u, t3);
    g->edx = edx;
    g->esp = sp0 - 0x28u;
    t4 = cow_call_regs(g, COW_IMG(0x1015e790u), t3, COW_IMG(0x10621838u), g->edx, 0, 2, t3, 1u);
    t5 = g->edx;
    g->edx = t5;
    return t4;
L_101ea178: ;
    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_edi);
    wr32(sp0 - 0x34u, sp0 - 0x20u);
    t6 = rd32(self + 0x30u);
    g->esp = sp0 - 0x30u;
    cow_call_regs(g, COW_IMG(0x10118f70u), eax, rd32(self + 8u), g->edx, 0, 1, sp0 - 0x20u);
    if ((int32_t)rd32(self + 0x30u) >= 4)
    {
        ecx = 4u;
        edi = eax + t6 * 4u + 4u;
        eax = rd32(self + 0x30u);
    }
    else
    {
        edi = eax + t6 * 4u + 4u;
        eax = rd32(self + 0x30u);
        ecx = eax;
    }
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0x80808080u);
    t7 = (uint32_t)(int16_t)rd16(sp0 - 0x1eu) + 8u;
    wr32(sp0 - 0x40u, t7);
    t8 = (uint32_t)(int16_t)rd16(sp0 - 0x20u) + 4u;
    wr32(sp0 - 0x44u, t8);
    g->edx = t8;
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(ecx * 4u + self + 0x18u), 5, t8, t7, 0x80808080u, 0u, 0u);
    t9 = g->edx;
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0x80808080u);
    t10 = (uint32_t)(int16_t)rd16(sp0 - 0x1eu) + 6u;
    wr32(sp0 - 0x40u, t10);
    t11 = (uint32_t)(int16_t)rd16(sp0 - 0x20u) + 0x20u;
    wr32(sp0 - 0x44u, t11);
    cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + ((int32_t)eax >= 4) * 4u + 0x38u), 5, t11, t10, 0x80808080u, 0u, 0u);
    wr32(sp0 - 0x34u, 0u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0x80808080u);
    t12 = (uint32_t)(int16_t)rd16(sp0 - 0x1eu) + 0x14u;
    wr32(sp0 - 0x40u, t12);
    t13 = (uint32_t)(int16_t)rd16(sp0 - 0x20u) + 0x20u;
    wr32(sp0 - 0x44u, t13);
    g->eax = t13;
    t14 = rd32(self + rd32(self + 0x30u) * 4u + 0x40u);
    t15 = cow_thiscall(g, COW_IMG(0x1011fb60u), t14, 5, t13, t12, 0x80808080u, 0u, 0u);
    t16 = g->ecx;
    t17 = rd32(edi) & 0xfu;
    wr32(sp0 - 0x34u, t17);
    wr32(sp0 - 0x38u, 0x59u);
    wr32(sp0 - 0x3cu, 0xau);
    g->ecx = t16;
    g->edx = t17;
    g->esp = sp0 - 0x34u;
    t18 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xau, 0x59u);
    t19 = g->ecx;
    t20 = g->edx;
    wr32(sp0 - 0x38u, t18);
    wr32(sp0 - 0x3cu, sp0 - 0x10u);
    g->ebx = (int32_t)eax >= 4;
    g->esp = sp0 - 0x28u;
    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, t18, rd32(sp0 - 0x34u), rd32(sp0 - 0x30u), rd32(sp0 - 0x2cu));
    wr32(sp0 - 0x40u, 0x3f800000u);
    wr32(sp0 - 0x44u, 0x3f800000u);
    wr32(sp0 - 0x48u, 1u);
    wr32(sp0 - 0x4cu, 0x80808080u);
    wr32(sp0 - 0x50u, sp0 - 0x10u);
    t21 = rd32(sp0 - 0x1eu) + 0x40u;
    wr32(sp0 - 0x54u, t21);
    t22 = rd32(sp0 - 0x1cu) - 0x10u;
    wr32(sp0 - 0x58u, t22);
    g->esp = sp0 - 0x3cu;
    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), sp0 - 0x10u, 7, t22, t21, sp0 - 0x10u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
    t23 = rd32(edi) >> 0x12u & 0x7fu;
    wr32(sp0 - 0x18u, t23);
    wr32(sp0 - 0x14u, 0u);
    d24 = (double)(float)(double)(int64_t)cow_i64(t23, 0u);
    wrf32(sp0 - 0x34u, (float)d24);
    t25 = rd32(sp0 - 0x1eu) + 0x5eu;
    wr32(sp0 - 0x38u, t25);
    t26 = rd32(sp0 - 0x20u) + 0x1du;
    wr32(sp0 - 0x3cu, t26);
    g->esp = sp0 - 0x30u;
    cow_thiscall(g, COW_IMG(0x101ea030u), self, 3, t26, t25, cow_f2bits(d24));
    wr32(sp0 - 0x14u, 0u);
    t27 = rd32(edi) >> 0x19u;
    wr32(sp0 - 0x18u, t27);
    wr32(sp0 - 0x34u, t27);
    d28 = (double)(float)(double)(int64_t)cow_i64(t27, 0u);
    wrf32(sp0 - 0x34u, (float)d28);
    t29 = rd32(sp0 - 0x1eu) + 0x7eu;
    wr32(sp0 - 0x38u, t29);
    t30 = rd32(sp0 - 0x20u) + 0x1du;
    wr32(sp0 - 0x3cu, t30);
    g->eax = t30;
    g->edx = t29;
    t31 = cow_thiscall(g, COW_IMG(0x101ea030u), self, 3, t30, t29, cow_f2bits(d28));
    t32 = g->edx;
    if (rd32(self + 0x34u) == 0u)
    {
        eax = t31;
        edx = t32;
        ebx = rd32(sp0 - 0x2cu);
        edi = rd32(sp0 - 0x30u);
    }
    else
    {
        ecx = rd32(self + 0x34u);
        ebx = rd32(sp0 - 0x2cu);
        edi = rd32(sp0 - 0x30u);
        wr32(sp0 - 0x2cu, 0u);
        wr32(sp0 - 0x30u, 0u);
        wr32(sp0 - 0x34u, 0x80808080u);
        t33 = (uint32_t)(int16_t)rd16(sp0 - 0x1eu);
        wr32(sp0 - 0x38u, t33);
        t34 = (uint32_t)(int16_t)rd16(sp0 - 0x20u);
        wr32(sp0 - 0x3cu, t34);
        g->eax = t34;
        g->edx = t33;
        g->esp = sp0 - 0x28u;
        t35 = cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t34, t33, 0x80808080u, 0u, 0u);
        t36 = g->edx;
        eax = t35;
        edx = t36;
    }
    g->ebx = ebx;
    g->esi = rd32(sp0 - 0x28u);
    g->edi = edi;
    g->ebp = rd32(sp0 - 0x24u);
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101ea150(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101ea150(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
