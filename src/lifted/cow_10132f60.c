/* f_0x10132f60 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_10132f60(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edi;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_c;
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
    cow_frame(g, sp0, 64u);

    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if ((int16_t)rd16(rd32(self + 8u) + 0x58u) < 1)
    {
        edx = in_edx;
        ebx = in_ebx;
    }
    else
    {
        edi = rd32(self + 8u);
        wr32(sp0 - 0x20u, in_ebx);
        edx = in_edx;
        ebp = 1u;
L_10132f91: ;
        wr32(sp0 - 0x24u, ebp);
        g->edx = edx;
        g->esp = sp0 - 0x20u;
        t1 = cow_stdcall(g, COW_IMG(0x10131680u), 1, ebp);
        t2 = g->edx;
        wr32(sp0 - 0xcu, (uint32_t)(int16_t)t1);
        if ((int16_t)t1 >= 0)
        {
            edx = t2;
            ebx = (uint32_t)(int16_t)t1;
            loc_c = (uint32_t)(int16_t)t1;
            wr32(sp0 - 0x24u, 1u);
            wr32(sp0 - 0x28u, 1u);
            wr32(sp0 - 0x2cu, ebp);
            wr32(sp0 - 0x30u, sp0 - 8u);
            g->ebx = ebx;
            g->edi = edi;
            g->eax = sp0 - 8u;
            g->edx = edx;
            g->esp = sp0 - 0x20u;
            t3 = cow_thiscall(g, COW_IMG(0x10118900u), edi, 4, sp0 - 8u, ebp, 1u, 1u);
            t4 = g->ecx;
            t5 = g->edx;
            if (rd8(ebx + self + 0x22u) == 0u)
            {
                ecx = t4;
                edx = t5;
                loc_10 = (rd32(sp0 - 0x10u) & 0xffffff00u) | rd8(ebx + self + 0x22u);
            }
            else
            {
                edx = t5;
                loc_10 = (rd32(sp0 - 0x10u) & 0xffffff00u) | rd8(ebx + self + 0x22u);
                ebx = rd32(ebx * 4u + self + 0x34u);
                wr32(sp0 - 0x24u, loc_10);
                wr32(sp0 - 0x28u, ebx);
                g->ecx = loc_10;
                g->edx = edx;
                g->esp = sp0 - 0x20u;
                t6 = cow_cdecl(g, COW_IMG(0x100eb490u), 2, ebx, loc_10);
                t7 = g->ecx;
                t8 = g->edx;
                if (t6 == 0u)
                {
                    ecx = t7;
                    edx = t8;
                }
                else
                {
                    edi = t6;
                    wr32(sp0 - 0x24u, rd16(edi));
                    g->edx = rd16(edi);
                    t9 = rd32(COW_IMG(0x10621808u));
                    t10 = rd16(edi);
                    g->esp = sp0 - 0x20u;
                    t11 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t9, 1, t10);
                    t12 = g->ecx;
                    t13 = g->edx;
                    if (t11 == 0u)
                    {
                        ecx = t12;
                        edx = t13;
                    }
                    else
                    {
                        eax = t11;
                        ecx = t12;
                        if (rd32(eax + 0x14c0u) == 0u) goto L_1013303f;
                        eax = rd32(eax + 0x14c0u);
                        if (1u >= rd16(eax))
                        {
                            ecx = (ecx & 0xffff0000u) | 1u;
                            goto L_1013303f;
                        }
                        wr32(sp0 - 0x24u, 0u);
                        wr32(sp0 - 0x28u, 0x80808080u);
                        t14 = rd32(edi + 4u);
                        wr32(sp0 - 0x2cu, t14);
                        wr32(sp0 - 0x30u, 0x3f800000u);
                        t15 = rd32(sp0 - 6u);
                        wr32(sp0 - 0x34u, t15);
                        t16 = rd32(sp0 - 8u);
                        wr32(sp0 - 0x38u, t16);
                        wr32(sp0 - 0x3cu, edi);
                        g->edx = t14;
                        t17 = rd32(COW_IMG(0x10621808u));
                        g->esp = sp0 - 0x20u;
                        cow_thiscall(g, COW_IMG(0x1015bdb0u), t17, 7, edi, t16, t15, 0x3f800000u, t14, 0x80808080u, 0u);
                        t18 = g->ecx;
                        t19 = g->edx;
                        ecx = t18;
                        edx = t19;
L_10133066: ;
                        wr32(sp0 - 0x24u, ebx);
                        g->ecx = ecx;
                        g->edx = edx;
                        g->esp = sp0 - 0x20u;
                        t26 = cow_cdecl(g, COW_IMG(0x10132db0u), 1, ebx);
                        t27 = g->ecx;
                        t28 = g->edx;
                        if (t26 == 0u)
                        {
                            ecx = t27;
                            edx = t28;
                        }
                        else
                        {
                            eax = t26;
                            wr32(sp0 - 0x24u, 0u);
                            wr32(sp0 - 0x28u, 0u);
                            wr32(sp0 - 0x2cu, 0x80808080u);
                            t29 = (uint32_t)(int16_t)rd16(sp0 - 6u);
                            wr32(sp0 - 0x30u, t29);
                            t30 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 0x10u;
                            wr32(sp0 - 0x34u, t30);
                            g->esp = sp0 - 0x20u;
                            cow_thiscall(g, COW_IMG(0x1011fb60u), eax, 5, t30, t29, 0x80808080u, 0u, 0u);
                            t31 = rd32(sp0 - 6u);
                            wr32(sp0 - 0x24u, t31);
                            t32 = rd32(sp0 - 8u);
                            wr32(sp0 - 0x28u, t32);
                            wr32(sp0 - 0x2cu, ebx);
                            wr32(sp0 - 0x30u, ebp - 1u);
                            g->ecx = self;
                            g->edx = t31;
                            cow_stdcall(g, COW_IMG(0x10132e60u), 4, ebp - 1u, ebx, t32, t31);
                            t33 = g->ecx;
                            t34 = g->edx;
                            ecx = t33;
                            edx = t34;
                        }
                    }
                }
            }
            g->esp = sp0 - 0x20u;
            t35 = cow_stdcall(g, COW_IMG(0x100fd350u), 0);
            if ((1u << (rd32(sp0 - 0xcu) & 0x1fu) & t35) != 0u)
            {
                edx = 1u << (rd32(sp0 - 0xcu) & 0x1fu);
                wr32(sp0 - 0x24u, 0u);
                wr32(sp0 - 0x28u, 0u);
                wr32(sp0 - 0x2cu, 0x80808080u);
                t36 = (uint32_t)(int16_t)rd16(sp0 - 6u);
                wr32(sp0 - 0x30u, t36);
                t37 = (uint32_t)(int16_t)rd16(sp0 - 8u) + 1u;
                wr32(sp0 - 0x34u, t37);
                g->esp = sp0 - 0x20u;
                cow_thiscall(g, COW_IMG(0x1011fb60u), rd32(self + 0x1c8u), 5, t37, t36, 0x80808080u, 0u, 0u);
            }
        }
        if ((int32_t)(ebp + 1u) <= (int16_t)rd16(rd32(self + 8u) + 0x58u))
        {
            edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
            ebp = ebp + 1u;
            edi = rd32(self + 8u);
            goto L_10132f91;
        }
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x58u);
        ebx = rd32(sp0 - 0x20u);
    }
    if (rd32(COW_IMG(0x105783e4u)) == 0u)
    {
        eax = 0u;
    }
    else
    {
        ecx = rd32(COW_IMG(0x105783e4u));
        if (rd8(ecx + 0x1fu) == 0u)
        {
            eax = rd8(ecx + 0x1fu);
        }
        else
        {
            eax = rd8(ecx + 0x1fu);
            esi = self + 0x88u;
            edi = 0xau;
L_1013310c: ;
            wr32(sp0 - 0x20u, 0x80808080u);
            t38 = (eax & 0xffff0000u) | rd16(esi + 0x1eu);
            wr32(sp0 - 0x24u, t38);
            g->ebx = ebx;
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t39 = cow_call_regs(g, COW_IMG(0x10131440u), t38, esi, g->edx, 0, 2, t38, 0x80808080u);
            t40 = g->edx;
            if (edi != 1u)
            {
                eax = t39;
                edx = t40;
                esi = esi + 0x20u;
                edi = edi - 1u;
                goto L_1013310c;
            }
            eax = t39;
            edx = t40;
        }
    }
    g->ebx = ebx;
    g->edi = in_edi;
    g->edx = edx;
    return eax;
L_1013303f: ;
    wr32(sp0 - 0x24u, 0u);
    wr32(sp0 - 0x28u, 0x80808080u);
    wr32(sp0 - 0x2cu, 0u);
    wr32(sp0 - 0x30u, 0x3f800000u);
    t20 = rd32(sp0 - 6u);
    wr32(sp0 - 0x34u, t20);
    t21 = rd32(sp0 - 8u);
    wr32(sp0 - 0x38u, t21);
    t22 = (ecx & 0xffff0000u) | rd16(edi);
    wr32(sp0 - 0x3cu, t22);
    g->edx = t20;
    t23 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x20u;
    cow_thiscall(g, COW_IMG(0x1015bd70u), t23, 7, t22, t21, t20, 0x3f800000u, 0u, 0x80808080u, 0u);
    t24 = g->ecx;
    t25 = g->edx;
    ecx = t24;
    edx = t25;
    goto L_10133066;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10132f60(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10132f60(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
