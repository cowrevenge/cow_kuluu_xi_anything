/* f_0x101513d0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101513d0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
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
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x14u, in_ebx);
    wr32(sp0 - 0x18u, in_edi);
    if (rd32(COW_IMG(0x104dfd98u)) == 0u)
    {
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = in_edx;
        ebp = in_ebp;
        esi = in_esi;
    }
    else
    {
        wr32(sp0 - 0x1cu, in_ebp);
        wr32(sp0 - 0x20u, in_esi);
        g->ecx = self;
        g->edx = in_edx;
        g->esp = sp0 - 0x20u;
        t1 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
        t2 = g->ecx;
        t3 = g->edx;
        if ((t1 & 0x200000u) != 0u)
        {
            ecx = t2;
            edx = t3;
            goto L_101513fe;
        }
        ecx = t2;
        edx = t3;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t4 = cow_stdcall(g, COW_IMG(0x100fc160u), 0);
        t5 = g->ecx;
        t6 = g->edx;
        if ((t4 >> 8u & 8u) == 0u)
        {
            edx = t6;
            goto L_1015141e;
        }
        ecx = t5;
        edx = t6;
L_101513fe: ;
        wr32(sp0 - 0x24u, 0u);
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t7 = cow_cdecl(g, COW_IMG(0x100eb940u), 1, 0u);
        t8 = g->ecx;
        t9 = g->edx;
        wr32(sp0 - 0x28u, 0u);
        t10 = (uint8_t)t7 - 1u;
        g->ebx = self;
        g->edx = t9;
        g->esp = sp0 - 0x1cu;
        t11 = cow_call_regs(g, COW_IMG(0x100eb8d0u), t10, t8, g->edx, 1, 3, 0u, 0u, rd32(sp0 - 0x20u));
        t12 = g->ecx;
        t13 = g->edx;
        wr32(sp0 - 0x2cu, t10);
        wr32(sp0 - 0x30u, t10 - t11);
        g->edx = t13;
        g->esp = sp0 - 0x28u;
        cow_cdecl(g, COW_IMG(0x101cb590u), 2, t10 - t11, t10);
        t14 = g->edx;
        edx = t14;
L_1015141e: ;
        wr32(sp0 - 0x24u, 1u);
        wr32(sp0 - 0x28u, 1u);
        wr32(sp0 - 0x2cu, 0xbu);
        wr32(sp0 - 0x30u, sp0 - 8u);
        g->ebx = self;
        g->edi = 0u;
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, 0xbu, 1u, 1u);
        t15 = g->edx;
        wr32(sp0 - 0xcu, 0u);
        if (rd8(rd32(COW_IMG(0x104dfd98u)) + 0x194c6u) != 0u)
        {
            edx = t15;
            goto L_10151481;
        }
        eax = rd32(COW_IMG(0x104dfd98u));
        edx = t15;
        if (rd16(eax + 0x194c4u) != 0xffffu) goto L_10151481;
        wr32(sp0 - 0x24u, 1u);
        t16 = rd32(sp0 - 6u) + 1u;
        wr32(sp0 - 0x28u, t16);
        t17 = rd32(sp0 - 4u) + 9u;
        wr32(sp0 - 0x2cu, t17);
        t18 = rd32(eax + 0x194c0u);
        wr32(sp0 - 0x30u, t18);
        ecx = t17;
        edx = t18;
        loc_28 = t16;
        loc_2c = t17;
        loc_30 = t18;
L_10151492: ;
        g->ebx = self;
        g->esp = sp0 - 0x20u;
        cow_cdecl(g, COW_IMG(0x10140910u), 4, loc_30, loc_2c, loc_28, 1u);
        wr32(sp0 - 0x10u, 0u);
        ebp = 0x194c8u;
        loc_10 = 0u;
L_101514a7: ;
        if (rd32(ebp + rd32(COW_IMG(0x104dfd98u))) == 0u)
        {
            eax = rd32(ebp + rd32(COW_IMG(0x104dfd98u)));
        }
        else
        {
            edx = rd32(COW_IMG(0x104dfd98u));
            esi = ebp + rd32(COW_IMG(0x104dfd98u));
            t21 = rd16(esi + 4u);
            wr32(sp0 - 0x24u, t21);
            g->esp = sp0 - 0x20u;
            t22 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t21);
            if (t22 == 0u)
            {
                eax = t22;
            }
            else
            {
                eax = t22;
                edi = t22;
                wr32(sp0 - 0x24u, 1u);
                wr32(sp0 - 0x28u, 1u);
                t23 = rd32(sp0 - 0x10u) + 1u;
                wr32(sp0 - 0x2cu, t23);
                wr32(sp0 - 0x30u, sp0 - 8u);
                g->ebx = self;
                g->edi = edi;
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x10118900u), rd32(self + 8u), 4, sp0 - 8u, t23, 1u, 1u);
                if (rd32(edi + 0x14c0u) == 0u)
                {
                    eax = rd32(edi + 0x14c0u);
                    goto L_1015150b;
                }
                eax = rd32(edi + 0x14c0u);
                if (rd16(eax) <= 1u)
                {
                    eax = (eax & 0xffffff00u) | rd16(eax) > 1u;
                    goto L_1015150b;
                }
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0x80808080u);
                wr32(sp0 - 0x2cu, rd32(esi));
                eax = rd32(esi);
                loc_2c = rd32(esi);
L_10151514: ;
                wr32(sp0 - 0x30u, 0x3f800000u);
                t24 = rd32(sp0 - 6u);
                wr32(sp0 - 0x34u, t24);
                t25 = rd32(sp0 - 8u);
                wr32(sp0 - 0x38u, t25);
                t26 = (eax & 0xffffff00u) | rd8(esi + 6u);
                wr32(sp0 - 0x3cu, t26);
                wr32(sp0 - 0x40u, 0u);
                g->edx = t25;
                g->esp = sp0 - 0x38u;
                t27 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, 0u, t26);
                t28 = g->edx;
                wr32(sp0 - 0x3cu, t27);
                g->esp = sp0 - 0x20u;
                t29 = cow_thiscall(g, COW_IMG(0x1015bdb0u), rd32(COW_IMG(0x10621808u)), 7, t27, rd32(sp0 - 0x38u), rd32(sp0 - 0x34u), 0x3f800000u, rd32(sp0 - 0x2cu), 0x80808080u, 0u);
                eax = t29;
            }
        }
        wr32(sp0 - 0x10u, loc_10 + 1u);
        if ((int32_t)(ebp + 8u) < 103696)
        {
            ebp = ebp + 8u;
            loc_10 = loc_10 + 1u;
            goto L_101514a5;
        }
        if ((int32_t)rd32(sp0 - 0xcu) <= (int32_t)((uint32_t)(int16_t)(rd16(self + 0x18u) + 4u) + 5u))
        {
            eax = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 4u);
            edx = (uint32_t)(int16_t)(rd16(self + 0x18u) + 4u) + 5u;
            ebp = rd32(sp0 - 0x1cu);
            esi = rd32(sp0 - 0x20u);
        }
        else
        {
            eax = (eax & 0xffff0000u) | (uint16_t)(rd16(self + 0x18u) + 4u);
            ecx = rd32(sp0 - 0xcu);
            ebp = rd32(sp0 - 0x1cu);
            esi = rd32(sp0 - 0x20u);
            t30 = (-(rd32(self + 0xc0u) != 4u) & 0x4060u) - 0x7f7fbfe0u;
            wr32(sp0 - 0x1cu, t30);
            t31 = rd32(COW_IMG(0x104dfd98u)) + 0x3c3a4u;
            wr32(sp0 - 0x20u, t31);
            t32 = (t31 & 0xffff0000u) | (uint16_t)(rd16(self + 0x1au) + 5u);
            wr32(sp0 - 0x24u, t32);
            wr32(sp0 - 0x28u, eax);
            t33 = ecx - eax - 5u;
            wr32(sp0 - 0x2cu, t33);
            g->edx = t32;
            g->esp = sp0 - 0x18u;
            t34 = cow_cdecl(g, COW_IMG(0x101c9d50u), 5, t33, eax, t32, t31, t30);
            t35 = g->edx;
            eax = t34;
            edx = t35;
        }
    }
    g->ebx = in_ebx;
    g->esi = esi;
    g->edi = in_edi;
    g->ebp = ebp;
    g->edx = edx;
    return eax;
L_10151481: ;
    wr32(sp0 - 0x24u, 1u);
    t19 = rd32(sp0 - 6u) + 1u;
    wr32(sp0 - 0x28u, t19);
    t20 = rd32(sp0 - 4u) + 9u;
    wr32(sp0 - 0x2cu, t20);
    wr32(sp0 - 0x30u, 0u);
    eax = t19;
    ecx = t20;
    loc_28 = t19;
    loc_2c = t20;
    loc_30 = 0u;
    goto L_10151492;
L_101514a5: ;
    goto L_101514a7;
L_1015150b: ;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x80808080u);
    wr32(sp0 - 0x2cu, 0u);
    loc_2c = 0u;
    goto L_10151514;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101513d0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101513d0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
