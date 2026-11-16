/* f_0x10207a40 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10207a40(Guest* g)
{
    uint32_t cf;
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_14;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t of;
    uint32_t pf;
    uint32_t sf;
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
    uint32_t t6;
    uint32_t t7;
    uint32_t t8;
    uint32_t t9;
    uint32_t zf;
    const uint32_t sp0 = g->esp;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;
    const uint32_t in_esi = g->esi;
    const uint32_t in_edi = g->edi;
    const uint32_t in_ebp = g->ebp;
    cow_frame(g, sp0, 44u);

    wr32(sp0 - 0x10u, in_ebx);
    wr32(sp0 - 0x14u, in_ebp);
    wr32(sp0 - 0x18u, in_esi);
    wr32(sp0 - 0x1cu, in_edi);
    if (rd32(self + 0x18u) == 0u)
    {
        eax = rd32(self + 0x18u);
        edx = in_edx;
    }
    else
    {
        eax = rd32(self + 0x18u);
        ecx = self;
        edx = in_edx;
        ebx = eax - 0x2100u;
        esi = 2u;
L_10207a5d: ;
        wr32(sp0 - 0x20u, esi);
        wr32(sp0 - 0x24u, 0x1200u);
        t1 = (eax & 0xffffff00u) | rd8(self + 0x1cu);
        wr32(sp0 - 0x28u, t1);
        g->edi = self;
        g->ecx = ecx;
        g->edx = edx;
        g->esp = sp0 - 0x1cu;
        t2 = cow_cdecl(g, COW_IMG(0x100fcbc0u), 3, t1, 0x1200u, esi);
        t3 = g->ecx;
        t4 = g->edx;
        if (ebx == (uint8_t)t2)
        {
            edx = t4;
            goto L_10207a80;
        }
        eax = (uint8_t)t2;
        ecx = t3;
        edx = t4;
        if ((int32_t)(esi + 1u) < 14)
        {
            esi = esi + 1u;
            goto L_10207a5d;
        }
L_10207a91: ;
        wr32(self + 0x18u, 0u);
    }
    if (rd8(sp0 + 4u) != 0u)
    {
        if ((int32_t)rd32(rd32(COW_IMG(0x10664438u)) + 0x10u) <= 0)
        {
            wr8(rd32(self + 8u) + 0x61u, 1u);
            loc_10 = in_ebx;
            loc_14 = in_ebp;
            loc_18 = in_esi;
            loc_1c = in_edi;
        }
        else
        {
            eax = rd32(COW_IMG(0x10664438u));
            if (rd32(eax + 0x14u) == 0u) goto L_10207b13;
            eax = rd32(eax + 0x14u);
            if (eax == 1u) goto L_10207af0;
            wr32(sp0 - 0x20u, 0u);
            wr8(rd32(self + 8u) + 0x61u, 1u);
            g->edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
            t9 = rd16(rd32(self + 8u) + 0x4cu);
            t10 = rd32(self + 8u);
            g->esp = sp0 - 0x1cu;
            t11 = cow_stdcall(g, COW_IMG(0x10207980u), 1, 0u);
            t12 = g->edx;
            if (t12 == t11)
            {
                edx = t12;
                esi = t10;
                goto L_10207add;
            }
            edx = t12;
            esi = t10;
            wr32(sp0 - 0x20u, 1u);
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t13 = cow_stdcall(g, COW_IMG(0x10207980u), 1, 1u);
            t14 = g->edx;
            if (t14 != t13) goto L_10207b2b;
            edx = t14;
L_10207add: ;
            wr32(sp0 - 0x20u, 2u);
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t15 = cow_stdcall(g, COW_IMG(0x10207980u), 1, 2u);
            t16 = g->edx;
            wr32(sp0 - 0x20u, t15);
            cow_call_regs(g, COW_IMG(0x10118e90u), t15, esi, g->edx, 0, 1, t15);
        }
L_10207b2b: ;
        t19 = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
        wr32(sp0 - 0x20u, t19);
        g->ecx = self;
        g->edx = t19;
        g->esp = sp0 - 0x1cu;
        t20 = cow_stdcall(g, COW_IMG(0x10207960u), 1, t19);
        t21 = g->ecx;
        t22 = g->edx;
        wr32(sp0 - 0x20u, t20);
        wr32(sp0 - 0x24u, 0x1200u);
        t23 = (t20 & 0xffffff00u) | rd8(self + 0x1cu);
        wr32(sp0 - 0x28u, t23);
        g->edi = self;
        g->edx = t22;
        t24 = cow_cdecl(g, COW_IMG(0x100fcbc0u), 3, t23, 0x1200u, t20);
        t25 = g->edx;
        if ((int32_t)(uint8_t)t24 <= 0)
        {
            eax = (uint8_t)t24;
            edx = t25;
            g->esp = sp0 - 0x1cu;
            t28 = cow_call_regs(g, COW_IMG(0x101ec3c0u), eax, rd32(COW_IMG(0x106636a0u)), g->edx, 1, 0);
            eax = t28;
        }
        else
        {
            eax = (uint8_t)t24;
            edx = t25;
            esi = t20;
            if (esi == 0u) goto L_10207b65;
            if (esi == 1u) goto L_10207b65;
            eax = eax + 0x2100u;
L_10207b6a: ;
            wr32(sp0 - 0x20u, eax);
            wr16(rd32(COW_IMG(0x106636a0u)) + 0x2au, 0xcu);
            t26 = rd32(COW_IMG(0x106636a0u));
            wr32(t26 + 0x30u, COW_IMG(0x10208d90u));
            wr32(t26 + 0x38u, eax);
            g->esp = sp0 - 0x1cu;
            t27 = cow_call_regs(g, COW_IMG(0x101ec2f0u), eax, rd32(COW_IMG(0x106636a0u)), g->edx, 0, 1, eax);
            eax = t27;
        }
        if (rd32(rd32(COW_IMG(0x1066369cu)) + 8u) == 0u)
        {
            edx = rd32(COW_IMG(0x1066369cu));
        }
        else
        {
            edx = rd32(COW_IMG(0x1066369cu));
            g->edx = edx;
            g->esp = sp0 - 0x1cu;
            t29 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
            t30 = g->edx;
            if ((uint8_t)t29 == 0u)
            {
                edx = t30;
            }
            else
            {
                edx = t30;
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 4u, 0u);
                if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
                {
                    eax = rd32(COW_IMG(0x104e1d4cu));
                    t31 = rd32(eax + 4u);
                    wr32(sp0 - 8u, t31);
                    t32 = rd32(eax + 8u);
                    wr32(sp0 - 4u, t32);
                    edx = t32;
                }
                wr32(sp0 - 0x20u, sp0 - 8u);
                g->edx = edx;
                g->esp = sp0 - 0x1cu;
                t33 = cow_thiscall(g, COW_IMG(0x10118c10u), rd32(rd32(COW_IMG(0x1066369cu)) + 8u), 1, sp0 - 8u);
                t34 = g->edx;
                if ((uint8_t)t33 == 0u)
                {
                    edx = t34;
                }
                else
                {
                    eax = t33;
                    wr32(sp0 - 0x20u, 0u);
                    wr32(sp0 - 0x24u, 8u);
                    g->edx = rd32(self);
                    t35 = rd32(self);
                    g->esp = sp0 - 0x1cu;
                    cow_thiscall(g, rd32(t35 + 0x18u), self, 2, 8u, 0u);
                    t36 = g->edx;
                    edx = t36;
                }
            }
        }
    }
    wr32(sp0 - 0xcu, self + 0x25u);
    wr32(sp0 - 8u, 0xffffffdbu - self);
    eax = self + 0x25u;
L_10207c0b: ;
    wr8(eax - 8u, 0u);
    wr8(eax, 0u);
    if ((int32_t)(eax - self - 0x24u) <= 7)
    {
        eax = eax + 1u;
        goto L_10207c0b;
    }
    ecx = eax - self - 0x24u;
    wr32(sp0 + 4u, 0u);
    ebx = 0xffffffdbu - self;
    esi = 0u;
L_10207c21: ;
    wr32(sp0 - 0x20u, esi);
    wr32(sp0 - 0x24u, 0x1200u);
    t37 = (edx & 0xffffff00u) | rd8(self + 0x1cu);
    wr32(sp0 - 0x28u, t37);
    g->edi = self;
    g->ecx = ecx;
    g->edx = t37;
    g->esp = sp0 - 0x1cu;
    t38 = cow_cdecl(g, COW_IMG(0x100fcbc0u), 3, t37, 0x1200u, esi);
    t39 = g->ecx;
    t40 = g->edx;
    if ((uint8_t)t38 == 0u)
    {
        ecx = t39;
        edx = t40;
    }
    else
    {
        eax = (uint8_t)t38;
        edx = t40;
        if (esi == 0u) goto L_10207c91;
        if (esi == 1u) goto L_10207c91;
        wr32(sp0 - 0x20u, eax + 0x2100u);
        g->edx = edx;
        t41 = rd32(COW_IMG(0x10621808u));
        g->esp = sp0 - 0x1cu;
        t42 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t41, 1, eax + 0x2100u);
        t43 = g->ecx;
        t44 = g->edx;
        if (t42 == 0u)
        {
            ecx = t43;
            edx = t44;
            goto L_10207cd3;
        }
        eax = t42;
        edx = rd32(rd32(eax + 0x14dcu));
        eax = self + 0x1du;
        esi = 0u;
        cf = 0xffffffe3u < self;
        pf = PARITY((uint8_t)(0xffffffe3u - self));
        zf = 0xffffffe3u == self;
        sf = (int32_t)(0xffffffe3u - self) < 0;
        of = ((self ^ 0xffffffe3u) & (0xffffffe3u - self ^ 0xffffffe3u)) >> 0x1fu;
L_10207c70: ;
        wr8(eax, (uint8_t)(rd8(eax) + (edx >> (esi & 0x1fu) & 0xfu)));
        if ((int32_t)(eax - self - 0x1cu) <= 7)
        {
            esi = esi + 4u;
            cf = eax - self - 0x1cu < 7u;
            pf = PARITY((uint8_t)(eax - self - 0x23u));
            zf = eax - self == 0x23u;
            sf = (int32_t)(eax - self - 0x23u) < 0;
            of = ((eax - self - 0x1cu ^ 7u) & (eax - self - 0x1cu ^ eax - self - 0x23u)) >> 0x1fu;
            eax = eax + 1u;
            goto L_10207c70;
        }
        ecx = eax - self - 0x1cu;
        ebx = rd32(sp0 - 8u);
L_10207ccf: ;
        esi = rd32(sp0 + 4u);
    }
L_10207cd3: ;
    wr32(sp0 + 4u, esi + 1u);
    if ((int32_t)(esi + 1u) < 14)
    {
        esi = esi + 1u;
        goto L_10207c21;
    }
    g->ebx = ebx;
    g->esp = sp0 - 0x1cu;
    t49 = cow_fastcall(g, COW_IMG(0x100fcf60u), ecx, edx, 0);
    t50 = g->edx;
    eax = t49 & 0xfu;
    ecx = rd32(sp0 - 0xcu);
    edx = t50;
L_10207ced: ;
    wr8(ecx, (uint8_t)(rd8(ecx) + (uint8_t)eax));
    if ((int32_t)(ebx + ecx + 1u) <= 7)
    {
        edx = ebx + ecx + 1u;
        ecx = ecx + 1u;
        goto L_10207ced;
    }
    edx = ebx + ecx + 1u;
    g->ebx = rd32(sp0 - 0x10u);
    g->esi = rd32(sp0 - 0x18u);
    g->edi = rd32(sp0 - 0x1cu);
    g->ebp = rd32(sp0 - 0x14u);
    g->edx = edx;
    return eax;
L_10207a80: ;
    wr32(sp0 - 0x20u, esi);
    g->edx = edx;
    g->esp = sp0 - 0x1cu;
    t5 = cow_stdcall(g, COW_IMG(0x10207980u), 1, esi);
    t6 = g->edx;
    wr32(sp0 - 0x20u, t5);
    g->edx = t6;
    t7 = cow_call_regs(g, COW_IMG(0x10118e90u), t5, rd32(self + 8u), g->edx, 0, 1, t5);
    t8 = g->edx;
    eax = t7;
    edx = t8;
    goto L_10207a91;
L_10207af0: ;
    wr32(sp0 - 0x20u, 1u);
    g->esp = sp0 - 0x1cu;
    t17 = cow_stdcall(g, COW_IMG(0x10207980u), 1, 1u);
    wr8(rd32(self + 8u) + 0x61u, 0u);
    eax = t17;
L_10207b00: ;
    if ((uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu) != eax)
    {
        ecx = rd32(self + 8u);
        edx = (uint32_t)(int16_t)rd16(rd32(self + 8u) + 0x4cu);
        wr32(sp0 - 0x20u, eax);
        g->esp = sp0 - 0x1cu;
        cow_call_regs(g, COW_IMG(0x10118e90u), eax, ecx, g->edx, 0, 1, eax);
    }
    goto L_10207b2b;
L_10207b13: ;
    wr32(sp0 - 0x20u, 0u);
    g->esp = sp0 - 0x1cu;
    t18 = cow_stdcall(g, COW_IMG(0x10207980u), 1, 0u);
    wr8(rd32(self + 8u) + 0x61u, 0u);
    eax = t18;
    goto L_10207b00;
L_10207b65: ;
    eax = eax + 0x2000u;
    goto L_10207b6a;
L_10207c91: ;
    wr32(sp0 - 0x20u, eax + 0x2000u);
    g->edx = edx;
    t45 = rd32(COW_IMG(0x10621808u));
    g->esp = sp0 - 0x1cu;
    t46 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t45, 1, eax + 0x2000u);
    t47 = g->ecx;
    t48 = g->edx;
    if (t46 == 0u)
    {
        ecx = t47;
        edx = t48;
        goto L_10207cd3;
    }
    eax = t46;
    ebp = rd32(rd32(eax + 0x14dcu));
    eax = rd32(sp0 - 0xcu);
    esi = 0u;
    cf = 0u;
    pf = PARITY(0u);
    zf = 1u;
    sf = 0u;
    of = 0u;
L_10207cb4: ;
    wr8(eax, (uint8_t)(rd8(eax) + (ebp >> (esi & 0x1fu) & 0xfu)));
    if ((int32_t)(eax + ebx + 1u) <= 7)
    {
        esi = esi + 4u;
        cf = eax + ebx + 1u < 7u;
        pf = PARITY((uint8_t)(eax + ebx - 6u));
        zf = eax + ebx == 6u;
        sf = (int32_t)(eax + ebx - 6u) < 0;
        of = ((eax + ebx + 1u ^ 7u) & (eax + ebx + 1u ^ eax + ebx - 6u)) >> 0x1fu;
        eax = eax + 1u;
        goto L_10207cb4;
    }
    ecx = eax + ebx + 1u;
    edx = (ebp >> (esi & 0x1fu) & 0xffffff00u) | (ebp >> (esi & 0x1fu) & 0xfu);
    goto L_10207ccf;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10207a40(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10207a40(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
