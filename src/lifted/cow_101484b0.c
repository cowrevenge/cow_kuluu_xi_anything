/* f_0x101484b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101484b0(Guest* g)
{
    uint32_t eax;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_2c;
    uint32_t t1;
    uint32_t t10;
    uint32_t t11;
    uint32_t t12;
    uint32_t t13;
    uint32_t t14;
    uint32_t t15;
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
    cow_frame(g, sp0, 104u);

    wr32(sp0 - 0x30u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x30u;
    t1 = cow_stdcall(g, COW_IMG(0x10146310u), 0);
    t2 = g->ecx;
    t3 = g->edx;
    if ((uint8_t)t1 == 0u)
    {
        eax = t1;
        edx = t3;
    }
    else
    {
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x34u, 2u);
        g->edx = edx;
        g->esp = sp0 - 0x30u;
        t4 = cow_cdecl(g, COW_IMG(0x101c8c30u), 1, 2u);
        t5 = g->edx;
        wr32(sp0 - 0x14u, t4);
        if (t4 == 0u)
        {
            eax = t4;
            edx = t5;
        }
        else
        {
            eax = t4;
            loc_14 = t4;
            wr32(sp0 - 0x34u, in_ebx);
            wr32(sp0 - 0x38u, in_ebp);
            wr32(sp0 - 0x3cu, in_edi);
            wr32(sp0 - 0x24u, 0u);
            if ((int8_t)rd8(rd32(COW_IMG(0x10456a28u)) + 0x18u) >= 0)
            {
                edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
                loc_2c = (uint16_t)(((eax & 0xffff0000u) | rd16(self + 0x18u)) + 0x6eu) | (uint16_t)(((eax & 0xffff0000u) | rd16(self + 0x18u)) + 0xe6u) << 0x10u;
                eax = (eax & 0xffff0000u) | rd16(self + 0x18u);
                goto L_10148528;
            }
            edx = rd32(rd32(COW_IMG(0x10456a28u)) + 8u);
            loc_2c = (uint16_t)(((eax & 0xffff0000u) | rd16(self + 0x18u)) + 0x6eu) | (uint16_t)(((eax & 0xffff0000u) | rd16(self + 0x18u)) + 0xe6u) << 0x10u;
            eax = (eax & 0xffff0000u) | rd16(self + 0x18u);
            if (edx == 2u) goto L_1014852c;
            if (edx == 3u) goto L_1014852c;
L_10148528: ;
            if (edx == 0u) goto L_1014853e;
L_1014852c: ;
L_1014853e: ;
            wr32(sp0 - 0x18u, 0x344u);
            t6 = (edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 0x13u);
            wr32(sp0 - 0x28u, t6);
            wr32(sp0 - 0x20u, COW_IMG(0x104856a6u));
            ecx = 0x344u;
            edx = t6;
            edi = in_edi;
            loc_24 = 0u;
            loc_18 = 0x344u;
            loc_28 = t6;
            loc_20 = COW_IMG(0x104856a6u);
L_1014855b: ;
            t7 = (edi & 0xffff0000u) | rd16(loc_20);
            if ((t7 & 0x8000u) == 0u)
            {
                eax = t7 & 0x8000u;
                edi = t7;
                goto L_1014857a;
            }
            eax = t7 & 0x8000u;
            edi = t7;
            if ((edi & 0x7fffu) == 0u) goto L_10148610;
L_1014857a: ;
            wr32(sp0 - 0x40u, 0u);
            wr32(sp0 - 0x44u, 0u);
            wr32(sp0 - 0x48u, 0x80808080u);
            t8 = (-((uint16_t)eax != 0u) & 0xff9fe020u) - 0x7f7f7f80u;
            wr32(sp0 - 0x4cu, (uint32_t)(int16_t)edx);
            t9 = (uint32_t)(int16_t)rd16(sp0 + (uint32_t)(int16_t)(loc_24 & 1u) * 2u - 0x1cu);
            wr32(sp0 - 0x50u, t9);
            g->edx = loc_14;
            g->esp = sp0 - 0x3cu;
            cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(ecx + rd32(loc_14)), 5, t9, (uint32_t)(int16_t)edx, 0x80808080u, 0u, 0u);
            t10 = g->edx;
            wr32(sp0 - 0x40u, edi & 0x7fffu);
            wr32(sp0 - 0x44u, COW_IMG(0x10352ff0u));
            wr32(sp0 - 0x48u, sp0 - 0x10u);
            g->ebx = t8;
            g->ecx = sp0 - 0x10u;
            g->esp = sp0 - 0x34u;
            cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x10u, COW_IMG(0x10352ff0u), edi & 0x7fffu, in_edi, in_ebp);
            t11 = g->ecx;
            wr32(sp0 - 0x4cu, 0x3f800000u);
            wr32(sp0 - 0x50u, 0x3f800000u);
            wr32(sp0 - 0x54u, 1u);
            wr32(sp0 - 0x58u, t8);
            wr32(sp0 - 0x5cu, sp0 - 0x10u);
            t12 = rd32(sp0 - 0x28u);
            wr32(sp0 - 0x60u, t12);
            t13 = (t11 & 0xffff0000u) | rd16(sp0 + (uint32_t)(int16_t)(loc_24 & 1u) * 2u - 0x2cu);
            wr32(sp0 - 0x64u, t13);
            g->esp = sp0 - 0x48u;
            cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), t13, 7, t13, t12, sp0 - 0x10u, t8, 1u, 0x3f800000u, 0x3f800000u);
            if (!(loc_24 & 1u))
            {
                edi = edi & 0x7fffu;
            }
            else
            {
                edi = edi & 0x7fffu;
                t14 = rd32(sp0 - 0x28u) + 0xeu;
                wr32(sp0 - 0x28u, t14);
                loc_28 = t14;
            }
            t15 = rd32(sp0 - 0x24u) + 1u;
            wr32(sp0 - 0x24u, t15);
            eax = t15;
            ecx = rd32(sp0 - 0x18u);
            edx = loc_28;
            loc_24 = t15;
L_10148610: ;
            wr32(sp0 - 0x18u, ecx + 4u);
            wr32(sp0 - 0x20u, loc_20 + 2u);
            if ((int32_t)(ecx + 4u) < 960)
            {
                loc_18 = ecx + 4u;
                ecx = ecx + 4u;
                loc_20 = loc_20 + 2u;
                goto L_1014855b;
            }
        }
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101484b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101484b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
