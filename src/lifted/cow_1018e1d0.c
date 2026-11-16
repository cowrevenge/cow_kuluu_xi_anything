/* f_0x1018e1d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1018e1d0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
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
    uint32_t t30;
    uint32_t t31;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 36u);

    wr32(sp0 - 4u, self);
    wr32(sp0 - 8u, in_ebx);
    wr32(sp0 - 0xcu, in_esi);
    wr32(sp0 - 0x10u, in_edi);
    edx = in_edx;
    esi = 0u;
    edi = rd32(COW_IMG(0x103290f8u));
L_1018e1de: ;
    wr32(sp0 - 0x14u, arg1);
    g->eax = arg1;
    g->edx = edx;
    t1 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x10u;
    t2 = cow_thiscall(g, COW_IMG(0x101c4a90u), t1, 1, arg1);
    t3 = g->ecx;
    t4 = g->edx;
    if ((uint8_t)t2 == 0u)
    {
        eax = t2;
        edx = t4;
        goto L_1018e1fe;
    }
    eax = t2;
    ecx = t3;
    edx = t4;
    wr32(sp0 - 0x14u, 0x64u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t5 = cow_thiscall(g, edi, ecx, 1, 0x64u);
    t6 = g->edx;
    if ((int32_t)esi > 20)
    {
        eax = t5;
        edx = t6;
        goto L_1018e1fe;
    }
    edx = t6;
    esi = esi + 1u;
    goto L_1018e1de;
L_1018e1fe: ;
    wr32(sp0 - 0x14u, arg1);
    g->eax = eax;
    g->edx = edx;
    t7 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x10u;
    t8 = cow_thiscall(g, COW_IMG(0x101c4b70u), t7, 1, arg1);
    t9 = g->ecx;
    t10 = g->edx;
    if ((int32_t)t8 < 0)
    {
        eax = t8;
        edx = t10;
        goto L_1018e2f8;
    }
    eax = t8;
    ecx = t9;
    esi = t8;
    wr32(sp0 - 0x14u, COW_IMG(0x10377ca0u));
    wr32(sp0 - 0x18u, esi);
    wr32(sp0 - 0x1cu, sp0 - 4u);
    g->esp = sp0 - 0xcu;
    cow_call_regs(g, COW_IMG(0x101907a0u), g->eax, ecx, sp0 - 4u, 1, 4, sp0 - 4u, esi, COW_IMG(0x10377ca0u), rd32(sp0 - 0x10u));
    t11 = g->edx;
    edx = t11;
    edi = 0u;
L_1018e22d: ;
    wr32(sp0 - 0x14u, arg1);
    g->eax = arg1;
    g->edx = edx;
    t12 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x10u;
    t13 = cow_thiscall(g, COW_IMG(0x101c4a90u), t12, 1, arg1);
    t14 = g->ecx;
    t15 = g->edx;
    if ((uint8_t)t13 == 0u)
    {
        eax = t13;
        goto L_1018e251;
    }
    eax = t13;
    ecx = t14;
    edx = t15;
    wr32(sp0 - 0x14u, 0x64u);
    g->eax = eax;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    t16 = cow_thiscall(g, rd32(COW_IMG(0x103290f8u)), ecx, 1, 0x64u);
    t17 = g->edx;
    if ((int32_t)edi > 20)
    {
        eax = t16;
        goto L_1018e251;
    }
    edx = t17;
    edi = edi + 1u;
    goto L_1018e22d;
L_1018e251: ;
    wr32(sp0 - 0x14u, 0u);
    wr32(sp0 - 0x18u, esi);
    t18 = rd32(sp0 - 4u);
    wr32(sp0 - 0x1cu, t18);
    wr32(sp0 - 0x20u, arg1);
    g->eax = eax;
    g->edx = arg1;
    t19 = rd32(COW_IMG(0x10662dccu));
    g->esp = sp0 - 0x10u;
    t20 = cow_thiscall(g, COW_IMG(0x101c47a0u), t19, 4, arg1, t18, esi, 0u);
    t21 = g->ecx;
    t22 = g->edx;
    if (t20 != esi)
    {
        ecx = t21;
        edx = t22;
        goto L_1018e2eb;
    }
    eax = t20;
    ecx = t21;
    edx = t22;
    if (esi < 0x64u) goto L_1018e2eb;
    g->edx = edx;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1018e660u), self, 0);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0x14u, esi - 0x64u);
    wr32(self + 0xd4u, esi - 0x64u);
    g->esp = sp0 - 8u;
    t25 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t23, t24, 1, 3, esi - 0x64u, rd32(sp0 - 0x10u), rd32(sp0 - 0xcu));
    t26 = rd32(sp0 - 4u);
    wr32(self + 0xccu, t25);
    esi = t26;
    edi = self;
    ecx = 0x19u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    t27 = rd32(self + 0xd4u);
    wr8(self + 0xc8u, 0u);
    esi = t26 + 0x64u;
    edi = t25;
    ecx = t27 >> 2u;
    while (ecx) { wr32(edi, rd32(esi)); esi += (g->df ? (uint32_t)-4 : 4u); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    ecx = t27 & 3u;
    while (ecx) { wr8(edi, rd8(esi)); esi += (g->df ? (uint32_t)-1 : 1u); edi += (g->df ? (uint32_t)-1 : 1u); ecx--; }
    t28 = rd32(sp0 - 4u);
    wr32(sp0 - 0x18u, t28);
    t29 = rd16(self + 0xd4u);
    wr16(self + 0xd8u, (uint16_t)t29);
    g->eax = t27;
    g->esp = sp0 - 0x14u;
    t30 = cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, (ecx & 0xffff0000u) | t29, t28, 1, 1, t28);
    t31 = g->edx;
    g->ebx = self;
    g->edx = t31;
    g->esp = sp0 - 0x10u;
    cow_thiscall(g, COW_IMG(0x1018e6a0u), self, 0);
    t32 = g->edx;
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = t32;
    return 1u;
L_1018e2eb: ;
    t33 = rd32(sp0 - 4u);
    wr32(sp0 - 0x14u, t33);
    g->eax = t33;
    g->esp = sp0 - 0x10u;
    t34 = cow_call_regs(g, COW_IMG(0x101907d0u), g->eax, ecx, edx, 1, 1, t33);
    t35 = g->edx;
    eax = t34;
    edx = t35;
L_1018e2f8: ;
    g->ebx = rd32(sp0 - 8u);
    g->esi = rd32(sp0 - 0xcu);
    g->edi = rd32(sp0 - 0x10u);
    g->edx = edx;
    return 0xffffffffu;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1018e1d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1018e1d0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
