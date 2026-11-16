/* f_0x1010e3c0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_1010e3c0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_4;
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
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t40;
    uint32_t t41;
    uint32_t t42;
    uint32_t t43;
    uint32_t t44;
    uint32_t t45;
    uint32_t t46;
    uint32_t t47;
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
    const uint32_t arg1 = rd32(g->esp + 0x4u);

    t1 = rd32(self + 0x18u);
    wr32(self, COW_IMG(0x10332e8cu));
    wr32(t1 + 8u, 0u);
    if (rd8(self + 4u) != 0u)
    {
        eax = (t1 & 0xffffff00u) | rd8(self + 4u);
    }
    else
    {
        if (rd32(self + 0x10u) == 0u)
        {
            eax = rd32(self + 0x10u);
            goto L_1010e3ef;
        }
        eax = rd32(self + 0x10u);
L_1010e3e2: ;
        wr32(eax, 0u);
        if (rd32(eax + 8u) != 0u)
        {
            eax = rd32(eax + 8u);
            goto L_1010e3e2;
        }
        eax = rd32(eax + 8u);
    }
L_1010e3ef: ;
    if (rd32(self + 0x10u) == 0u)
    {
        ecx = self;
        edx = in_edx;
        goto L_1010e43d;
    }
    edx = in_edx;
    esi = rd32(self + 0x10u);
L_1010e3f9: ;
    t2 = rd32(esi + 8u);
    wr32(esi + 8u, 0u);
    if (rd32(esi) == 0u)
    {
        ebp = t2;
    }
    else
    {
        ebp = t2;
        edi = rd32(esi);
        g->ebx = self;
        g->eax = eax;
        g->esp = sp0 - 0x14u;
        t3 = cow_fastcall(g, COW_IMG(0x1010e0d0u), edi + 8u, edx, 0);
        t4 = g->ecx;
        t5 = g->edx;
        t6 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t4, t5, 1, 1, edi);
        t7 = g->edx;
        eax = t6;
        edx = t7;
    }
    t8 = rd32(esi + 8u);
    wr32(esi, 0xefefefefu);
    if (t8 == 0u)
    {
        ecx = t8;
    }
    else
    {
        ecx = t8;
        g->ebx = self;
        g->esi = esi;
        g->ebp = ebp;
        g->esp = sp0 - 0x14u;
        t9 = cow_fastcall(g, COW_IMG(0x1010e530u), ecx, edx, 1, 1u);
        t10 = g->ecx;
        t11 = g->edx;
        eax = t9;
        ecx = t10;
        edx = t11;
    }
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x14u;
    t12 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, esi);
    t13 = g->ecx;
    t14 = g->edx;
    if (ebp != 0u)
    {
        eax = t12;
        edx = t14;
        esi = ebp;
        goto L_1010e3f9;
    }
    ecx = t13;
    edx = t14;
L_1010e43d: ;
    wr32(self + 0x10u, self + 0x14u);
    wr32(self + 0x18u, self + 8u);
    wr16(self + 6u, 0u);
    wr32(self + 0x10u, 0u);
    t15 = rd32(self + 0x14u);
    if (rd32(self + 0x14u) == 0u)
    {
        eax = 0u;
        loc_4 = t15;
    }
    else
    {
        esi = t15;
        loc_4 = t15;
        wr32(esi + 8u, COW_IMG(0x10332e88u));
        g->eax = 0u;
        g->esp = sp0 - 0x14u;
        t16 = cow_fastcall(g, COW_IMG(0x1010e6a0u), esi + 8u, edx, 0);
        t17 = g->edx;
        wr32(rd32(esi + 0x20u) + 8u, 0u);
        g->ebx = self;
        g->ebp = self + 8u;
        t18 = cow_call_regs(g, COW_IMG(0x1010e730u), t16, esi + 0x1cu, t17, 1, 0);
        t19 = g->edx;
        g->ebx = self;
        g->ebp = self + 8u;
        t20 = cow_call_regs(g, COW_IMG(0x1010e730u), t18, esi + 0x10u, t19, 1, 0);
        t21 = g->ecx;
        t22 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t21, loc_4, 1, 1, loc_4);
        t23 = g->ecx;
        t24 = g->edx;
        eax = t22;
        ecx = t23;
        edx = t24;
    }
    wr32(self + 0x14u, 0xefefefefu);
    if (rd32(self + 0x1cu) != 0u)
    {
        edi = rd32(self + 0x1cu);
        g->edi = edi;
        g->ebp = self + 8u;
        g->esp = sp0;
        t25 = cow_call_regs(g, COW_IMG(0x1010e7c0u), eax, edi, edx, 1, 5, in_edi, in_esi, in_ebp, in_ebx, loc_4);
        t26 = g->ecx;
        t27 = g->edx;
        g->ecx = t26;
        g->edx = t27;
        g->esp = sp0 - 0x14u;
        t28 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, edi);
        t29 = g->ecx;
        t30 = g->edx;
        eax = t28;
        ecx = t29;
        edx = t30;
    }
    if (rd32(self + 8u) == 0u)
    {
        edi = rd32(self + 8u);
    }
    else
    {
        edi = rd32(self + 8u);
        wr32(edi + 8u, COW_IMG(0x10332e88u));
        g->esp = sp0 - 0x14u;
        cow_fastcall(g, COW_IMG(0x1010e6a0u), edi + 8u, edx, 0);
        t31 = g->edx;
        t32 = rd32(edi + 0x20u);
        wr32(t32 + 8u, 0u);
        g->ebx = self;
        g->ebp = self + 8u;
        t33 = cow_call_regs(g, COW_IMG(0x1010e730u), t32, edi + 0x1cu, t31, 1, 0);
        t34 = g->edx;
        g->ebx = self;
        g->ebp = self + 8u;
        t35 = cow_call_regs(g, COW_IMG(0x1010e730u), t33, edi + 0x10u, t34, 1, 0);
        t36 = g->ecx;
        t37 = g->edx;
        t38 = cow_call_regs(g, COW_IMG(0x10311bf0u), g->eax, t36, t37, 1, 1, edi);
        t39 = g->ecx;
        t40 = g->edx;
        eax = t38;
        ecx = t39;
        edx = t40;
    }
    wr32(self + 8u, 0xefefefefu);
    if (rd32(self + 0x10u) != 0u)
    {
        ebp = rd32(self + 0x10u);
        g->edi = edi;
        g->ebp = ebp;
        g->esp = sp0;
        t41 = cow_call_regs(g, COW_IMG(0x1010e7c0u), eax, ebp, edx, 1, 5, in_edi, in_esi, in_ebp, in_ebx, loc_4);
        t42 = g->ecx;
        t43 = g->edx;
        g->ecx = t42;
        g->edx = t43;
        g->esp = sp0 - 0x14u;
        t44 = cow_cdecl(g, COW_IMG(0x101086b0u), 1, ebp);
        t45 = g->ecx;
        t46 = g->edx;
        eax = t44;
        ecx = t45;
        edx = t46;
    }
    if (arg1 & 1u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg1;
        g->edx = edx;
        g->esp = sp0 - 8u;
        cow_cdecl(g, COW_IMG(0x101086b0u), 1, self);
        t47 = g->edx;
        edx = t47;
    }
    g->ebx = in_ebx;
    g->esi = in_esi;
    g->edi = in_edi;
    g->ebp = in_ebp;
    g->edx = edx;
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1010e3c0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1010e3c0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
