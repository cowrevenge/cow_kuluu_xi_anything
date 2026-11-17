/* f_0x10110f00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=u32 stack_args=1 */
uint32_t cow_fn_10110f00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_3c;
    uint32_t loc_40;
    uint32_t loc_44;
    uint32_t loc_48;
    uint32_t loc_4c;
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
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    cow_frame(g, sp0, 144u);

    wr32(sp0 - 0x40u, in_ebx);
    wr32(sp0 - 0x44u, in_ebp);
    wr32(sp0 - 0x48u, in_esi);
    wr32(sp0 - 0x4cu, in_edi);
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, self + 8u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, COW_IMG(0x1036bfccu));
    wr32(sp0 - 0x64u, 2u);
    wr32(sp0 - 0x68u, arg1);
    wr32(sp0 - 0x6cu, self);
    wr32(sp0 - 0x3cu, self);
    g->eax = self + 8u;
    g->edx = in_edx;
    g->esp = sp0 - 0x4cu;
    t1 = cow_thiscall_cdecl(g, COW_IMG(0x10112900u), self, 8, self, arg1, 2u, COW_IMG(0x1036bfccu), 0u, 0u, self + 8u, 0u);
    t2 = g->edx;
    wr32(sp0 - 0x70u, 0u);
    wr32(sp0 - 0x74u, self + 0x10u);
    wr32(sp0 - 0x78u, 0u);
    wr32(sp0 - 0x7cu, 0u);
    wr32(sp0 - 0x80u, COW_IMG(0x1036bfc4u));
    wr32(sp0 - 0x84u, 2u);
    wr32(sp0 - 0x88u, arg1);
    wr32(sp0 - 0x8cu, self);
    g->esp = sp0 - 0x6cu;
    t3 = cow_thiscall_cdecl(g, COW_IMG(0x10112900u), self + 0x10u, 8, self, arg1, 2u, COW_IMG(0x1036bfc4u), 0u, 0u, self + 0x10u, 0u);
    t4 = g->ecx;
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, self + 0x18u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    wr32(sp0 - 0x60u, COW_IMG(0x1036bfbcu));
    wr32(sp0 - 0x64u, 2u);
    wr32(sp0 - 0x68u, arg1);
    wr32(sp0 - 0x6cu, self);
    g->edx = self + 0x18u;
    g->esp = sp0 - 0x4cu;
    t5 = cow_thiscall_cdecl(g, COW_IMG(0x10112900u), t4, 8, self, arg1, 2u, COW_IMG(0x1036bfbcu), 0u, 0u, self + 0x18u, 0u);
    t6 = g->edx;
    g->edx = t6;
    cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x38u, 0);
    t7 = g->edx;
    edx = t7;
    ebp = rd32(self + 0x54u);
    loc_40 = in_ebx;
    loc_44 = in_ebp;
    loc_48 = in_esi;
    loc_4c = in_edi;
    loc_3c = self;
L_10110f6b: ;
    if (rd32(ebp + 4u) == 0u)
    {
        eax = rd32(ebp + 4u);
        goto L_101110b8;
    }
    if (rd32(ebp + 8u) == 0u)
    {
        eax = rd32(ebp + 8u);
        goto L_101110b8;
    }
    edx = sp0 - 0x20u;
    ebx = rd32(ebp);
    edi = 0u;
L_10110f8a: ;
    if (rd32(ebx + edi * 4u) == 0u) goto L_10110fb2;
    esi = rd32(ebx + edi * 4u);
    ecx = 0x1eu;
L_10110f96: ;
    wr8(edx, esi >> (ecx - 6u & 0x1fu) & 0x3fu);
    if ((esi >> (ecx - 6u & 0x1fu) & 0x3fu) == 0u) goto L_10110fac;
    eax = (esi >> (ecx - 6u & 0x1fu) & 0xffffff00u) | (esi >> (ecx - 6u & 0x1fu) & 0x3fu);
    ecx = ecx - 6u;
    wr8(edx, (uint8_t)((uint8_t)eax + 0x20u));
    if ((int32_t)ecx > 0)
    {
        edx = edx + 1u;
        goto L_10110f96;
    }
    edx = edx + 1u;
L_10110fac: ;
    if ((int32_t)(edi + 1u) < 3)
    {
        edi = edi + 1u;
        goto L_10110f8a;
    }
L_10110fb2: ;
    wr32(sp0 - 0x50u, sp0 - 0x20u);
    wr8(edx, 0u);
    g->edx = edx;
    g->esp = sp0 - 0x4cu;
    cow_call_regs(g, COW_IMG(0x101092c0u), sp0 - 0x20u, sp0 - 0x38u, g->edx, 0, 1, sp0 - 0x20u);
    t8 = g->edx;
    if (rd32(rd32(ebp) + 0xcu) != 0u)
    {
        eax = rd32(rd32(ebp) + 0xcu);
        edx = t8;
        wr32(sp0 - 0x50u, COW_IMG(0x10354054u));
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x4cu;
        t10 = cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x38u, 1, COW_IMG(0x10354054u));
        t11 = g->edx;
        t12 = rd32(ebp);
        t13 = cow_thiscall(g, COW_IMG(0x10109110u), sp0 - 0x30u, 0);
        eax = t13;
        edx = sp0 - 0x10u;
        ebx = 0u;
        edi = t12 + 0xcu;
