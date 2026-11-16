/* f_0x100ecb30 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=3 */
uint32_t cow_fn_100ecb30(Guest* g)
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg3 = rd32(g->esp + 0xcu);
    cow_frame(g, sp0, 156u);

    wr32(sp0 - 0x58u, in_ebx);
    wr32(sp0 - 0x5cu, in_esi);
    wr32(sp0 - 0x60u, in_edi);
    t1 = rd8(arg3 + 0x38u) >> 1u & 1u;
    wr32(sp0 - 0x64u, t1);
    t2 = rd16(arg3 + 0x12u);
    wr32(sp0 - 0x68u, t2);
    g->ecx = t2;
    g->esp = sp0 - 0x60u;
    cow_call_regs(g, COW_IMG(0x1008aa30u), g->eax, g->ecx, in_edx, 1, 2, t2, t1);
    t3 = g->ecx;
    t4 = g->edx;
    t5 = rd8(arg3 + 0x38u) & 1u;
    wr32(sp0 - 0x6cu, t5);
    t6 = rd16(arg3 + 0x12u);
    wr32(sp0 - 0x70u, t6);
    g->eax = t6;
    g->ecx = t3;
    g->esp = sp0 - 0x68u;
    t7 = cow_call_regs(g, COW_IMG(0x1008a9e0u), g->eax, g->ecx, t5, 1, 2, t6, t5);
    t8 = g->ecx;
    t9 = rd8(arg3 + 0x38u) >> 2u & 3u;
    wr32(sp0 - 0x74u, t9);
    t10 = rd16(arg3 + 0x12u);
    wr32(sp0 - 0x78u, t10);
    g->esp = sp0 - 0x70u;
    t11 = cow_call_regs(g, COW_IMG(0x1008aa80u), g->eax, g->ecx, t10, 1, 2, t10, t9);
    t12 = g->edx;
    t13 = rd8(arg3 + 0x38u) >> 4u & 1u;
    wr32(sp0 - 0x7cu, t13);
    t14 = rd16(arg3 + 0x12u);
    wr32(sp0 - 0x80u, t14);
    g->ecx = t14;
    g->esp = sp0 - 0x78u;
    cow_call_regs(g, COW_IMG(0x1008aad0u), g->eax, g->ecx, t12, 1, 2, t14, t13);
    t15 = g->ecx;
    t16 = g->edx;
    t17 = rd8(arg3 + 0x38u) >> 5u & 1u;
    wr32(sp0 - 0x84u, t17);
    t18 = rd16(arg3 + 0x12u);
    wr32(sp0 - 0x88u, t18);
    g->eax = t18;
    g->ecx = t15;
    g->esp = sp0 - 0x80u;
    t19 = cow_call_regs(g, COW_IMG(0x1008ab20u), g->eax, g->ecx, t17, 1, 2, t18, t17);
    t20 = g->ecx;
    t21 = rd8(arg3 + 0x38u) >> 6u & 1u;
    wr32(sp0 - 0x8cu, t21);
    t22 = rd16(arg3 + 0x12u);
    wr32(sp0 - 0x90u, t22);
    g->edx = t22;
    g->esp = sp0 - 0x88u;
    cow_thiscall_cdecl(g, COW_IMG(0x1008ab70u), t21, 2, t22, t21);
    t23 = g->edx;
    t24 = rd8(arg3 + 0x38u) >> 7u;
    wr32(sp0 - 0x94u, t24);
    t25 = rd16(arg3 + 0x12u);
    wr32(sp0 - 0x98u, t25);
    g->ecx = t25;
    g->esp = sp0 - 0x90u;
    cow_call_regs(g, COW_IMG(0x1008aba0u), g->eax, g->ecx, t23, 1, 2, t25, t24);
    t26 = g->ecx;
    t27 = g->edx;
    if (rd16(arg3 + 0xcu) == 0u)
    {
        ecx = t26;
    }
    else
    {
        edx = (t27 & 0xffff0000u) | rd16(arg3 + 0xcu);
        edi = sp0 - 0x54u;
        eax = 0u;
        ecx = 0x15u;
        while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
        wr32(sp0 - 0x48u, (uint16_t)edx);
        t28 = rd32(arg3 + 8u);
        wr16(sp0 - 0x4cu, 0x13u);
        wr32(sp0 - 0x50u, t28);
        t29 = rd32(arg1 + 0x3c390u);
        wr32(sp0 - 0x54u, t29);
        wr32(sp0 - 0x64u, sp0 - 0x54u);
        wr8(sp0 - 4u, 1u);
        g->ebx = 0u;
        g->ecx = t29;
        g->esp = sp0 - 0x60u;
        cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
        t30 = g->ecx;
        ecx = t30;
    }
    if (rd16(arg3 + 0x10u) == 0u)
    {
        wr8(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x1951cu, 3u);
        wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x1954cu, 0u);
        wr16(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19520u, 0u);
        wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19524u, 0u);
        wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19570u, 0u);
        wr16(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19550u, 0u);
        wr16(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19552u, 0u);
        wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19558u, 0u);
        wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19554u, 0u);
        t44 = rd32(COW_IMG(0x104dfd98u));
        t45 = rd8(arg3 + 0x14u);
        wr8(t44 + t45 * 0x58u + 0x1955cu, 0u);
        eax = t44;
        edx = t45 * 0xbu;
    }
    else
    {
        wr8(rd32(COW_IMG(0x104dfd98u)) + 0x19890u, (uint8_t)(rd8(rd32(COW_IMG(0x104dfd98u)) + 0x19890u) + 1u));
        wr8(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x1951cu, 2u);
        t31 = rd8(arg3 + 0x15u);
        wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x1954cu, t31);
        wr16(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19520u, rd16(arg3 + 0x10u));
        t32 = rd32(arg3 + 4u);
        wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19524u, t32);
        t33 = rd32(arg3 + 8u);
        wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x1956cu, t33);
        t34 = rd32(arg3 + 0x18u);
        wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19570u, t34);
        if (rd16(arg3 + 0x1cu) == 0u)
        {
            ecx = 0u;
        }
        else
        {
            ecx = (uint32_t)(int16_t)rd16(arg3 + 0x1eu);
        }
        wr16(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19550u, (uint16_t)ecx);
        wr16(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19552u, 0u);
        wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19558u, 0u);
        wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19554u, 0u);
        wr8(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x1955cu, 0u);
        if (rd32(arg3 + 0x20u) == 0u)
        {
            eax = rd32(arg3 + 0x20u);
        }
        else
        {
            wr32(sp0 - 0x64u, 0x10u);
            wr16(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19552u, rd16(arg3 + 0x26u));
            t35 = rd16(arg3 + 0x24u);
            wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19558u, t35);
            t36 = rd32(arg3 + 0x20u);
            wr32(rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x19554u, t36);
            wr32(sp0 - 0x68u, arg3 + 0x28u);
            t37 = rd32(COW_IMG(0x104dfd98u)) + rd8(arg3 + 0x14u) * 0x58u + 0x1955cu;
            wr32(sp0 - 0x6cu, t37);
            t38 = rd32(COW_IMG(0x104dfd98u));
            g->esp = sp0 - 0x60u;
            t39 = cow_call_regs(g, COW_IMG(0x10312090u), t38, g->ecx, g->edx, 1, 3, t37, arg3 + 0x28u, 0x10u);
            eax = t39;
        }
        if (rd32(arg3 + 8u) == 0u)
        {
            edx = rd32(arg3 + 8u);
        }
        else
        {
            edx = rd32(arg3 + 8u);
            edi = sp0 - 0x54u;
            eax = 0u;
            ecx = 0x15u;
            while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
            wr32(sp0 - 0x50u, edx);
            wr32(sp0 - 0x64u, sp0 - 0x54u);
            t40 = rd8(arg3 + 0x16u);
            t41 = rd16(arg3 + 0x10u);
            wr16(sp0 - 0x4cu, (uint16_t)((-(t40 != 0u) & 0xcau) + 0x10u));
            wr32(sp0 - 0x48u, t41);
            wr8(sp0 - 4u, 1u);
            g->ebx = 0u;
            g->eax = (-(t40 != 0u) & 0xcau) + 0x10u;
            g->edx = sp0 - 0x54u;
            g->esp = sp0 - 0x60u;
            t42 = cow_cdecl(g, COW_IMG(0x100a1ab0u), 1, sp0 - 0x54u);
            t43 = g->edx;
            eax = t42;
            edx = t43;
        }
    }
    t46 = rd32(COW_IMG(0x104dfd98u));
    wr32(t46 + 0x1988cu, 1u);
    t47 = (edx & 0xffffff00u) | rd8(arg3 + 0x14u);
    wr32(sp0 - 0x64u, t47);
    g->eax = eax;
    g->edx = t47;
    g->esp = sp0 - 0x60u;
    t48 = cow_cdecl(g, COW_IMG(0x100ecf50u), 1, t47);
    t49 = g->edx;
    g->ebx = in_ebx;
    g->edx = t49;
    return (t48 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_100ecb30(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_100ecb30(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
