/* f_0x101d6900 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
void cow_fn_101d6900(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t loc_30;
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

    wr32(sp0 - 0x24u, in_ebx);
    wr32(sp0 - 0x28u, in_ebp);
    wr32(sp0 - 0x2cu, in_esi);
    wr32(sp0 - 0x30u, in_edi);
    wr32(sp0 - 0x34u, 0x1c2u);
    wr32(sp0 - 0x38u, 0xcu);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t1 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x1c2u);
    t2 = g->ecx;
    t3 = g->edx;
    wr32(sp0 - 0x3cu, 0x1beu);
    wr32(sp0 - 0x40u, 0xcu);
    wr32(sp0 - 0x14u, t1);
    g->ecx = t2;
    g->edx = t3;
    g->esp = sp0 - 0x38u;
    t4 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x1beu);
    t5 = g->ecx;
    t6 = g->edx;
    wr32(sp0 - 0x44u, 0x1bfu);
    wr32(sp0 - 0x48u, 0xcu);
    wr32(sp0 - 0x10u, t4);
    g->ecx = t5;
    g->edx = t6;
    g->esp = sp0 - 0x40u;
    t7 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x1bfu);
    t8 = g->ecx;
    t9 = g->edx;
    wr32(sp0 - 0x4cu, 0x1c0u);
    wr32(sp0 - 0x50u, 0xcu);
    wr32(sp0 - 0xcu, t7);
    g->ecx = t8;
    g->edx = t9;
    g->esp = sp0 - 0x48u;
    t10 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x1c0u);
    t11 = g->ecx;
    t12 = g->edx;
    wr32(sp0 - 0x54u, 0x1c1u);
    wr32(sp0 - 0x58u, 0xcu);
    wr32(sp0 - 8u, t10);
    g->edx = t12;
    g->esp = sp0 - 0x50u;
    t13 = cow_cdecl(g, COW_IMG(0x10152ef0u), 2, 0xcu, 0x1c1u);
    t14 = g->edx;
    wr32(sp0 - 4u, t13);
    wr16(sp0 - 0x20u, 0u);
    wr32(sp0 - 0x34u, 1u);
    wr32(sp0 - 0x38u, 0u);
    wr32(sp0 - 0x3cu, 0u);
    wr16(sp0 - 0x1eu, 0x267u);
    wr16(sp0 - 0x1cu, 0x268u);
    wr16(sp0 - 0x1au, 0x269u);
    wr16(sp0 - 0x18u, 0x26au);
    g->esi = self;
    g->esp = sp0 - 0x30u;
    t15 = cow_fastcall(g, COW_IMG(0x101f7020u), self, t14, 3, 0u, 0u, 1u);
    t16 = g->edx;
    cow_fastcall(g, COW_IMG(0x101d6850u), self, t16, 0);
    t17 = g->ecx;
    t18 = g->edx;
    t19 = rd32(self + 0x5cu);
    wr32(self + 0x54u, 8u);
    if (t19 != 0u)
    {
        ecx = t17;
        edx = t18;
        loc_24 = in_ebx;
        loc_28 = in_ebp;
        loc_2c = in_esi;
        loc_30 = in_edi;
    }
    else
    {
        eax = t19;
        ecx = t17;
        edx = t18;
        wr32(sp0 - 0x34u, 0x2a0u);
        g->eax = eax;
        g->esp = sp0 - 0x28u;
        t20 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, 0x2a0u, in_edi, in_esi);
        t21 = g->ecx;
        t22 = g->edx;
        if (t20 == 0u)
        {
            ecx = t21;
            edx = t22;
            ebx = 0u;
        }
        else
        {
            eax = t20;
            edx = t22;
            ebx = t20;
            ebp = 8u;
            edi = ebx;
L_101d69b7: ;
            g->eax = eax;
            g->edx = edx;
            g->esp = sp0 - 0x30u;
            t23 = cow_thiscall(g, COW_IMG(0x101f4af0u), edi, 0);
            t24 = g->ecx;
            t25 = g->edx;
            if (ebp != 1u)
            {
                eax = t23;
                edx = t25;
                ebp = ebp - 1u;
                edi = edi + 0x54u;
                goto L_101d69b7;
            }
            ecx = t24;
            edx = t25;
        }
        wr32(self + 0x5cu, ebx);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
    }
    if (rd32(self + 0x60u) == 0u)
    {
        t26 = rd32(self + 0x54u) << 2u;
        wr32(sp0 - 0x34u, t26);
        g->eax = t26;
        g->esp = sp0 - 0x28u;
        t27 = cow_call_regs(g, COW_IMG(0x10311bfbu), g->eax, ecx, edx, 1, 3, t26, loc_30, loc_2c);
        wr32(self + 0x60u, t27);
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
    }
    wr32(self + 0x58u, 0u);
    ebx = 0u;
L_101d69e9: ;
    t28 = rd32(self + 0x5cu);
    t29 = rd16(ebx * 2u + sp0 - 0x20u);
    t30 = rd32(self + 0x58u);
    t31 = rd32(self + 0x60u);
    wr8(t30 * 4u + t31, (uint8_t)ebx);
    wr16(t30 * 4u + t31 + 2u, (uint16_t)t29);
    if (ebx != 4u)
    {
        eax = 0x80808080u;
        edx = t31;
        ebp = t30 * 0x54u + t28;
        edi = t30 * 4u + t31;
    }
    else
    {
        edx = t31;
        ebp = t30 * 0x54u + t28;
        edi = t30 * 4u + t31;
        eax = (-(rd8(self + 0x51u) != 0u) & 0x404040u) - 0x7fbfbfc0u;
    }
    wr32(sp0 - 0x34u, eax);
    t32 = rd32(ebx * 4u + sp0 - 0x14u);
    wr32(sp0 - 0x38u, t32);
    wr32(sp0 - 0x3cu, 3u);
    wr32(sp0 - 0x40u, 0u);
    g->esp = sp0 - 0x30u;
    cow_fastcall(g, COW_IMG(0x101f4b20u), ebp, edx, 4, 0u, 3u, t32, eax);
    t33 = g->edx;
    wr32(ebp + 0x48u, edi);
    wr32(sp0 - 0x34u, 1u);
    t34 = rd32(self + 0x58u) + 1u;
    wr32(self + 0x58u, t34);
    t35 = (t33 & 0xffff0000u) | (uint16_t)t34;
    wr32(sp0 - 0x38u, t35);
    t36 = rd32(self + 0x5cu);
    wr32(sp0 - 0x3cu, t36);
    g->esi = self;
    g->edi = edi;
    cow_fastcall(g, COW_IMG(0x101f7020u), self, t35, 3, t36, t35, 1u);
    if ((int32_t)(ebx + 1u) < 5)
    {
        ebx = ebx + 1u;
        loc_24 = rd32(sp0 - 0x24u);
        loc_28 = rd32(sp0 - 0x28u);
        loc_2c = rd32(sp0 - 0x2cu);
        loc_30 = rd32(sp0 - 0x30u);
        goto L_101d69e9;
    }
    g->ebx = rd32(sp0 - 0x24u);
    g->esi = rd32(sp0 - 0x2cu);
    g->edi = rd32(sp0 - 0x30u);
    g->ebp = rd32(sp0 - 0x28u);
    return;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101d6900(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_101d6900(g);
    g->esp = sp0;
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
