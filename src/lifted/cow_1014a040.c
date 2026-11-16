/* f_0x1014a040 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_1014a040(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
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
    uint32_t t2;
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
    cow_frame(g, sp0, 128u);

    wr32(sp0 - 0x44u, in_ebx);
    wr32(sp0 - 0x48u, in_ebp);
    wr32(sp0 - 0x4cu, in_edi);
    edi = sp0 - 0x3fu;
    eax = 0u;
    ecx = 0xfu;
    while (ecx) { wr32(edi, (uint32_t)eax); edi += (g->df ? (uint32_t)-4 : 4u); ecx--; }
    wr16(edi, (uint16_t)(uint16_t)eax); edi += (g->df ? (uint32_t)-2 : 2u);
    wr8(edi, (uint8_t)(uint8_t)eax); edi += (g->df ? (uint32_t)-1 : 1u);
    g->edx = in_edx;
    g->esp = sp0 - 0x4cu;
    t1 = cow_call_regs(g, COW_IMG(0x100991f0u), eax, g->ecx, g->edx, 1, 0);
    t2 = g->edx;
    if (rd32(COW_IMG(0x10578420u)) == 0u)
    {
        eax = t1;
        edx = t2;
        esi = in_esi;
    }
    else
    {
        eax = t1;
        ecx = rd32(COW_IMG(0x10578420u));
        edx = t2;
        edi = t1;
        if (edi == 0u)
        {
            esi = in_esi;
        }
        else
        {
            if (rd8(ecx + 0x54u) != 0u)
            {
                eax = (eax & 0xffffff00u) | rd8(ecx + 0x54u);
                eax = (uint8_t)eax;
            }
            else
            {
                g->edx = edx;
                g->esp = sp0 - 0x4cu;
                t3 = cow_thiscall(g, COW_IMG(0x1014a3a0u), ecx, 0);
                t4 = g->edx;
                eax = t3;
                edx = t4;
            }
            if ((int32_t)eax <= 0)
            {
                esi = in_esi;
            }
            else
            {
                if ((int32_t)eax >= 32)
                {
                    esi = in_esi;
                }
                else
                {
                    wr32(sp0 - 0x50u, in_esi);
                    wr32(sp0 - 0x54u, 0x7530u);
                    t5 = rd16(eax * 6u + edi + 4u);
                    wr32(sp0 - 0x58u, t5);
                    wr32(sp0 - 0x5cu, COW_IMG(0x10357fbcu));
                    wr32(sp0 - 0x60u, sp0 - 0x40u);
                    g->ebx = self;
                    g->ecx = sp0 - 0x40u;
                    t6 = rd16(eax * 6u + edi + 6u);
                    g->esp = sp0 - 0x4cu;
                    t7 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x10357fbcu), t5, 0x7530u, in_esi);
                    t8 = g->ecx;
                    wr32(sp0 - 0x64u, 0x3f800000u);
                    wr32(sp0 - 0x68u, 0x3f800000u);
                    wr32(sp0 - 0x6cu, 1u);
                    wr32(sp0 - 0x70u, 0x80808080u);
                    wr32(sp0 - 0x74u, sp0 - 0x40u);
                    t9 = (t7 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x1cu);
                    wr32(sp0 - 0x78u, t9);
                    t10 = (t8 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) - 8u);
                    wr32(sp0 - 0x7cu, t10);
                    g->esp = sp0 - 0x60u;
                    cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t10, 7, t10, t9, sp0 - 0x40u, 0x80808080u, 1u, 0x3f800000u, 0x3f800000u);
                    t11 = g->ecx;
                    if ((uint16_t)t6 < 0x1f4u)
                    {
                        ecx = t11;
                        ebp = 0x80808080u;
                        esi = (in_esi & 0xffff0000u) | t6;
                    }
                    else
                    {
                        ecx = t11;
                        esi = (in_esi & 0xffff0000u) | t6;
                        ebp = 0x802060a0u;
                    }
                    wr32(sp0 - 0x54u, 0x1f4u);
                    wr32(sp0 - 0x58u, (uint16_t)esi);
                    wr32(sp0 - 0x5cu, COW_IMG(0x103719ecu));
                    wr32(sp0 - 0x60u, sp0 - 0x40u);
                    g->ebx = self;
                    g->ecx = ecx;
                    g->edx = sp0 - 0x40u;
                    g->esp = sp0 - 0x4cu;
                    cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x103719ecu), (uint16_t)esi, 0x1f4u, rd32(sp0 - 0x50u));
                    t12 = g->ecx;
                    t13 = g->edx;
                    wr32(sp0 - 0x64u, 0x3f800000u);
                    wr32(sp0 - 0x68u, 0x3f800000u);
                    wr32(sp0 - 0x6cu, 1u);
                    wr32(sp0 - 0x70u, ebp);
                    wr32(sp0 - 0x74u, sp0 - 0x40u);
                    t14 = (t12 & 0xffff0000u) | (uint16_t)(rd16(self + 0x16u) + 0x44u);
                    wr32(sp0 - 0x78u, t14);
                    t15 = (t13 & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) - 8u);
                    wr32(sp0 - 0x7cu, t15);
                    g->edx = t15;
                    g->esp = sp0 - 0x60u;
                    t16 = cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t14, 7, t15, t14, sp0 - 0x40u, ebp, 1u, 0x3f800000u, 0x3f800000u);
                    t17 = g->edx;
                    eax = t16;
                    edx = t17;
                    esi = rd32(sp0 - 0x50u);
                }
            }
        }
    }
    g->ebx = in_ebx;
    g->esi = esi;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1014a040(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_1014a040(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
