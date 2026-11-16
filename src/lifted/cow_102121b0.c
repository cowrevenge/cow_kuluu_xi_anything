/* f_0x102121b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_102121b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;

    g->edx = in_edx;
    g->esp = sp0 - 0xcu;
    t1 = cow_thiscall(g, COW_IMG(0x10216c20u), self + 0x17cu, 0);
    t2 = g->edx;
    g->edx = t2;
    t3 = cow_thiscall(g, COW_IMG(0x10216c20u), self + 0x18au, 0);
    t4 = g->edx;
    g->edx = t4;
    t5 = cow_thiscall(g, COW_IMG(0x10216c20u), self + 0x198u, 0);
    t6 = g->edx;
    g->edx = t6;
    t7 = cow_thiscall(g, COW_IMG(0x10216c20u), self + 0x1a6u, 0);
    t8 = g->edx;
    g->edx = t8;
    cow_thiscall(g, COW_IMG(0x10216c20u), self + 0x1b4u, 0);
    t9 = g->edx;
    t10 = rd32(sp0 + 4u);
    wr32(self, COW_IMG(0x1033bcecu));
    t11 = rd32(t10 + 8u);
    wr32(self + 8u, t11);
    g->esp = sp0 - 4u;
    t12 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t11, t9, 1, 3, 0x20u, in_edi, in_esi);
    t13 = g->ecx;
    t14 = g->edx;
    if (t12 == 0u)
    {
        ecx = t13;
        edx = t14;
        edi = 0u;
    }
    else
    {
        edx = t14;
        edi = t12;
        g->esp = sp0 - 0xcu;
        t15 = cow_fastcall(g, COW_IMG(0x10211e30u), edi + 4u, edx, 1, 0x94u);
        t16 = g->edx;
        g->edx = t16;
        cow_thiscall(g, COW_IMG(0x10216c20u), edi + 0x10u, 0);
        t17 = g->ecx;
        t18 = g->edx;
        wr32(edi, COW_IMG(0x1033bce0u));
        ecx = t17;
        edx = t18;
    }
    wr32(self + 0xcu, edi);
    wr32(sp0 + 4u, 0x1fu);
    ebp = self + 0x10u;
L_1021223c: ;
    g->esp = sp0 - 8u;
    t19 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x2cu, in_ebp, in_edi);
    t20 = g->ecx;
    t21 = g->edx;
    if (t19 == 0u)
    {
        ecx = t20;
        edx = t21;
        edi = 0u;
    }
    else
    {
        edx = t21;
        edi = t19;
        g->esp = sp0 - 0x10u;
        t22 = cow_fastcall(g, COW_IMG(0x10211e30u), edi + 4u, edx, 1, 0x400u);
        t23 = g->edx;
        g->edx = t23;
        cow_thiscall(g, COW_IMG(0x10216c20u), edi + 0x10u, 0);
        t24 = g->ecx;
        t25 = g->edx;
        wr32(edi, COW_IMG(0x1033bcd4u));
        ecx = t24;
        edx = t25;
    }
    t26 = rd32(sp0 + 4u);
    wr32(ebp, edi);
    wr32(sp0 + 4u, t26 - 1u);
    if (t26 != 1u)
    {
        ebp = ebp + 4u;
        goto L_1021223c;
    }
    wr32(sp0 + 4u, 0x1fu);
    ebp = self + 0x8cu;
L_1021228a: ;
    g->esp = sp0 - 8u;
    t27 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x2cu, in_ebp, in_edi);
    t28 = g->ecx;
    t29 = g->edx;
    if (t27 == 0u)
    {
        ecx = t28;
        edx = t29;
        edi = 0u;
    }
    else
    {
        edx = t29;
        edi = t27;
        g->esp = sp0 - 0x10u;
        t30 = cow_fastcall(g, COW_IMG(0x10211e30u), edi + 4u, edx, 1, 0xfa0u);
        t31 = g->edx;
        g->edx = t31;
        cow_thiscall(g, COW_IMG(0x10216c20u), edi + 0x10u, 0);
        t32 = g->ecx;
        t33 = g->edx;
        wr32(edi, COW_IMG(0x1033bcd4u));
        ecx = t32;
        edx = t33;
    }
    t34 = rd32(sp0 + 4u);
    wr32(ebp, edi);
    wr32(sp0 + 4u, t34 - 1u);
    if (t34 != 1u)
    {
        ebp = ebp + 4u;
        goto L_1021228a;
    }
    g->esp = sp0 - 8u;
    t35 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x38u, in_ebp, in_edi);
    t36 = g->edx;
    if (t35 == 0u)
    {
        edx = t36;
        edi = 0u;
    }
    else
    {
        edx = t36;
        edi = t35;
        g->esp = sp0 - 0xcu;
        t37 = cow_fastcall(g, COW_IMG(0x10211e30u), edi + 4u, edx, 1, 0x80u);
        t38 = g->edx;
        g->edx = t38;
        t39 = cow_thiscall(g, COW_IMG(0x10216c20u), edi + 0x10u, 0);
        t40 = g->edx;
        wr32(edi, COW_IMG(0x1033bcc8u));
        g->edx = t40;
        cow_thiscall(g, COW_IMG(0x10216c20u), edi + 0x28u, 0);
        t41 = g->ecx;
        t42 = g->edx;
        wr32(edi, COW_IMG(0x1033bcbcu));
        wr8(edi + 0x20u, 0u);
        g->esp = sp0 - 4u;
        t43 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, t41, t42, 1, 3, 0x6b4u, in_edi, in_esi);
        t44 = g->edx;
        if (t43 == 0u)
        {
            edx = t44;
            wr8(edi + 0x36u, 0u);
            wr32(edi + 0x24u, 0u);
        }
        else
        {
            eax = t43;
            edx = t44;
            g->edx = edx;
            g->esp = sp0 - 0xcu;
            t45 = cow_thiscall(g, COW_IMG(0x101c5be0u), eax, 8, 8u, 0x20u, self, COW_IMG(0x102132d0u), COW_IMG(0x103d3c84u), 0xc0u, 0x3cu, 0x8cu);
            t46 = g->edx;
            wr32(edi + 0x24u, t45);
            wr8(edi + 0x36u, 0u);
            edx = t46;
        }
    }
    wr32(self + 0x108u, edi);
    wr32(self + 0x10cu, 0u);
    wr16(self + 0x15cu, 0u);
    wr16(self + 0x15eu, 0x1f4u);
    wr16(self + 0x160u, 0xc8u);
    wr16(self + 0x162u, 0x14u);
    wr16(self + 0x164u, 0x3cu);
    wr16(self + 0x166u, 8u);
    wr16(self + 0x168u, 0x1cu);
    wr16(self + 0x16au, 0xau);
    wr16(self + 0x16cu, 0x14u);
    wr16(self + 0x15au, 0xau);
    wr16(self + 0x16eu, 0x14u);
    wr16(self + 0x170u, 0x14u);
    wr16(self + 0x172u, 0xau);
    wr16(self + 0x174u, 0xau);
    wr16(self + 0x176u, 0xfu);
    wr32(self + 0x110u, 0u);
    wr8(self + 0x114u, 0u);
    wr8(self + 0x120u, 0u);
    wr32(self + 0x124u, 0u);
    wr32(self + 0x128u, 0u);
    wr32(self + 0x130u, 0u);
    wr32(self + 0x134u, 0u);
    wr32(self + 0x144u, 0u);
    wr32(self + 0x150u, 0u);
    g->esp = sp0 - 4u;
    t47 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, 0x14u, edx, 1, 3, 0x20u, in_edi, in_esi);
    wr32(self + 0x140u, t47);
    wr8(self + 0x1c2u, 1u);
    wr8(self + 0x1c3u, 0u);
    wr8(self + 0x1c4u, 0u);
    wr8(self + 0x1c5u, 0u);
    return self;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_102121b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_102121b0(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