L_10110fff: ;
        if (rd32(ebx * 4u + edi) == 0u) goto L_10111027;
        esi = rd32(ebx * 4u + edi);
        ecx = 0x1eu;
L_1011100b: ;
        wr8(edx, esi >> (ecx - 6u & 0x1fu) & 0x3fu);
        if ((esi >> (ecx - 6u & 0x1fu) & 0x3fu) == 0u)
        {
            eax = (esi >> (ecx - 6u & 0x1fu) & 0xffffff00u) | (esi >> (ecx - 6u & 0x1fu) & 0x3fu);
            goto L_10111021;
        }
        eax = (esi >> (ecx - 6u & 0x1fu) & 0xffffff00u) | (esi >> (ecx - 6u & 0x1fu) & 0x3fu);
        ecx = ecx - 6u;
        wr8(edx, (uint8_t)((uint8_t)eax + 0x20u));
        if ((int32_t)ecx > 0)
        {
            edx = edx + 1u;
            goto L_1011100b;
        }
        eax = (eax & 0xffffff00u) | (uint8_t)((uint8_t)eax + 0x20u);
        edx = edx + 1u;
L_10111021: ;
        if ((int32_t)(ebx + 1u) < 3)
        {
            ebx = ebx + 1u;
            goto L_10110fff;
        }
        ebx = ebx + 1u;
L_10111027: ;
        wr8(edx, 0u);
        wr32(sp0 - 0x50u, sp0 - 0x10u);
        g->edx = sp0 - 0x10u;
        g->esp = sp0 - 0x4cu;
        cow_call_regs(g, COW_IMG(0x101092c0u), eax, sp0 - 0x30u, g->edx, 0, 1, sp0 - 0x10u);
        t14 = g->edx;
        wr32(sp0 - 0x50u, sp0 - 0x30u);
        g->eax = sp0 - 0x30u;
        g->edx = t14;
        t15 = cow_thiscall(g, COW_IMG(0x101091b0u), sp0 - 0x28u, 1, sp0 - 0x30u);
        t16 = g->edx;
        g->edx = t16;
        cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x30u, 0);
        t17 = g->edx;
        if (rd32(sp0 - 0x24u) == 0u)
        {
            edx = t17;
            eax = 0u;
        }
        else
        {
            eax = rd32(sp0 - 0x24u);
            edx = t17;
            eax = rd32(eax + 4u);
        }
        wr32(sp0 - 0x50u, eax);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x4cu;
        t18 = cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x38u, 1, eax);
        t19 = g->edx;
        t20 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x28u, 0);
        eax = t20;
    }
    else
    {
        eax = rd32(rd32(ebp) + 0xcu);
        edx = t8;
        wr32(sp0 - 0x50u, COW_IMG(0x1036bf18u));
        g->eax = eax;
        g->esp = sp0 - 0x4cu;
        t9 = cow_thiscall(g, COW_IMG(0x101093b0u), sp0 - 0x38u, 1, COW_IMG(0x1036bf18u));
        eax = t9;
    }
    wr32(sp0 - 0x50u, 0u);
    wr32(sp0 - 0x54u, sp0 - 0x38u);
    wr32(sp0 - 0x58u, 0u);
    wr32(sp0 - 0x5cu, 0u);
    if (rd8(rd32(ebp) + 0x18u) == 0u)
    {
        ecx = rd32(sp0 - 0x3cu);
        wr32(sp0 - 0x60u, COW_IMG(0x1036bfacu));
    }
    else
    {
        ecx = rd32(sp0 - 0x3cu);
        wr32(sp0 - 0x60u, COW_IMG(0x1036bfb4u));
    }
    wr32(sp0 - 0x64u, 2u);
    wr32(sp0 - 0x68u, arg1);
    wr32(sp0 - 0x6cu, ecx);
    g->ebx = ebx;
    g->edx = sp0 - 0x38u;
    g->esp = sp0 - 0x60u;
    cow_thiscall_cdecl(g, COW_IMG(0x10112900u), ecx, 3, ecx, arg1, 2u);
    t21 = g->edx;
    if (rd32(ebp + 8u) == 0u)
    {
        edx = t21;
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_3c = rd32(sp0 - 0x3cu);
    }
    else
    {
        eax = rd32(ebp + 8u);
        edx = t21;
        ebp = eax;
        loc_40 = rd32(sp0 - 0x40u);
        loc_44 = rd32(sp0 - 0x44u);
        loc_48 = rd32(sp0 - 0x48u);
        loc_4c = rd32(sp0 - 0x4cu);
        loc_3c = rd32(sp0 - 0x3cu);
    }
    goto L_10110f6b;
L_101110b8: ;
    g->eax = eax;
    g->esp = sp0 - 0x4cu;
    t22 = cow_thiscall(g, COW_IMG(0x101090a0u), sp0 - 0x38u, 0);
    g->ebx = rd32(sp0 - 0x40u);
    g->esi = rd32(sp0 - 0x48u);
    g->edi = rd32(sp0 - 0x4cu);
    g->ebp = rd32(sp0 - 0x44u);
    return (t22 & 0xffffff00u) | 1u;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10110f00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10110f00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
