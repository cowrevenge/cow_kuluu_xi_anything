/* f_0x1022d7a0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1022d7a0(Guest* g)
{
    uint32_t eax;
    uint32_t ebx;
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
    uint32_t t48;
    uint32_t t49;
    uint32_t t5;
    uint32_t t50;
    uint32_t t51;
    uint32_t t52;
    uint32_t t53;
    uint32_t t54;
    uint32_t t55;
    uint32_t t56;
    uint32_t t57;
    uint32_t t58;
    uint32_t t59;
    uint32_t t6;
    uint32_t t60;
    uint32_t t61;
    uint32_t t62;
    uint32_t t63;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    cow_frame(g, sp0, 200u);

    wr32(sp0 - 0x7cu, in_ebx);
    wr32(sp0 - 0x80u, in_esi);
    wr32(sp0 - 0x84u, in_edi);
    wr32(sp0 - 0x88u, 0x74u);
    g->esp = sp0 - 0x7cu;
    t1 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, self, in_edx, 1, 3, 0x74u, in_edi, in_esi);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        eax = t1;
        ecx = t2;
        edx = t3;
        wr32(COW_IMG(0x10668378u), 0u);
    }
    else
    {
        eax = t1;
        edx = t3;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x84u;
        t4 = cow_thiscall(g, COW_IMG(0x1022db80u), eax, 0);
        t5 = g->ecx;
        t6 = g->edx;
        wr32(COW_IMG(0x10668378u), t4);
        eax = t4;
        ecx = t5;
        edx = t6;
    }
    wr32(sp0 - 0x88u, 0x14u);
    g->eax = eax;
    g->esp = sp0 - 0x7cu;
    t7 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x14u, in_edi, in_esi);
    t8 = g->ecx;
    t9 = g->edx;
    if (t7 == 0u)
    {
        eax = t7;
        ecx = t8;
        edx = t9;
        wr32(COW_IMG(0x1066837cu), 0u);
    }
    else
    {
        eax = t7;
        edx = t9;
        esi = t7;
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x84u;
        t10 = cow_thiscall(g, COW_IMG(0x10126320u), esi + 4u, 0);
        t11 = g->ecx;
        t12 = g->edx;
        wr16(esi + 0xeu, 0xffffu);
        wr32(esi + 8u, 0u);
        wr8(esi + 0xcu, 1u);
        wr32(esi, COW_IMG(0x1033c578u));
        wr32(COW_IMG(0x1066837cu), esi);
        eax = t10;
        ecx = t11;
        edx = t12;
    }
    wr32(sp0 - 0x88u, 0x15u);
    wr32(sp0 - 0x8cu, 0xdu);
    wr16(sp0 - 0x78u, 0x49u);
    g->eax = eax;
    g->ecx = ecx;
    g->edx = edx;
    g->esp = sp0 - 0x84u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x15u);
    t14 = g->ecx;
    t15 = g->edx;
    wr32(sp0 - 0x90u, 0x16u);
    wr32(sp0 - 0x94u, 0xdu);
    wr32(sp0 - 0x74u, t13);
    wr16(sp0 - 0x70u, 0x4au);
    g->ecx = t14;
    g->edx = t15;
    g->esp = sp0 - 0x8cu;
    t16 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x16u);
    t17 = g->ecx;
    t18 = g->edx;
    wr32(sp0 - 0x98u, 0x17u);
    wr32(sp0 - 0x9cu, 0xdu);
    wr32(sp0 - 0x6cu, t16);
    wr16(sp0 - 0x68u, 0x4bu);
    g->ecx = t17;
    g->edx = t18;
    g->esp = sp0 - 0x94u;
    t19 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x17u);
    t20 = g->ecx;
    t21 = g->edx;
    wr32(sp0 - 0xa0u, 0x18u);
    wr32(sp0 - 0xa4u, 0xdu);
    wr32(sp0 - 0x64u, t19);
    wr16(sp0 - 0x60u, 0x4cu);
    g->ecx = t20;
    g->edx = t21;
    g->esp = sp0 - 0x9cu;
    t22 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x18u);
    t23 = g->ecx;
    t24 = g->edx;
    wr32(sp0 - 0xa8u, 0x83u);
    wr32(sp0 - 0xacu, 0xdu);
    wr32(sp0 - 0x5cu, t22);
    wr16(sp0 - 0x58u, 0x4du);
    g->ecx = t23;
    g->edx = t24;
    g->esp = sp0 - 0xa4u;
    t25 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x83u);
    t26 = g->ecx;
    t27 = g->edx;
    wr32(sp0 - 0xb0u, 0x86u);
    wr32(sp0 - 0xb4u, 0xdu);
    wr32(sp0 - 0x54u, t25);
    wr16(sp0 - 0x50u, 0x4eu);
    g->ecx = t26;
    g->edx = t27;
    g->esp = sp0 - 0xacu;
    t28 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x86u);
    t29 = g->ecx;
    t30 = g->edx;
    wr32(sp0 - 0xb8u, 0x87u);
    wr32(sp0 - 0xbcu, 0xdu);
    wr32(sp0 - 0x4cu, t28);
    wr16(sp0 - 0x48u, 0x4fu);
    g->ecx = t29;
    g->edx = t30;
    g->esp = sp0 - 0xb4u;
    t31 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x87u);
    t32 = g->ecx;
    t33 = g->edx;
    wr32(sp0 - 0xc0u, 0x8fu);
    wr32(sp0 - 0xc4u, 0xdu);
    wr32(sp0 - 0x44u, t31);
    wr16(sp0 - 0x40u, 0x50u);
    g->ecx = t32;
    g->edx = t33;
    g->esp = sp0 - 0xbcu;
    t34 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x8fu);
    t35 = g->ecx;
    t36 = g->edx;
    wr32(sp0 - 0x3cu, t34);
    wr16(sp0 - 0x38u, 0x51u);
    wr32(sp0 - 0x88u, 0x90u);
    wr32(sp0 - 0x8cu, 0xdu);
    g->ecx = t35;
    g->edx = t36;
    g->esp = sp0 - 0x84u;
    t37 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x90u);
    t38 = g->ecx;
    t39 = g->edx;
    wr32(sp0 - 0x90u, 0x9fu);
    wr32(sp0 - 0x94u, 0xdu);
    wr32(sp0 - 0x34u, t37);
    wr16(sp0 - 0x30u, 0x55u);
    g->ecx = t38;
    g->edx = t39;
    g->esp = sp0 - 0x8cu;
    t40 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x9fu);
    t41 = g->ecx;
    t42 = g->edx;
    wr32(sp0 - 0x98u, 0xb7u);
    wr32(sp0 - 0x9cu, 0xdu);
    wr32(sp0 - 0x2cu, t40);
    wr16(sp0 - 0x28u, 0x56u);
    g->ecx = t41;
    g->edx = t42;
    g->esp = sp0 - 0x94u;
    t43 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0xb7u);
    t44 = g->ecx;
    t45 = g->edx;
    wr32(sp0 - 0xa0u, 0xbcu);
    wr32(sp0 - 0xa4u, 0xdu);
    wr32(sp0 - 0x24u, t43);
    wr16(sp0 - 0x20u, 0x57u);
    g->ecx = t44;
    g->edx = t45;
    g->esp = sp0 - 0x9cu;
    t46 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0xbcu);
    t47 = g->ecx;
    t48 = g->edx;
    wr32(sp0 - 0xa8u, 0x98u);
    wr32(sp0 - 0xacu, 0xdu);
    wr32(sp0 - 0x1cu, t46);
    wr16(sp0 - 0x18u, 0x52u);
    g->ecx = t47;
    g->edx = t48;
    g->esp = sp0 - 0xa4u;
    t49 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x98u);
    t50 = g->ecx;
    t51 = g->edx;
    wr32(sp0 - 0xb0u, 0x99u);
    wr32(sp0 - 0xb4u, 0xdu);
    wr32(sp0 - 0x14u, t49);
    wr16(sp0 - 0x10u, 0x53u);
    g->ecx = t50;
    g->edx = t51;
    g->esp = sp0 - 0xacu;
    t52 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x99u);
    t53 = g->ecx;
    t54 = g->edx;
    wr32(sp0 - 0xb8u, 0x9au);
    wr32(sp0 - 0xbcu, 0xdu);
    wr32(sp0 - 0xcu, t52);
    wr16(sp0 - 8u, 0x54u);
    g->ecx = t53;
    g->edx = t54;
    g->esp = sp0 - 0xb4u;
    t55 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xdu, 0x9au);
    t56 = g->ecx;
    t57 = g->edx;
    wr32(sp0 - 4u, t55);
    ecx = t56;
    edx = t57;
    ebx = COW_IMG(0x1066833cu);
    esi = COW_IMG(0x10667a90u);
    edi = sp0 - 0x74u;
L_1022d985: ;
    t58 = rd16(edi - 4u);
    wr32(sp0 - 0x88u, t58);
    g->eax = t58;
    g->esp = sp0 - 0x84u;
    t59 = cow_call_regs(g, COW_IMG(0x1025b580u), g->eax, g->ecx, edx, 1, 1, t58);
    t60 = g->edx;
    wr32(sp0 - 0x88u, t59);
    g->edx = t60;
    t61 = cow_thiscall(g, COW_IMG(0x1022eee0u), esi, 1, t59);
    t62 = g->edx;
    t63 = rd32(edi);
    wr32(ebx, t63);
    if ((int32_t)(esi + 0x94u) < (int32_t)COW_IMG(0x1066833cu))
    {
        ecx = t63;
        edx = t62;
        ebx = ebx + 4u;
        esi = esi + 0x94u;
        edi = edi + 8u;
        goto L_1022d985;
    }
    eax = t61;
    g->ebx = rd32(sp0 - 0x7cu);
    g->esi = rd32(sp0 - 0x80u);
    g->edi = rd32(sp0 - 0x84u);
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1022d7a0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1022d7a0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
