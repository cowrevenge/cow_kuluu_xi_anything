/* f_0x1012c660 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
void cow_fn_1012c660(Guest* g)
{
    double d28;
    double d31;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t loc_44;
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
    uint32_t t29;
    uint32_t t3;
    uint32_t t30;
    uint32_t t32;
    uint32_t t33;
    uint32_t t34;
    uint32_t t35;
    uint32_t t36;
    uint32_t t37;
    uint32_t t38;
    uint32_t t39;
    uint32_t t4;
    uint32_t t5;
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    const uint32_t sp0 = g->esp;
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    const uint32_t arg1 = rd32(g->esp + 0x4u);
    const uint32_t arg2 = rd32(g->esp + 0x8u);
    cow_frame(g, sp0, 124u);

    wr32(sp0 - 0x50u, in_esi);
    g->ecx = self;
    g->edx = in_edx;
    g->esp = sp0 - 0x50u;
    t1 = cow_call_regs(g, COW_IMG(0x10087690u), in_eax, g->ecx, g->edx, 1, 0);
    t2 = g->ecx;
    t3 = g->edx;
    if (t1 == 0u)
    {
        ebx = in_ebx;
        ebp = in_ebp;
        edi = in_edi;
    }
    else
    {
        ecx = t2;
        edx = t3;
        wr32(sp0 - 0x54u, in_ebx);
        wr32(sp0 - 0x58u, in_ebp);
        wr32(sp0 - 0x5cu, in_edi);
        t4 = (uint32_t)(int16_t)(arg1 >> 0x10u) + 6u;
        wr32(sp0 - 0x44u, t4);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x5cu;
        t5 = cow_call_regs(g, COW_IMG(0x10087700u), t4, g->ecx, g->edx, 1, 0);
        t6 = g->ecx;
        t7 = g->edx;
        g->ecx = t6;
        g->edx = t7;
        t8 = cow_call_regs(g, COW_IMG(0x10087720u), t5, g->ecx, g->edx, 1, 0);
        t9 = g->ecx;
        t10 = g->edx;
        wr32(sp0 - 0x60u, t5 + t8);
        g->ecx = t9;
        g->edx = t10;
        t11 = cow_cdecl(g, COW_IMG(0x10103a50u), 1, t5 + t8);
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x64u, t11);
        wr32(sp0 - 0x4cu, t11);
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        g->ecx = t12;
        g->edx = t13;
        g->esp = sp0 - 0x58u;
        t14 = cow_cdecl(g, COW_IMG(0x101c93c0u), 3, t11, rd32(sp0 - 0x60u), in_edi);
        t15 = g->ecx;
        t16 = g->edx;
        wr32(sp0 - 0x68u, t14);
        wr32(sp0 - 0x6cu, COW_IMG(0x1036c010u));
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        g->ebx = (uint32_t)(int16_t)arg2 - 0x10u;
        g->ecx = t15;
        g->edx = t16;
        g->esp = sp0 - 0x5cu;
        t17 = cow_cdecl(g, COW_IMG(0x10312031u), 5, sp0 - 0x40u, COW_IMG(0x1036c010u), t14, rd32(sp0 - 0x64u), rd32(sp0 - 0x60u));
        t18 = g->ecx;
        t19 = g->edx;
        g->ecx = t18;
        g->edx = t19;
        t20 = cow_call_regs(g, COW_IMG(0x10087740u), t17, g->ecx, g->edx, 1, 0);
        t21 = g->ecx;
        t22 = g->edx;
        if (t20 != 0u)
        {
            eax = t20;
            ecx = t21;
            edx = t22;
            ebp = t11;
        }
        else
        {
            ecx = t21;
            edx = t22;
            ebp = t11;
            eax = 0x3cu;
        }
        if (ebp != 0u)
        {
            eax = (eax & 0xffffff00u) | ebp < eax;
            ecx = (ecx & 0xffffff00u) | ebp == 0u;
            t23 = (-((uint8_t)eax != 0u) & 0xffffbfc0u) - 0x7f7f7f80u;
            edx = t23;
            ebp = rd32(sp0 - 0x4cu);
            edi = t23;
        }
        else
        {
            eax = (eax & 0xffffff00u) | ebp < eax;
            ecx = (ecx & 0xffffff00u) | ebp == 0u;
            edi = 0x80606060u;
        }
        if ((uint8_t)eax == 0u) goto L_1012c706;
        if ((uint8_t)ecx != 0u) goto L_1012c706;
        wr8(self + 0x1cu, rd8(self + 0x1cu) | 1u);
L_1012c71b: ;
        if (rd8(self + 0x1cu) & 1u)
        {
            if (rd32(self + 0x18u) == ebp)
            {
                g->ecx = ecx;
                g->esp = sp0 - 0x5cu;
                t26 = cow_call_regs(g, COW_IMG(0x10014cf0u), eax, g->ecx, g->edx, 1, 0);
                t27 = g->ecx;
                d28 = cow_take_float(g);
                t29 = rd32(self + 0x20u);
                t30 = (uint32_t)((int32_t)(t29 << 0x17u) >> 0x17u);
                wr32(sp0 - 0x48u, t30);
                d31 = fr(g, (double)(int32_t)t30 - fr(g, d28 * (double)rdf32(COW_IMG(0x1032a3e8u))));
                fpush(g, d31);
                t32 = cow_call_regs(g, COW_IMG(0x10311c6cu), t26, g->ecx, g->edx, 1, 0);
                t33 = ((t32 ^ t29) & 0x1ffu) ^ t29;
                t34 = rd32(sp0 - 0x4cu);
                wr32(self + 0x20u, t33);
                if ((int32_t)(t33 << 0x17u) >= 268435456)
                {
                    ebp = t34;
                }
                else
                {
                    eax = t33;
                    ebp = t34;
                    t35 = (((eax & 0xffff00ffu) | (eax >> 8u & 0xfeu) << 8u) & 0xffffff00u) | (uint8_t)(eax | 0xffu);
                    wr32(self + 0x20u, t35);
                }
            }
            else
            {
                t25 = (((rd32(self + 0x20u) & 0xffff00ffu) | (rd32(self + 0x20u) >> 8u & 0xfeu) << 8u) & 0xffffff00u) | (uint8_t)(rd32(self + 0x20u) | 0xffu);
                wr32(self + 0x20u, t25);
            }
        }
        wr32(sp0 - 0x60u, 0x3f800000u);
        wr32(sp0 - 0x64u, 0x3f800000u);
        wr32(sp0 - 0x68u, 1u);
        t36 = (uint32_t)((int32_t)(rd32(self + 0x20u) << 0x17u) >> 0x17u) << 0x18u ^ (edi & 0xffffffu);
        wr32(sp0 - 0x6cu, t36);
        wr32(sp0 - 0x70u, sp0 - 0x40u);
        wr32(sp0 - 0x74u, loc_44);
        t37 = (uint32_t)(int16_t)arg2 - 0x10u;
        wr32(sp0 - 0x78u, t37);
        g->esp = sp0 - 0x5cu;
        cow_thiscall_cdecl(g, COW_IMG(0x101c9b50u), loc_44, 7, t37, loc_44, sp0 - 0x40u, t36, 1u, 0x3f800000u, 0x3f800000u);
        if (rd32(self + 0x28u) != 0u)
        {
            ecx = rd32(self + 0x28u);
            wr32(sp0 - 0x60u, 0u);
            wr32(sp0 - 0x64u, 0u);
            wr32(sp0 - 0x68u, 0x80808080u);
            t38 = (uint32_t)(int16_t)(arg1 >> 0x10u) + 4u;
            wr32(sp0 - 0x6cu, t38);
            t39 = (uint32_t)(int16_t)arg1 + 4u;
            wr32(sp0 - 0x70u, t39);
            g->esp = sp0 - 0x5cu;
            cow_thiscall(g, COW_IMG(0x1011fb60u), ecx, 5, t39, t38, 0x80808080u, 0u, 0u);
        }
        wr32(self + 0x18u, ebp);
        ebx = rd32(sp0 - 0x54u);
        ebp = rd32(sp0 - 0x58u);
        edi = rd32(sp0 - 0x5cu);
    }
    g->ebx = ebx;
    g->edi = edi;
    g->ebp = ebp;
    return;
L_1012c706: ;
    wr8(self + 0x1cu, rd8(self + 0x1cu) & 0xfeu);
    t24 = (rd32(self + 0x20u) & 0xfffffe00u) | (rd32(self + 0x20u) & 0x80u) | 0x80u;
    wr32(self + 0x20u, t24);
    eax = t24;
    goto L_1012c71b;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_1012c660(Guest* g)
{
    const uint32_t sp0 = g->esp;
    cow_fn_1012c660(g);
    g->esp = sp0;
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
