/* f_0x101e01b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=2 */
uint32_t cow_fn_101e01b0(Guest* g)
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
    uint32_t t18;
    uint32_t t19;
    uint32_t t2;
    uint32_t t20;
    uint32_t t21;
    uint32_t t3;
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
    cow_frame(g, sp0, 40u);

    wr32(sp0 - 0xcu, in_ebx);
    wr32(sp0 - 0x10u, in_ebp);
    wr32(sp0 - 0x14u, in_esi);
    wr32(sp0 - 0x18u, in_edi);
    wr32(sp0 - 8u, self);
    if (rd32(self + 0x18u) == 0u)
    {
        eax = in_eax;
        edx = in_edx;
    }
    else
    {
        ebp = rd32(self + 0x18u);
        if ((int32_t)rd32(self + 8u) <= 0)
        {
            eax = 0u;
            edx = in_edx;
        }
        else
        {
            esi = rd32(self + 8u);
            t1 = rd32(arg1 + 0x38u);
            eax = 0u;
            edx = t1;
            edi = t1;
L_101e01d6: ;
            if (edi == 0u) goto L_101e01eb;
            if ((int32_t)eax >= (int16_t)rd16(arg1 + 0x20u)) goto L_101e01eb;
            if (edx == 0u) goto L_101e01eb;
            ecx = rd32(edx + 0x48u);
L_101e01ed: ;
            if (ecx - 1u == ebp) goto L_101e01fc;
            if ((int32_t)(eax + 1u) < (int32_t)esi)
            {
                eax = eax + 1u;
                edx = edx + 0x54u;
                goto L_101e01d6;
            }
            eax = eax + 1u;
            edx = edx + 0x54u;
L_101e0211: ;
        }
    }
    if ((uint8_t)arg2 == 0u)
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
    }
    else
    {
        eax = (eax & 0xffffff00u) | (uint8_t)arg2;
        g->eax = eax;
        g->esp = sp0 - 0x18u;
        t3 = cow_thiscall(g, COW_IMG(0x101f7100u), arg1, 0);
        if (rd32(arg1 + 0x38u) == 0u)
        {
            edx = rd32(arg1 + 0x38u);
            goto L_101e0251;
        }
        eax = t3;
        edx = rd32(arg1 + 0x38u);
        if ((int32_t)eax >= (int16_t)rd16(arg1 + 0x20u)) goto L_101e0251;
        if (eax * 0x54u + edx == 0u) goto L_101e0251;
        eax = eax * 0x54u + edx;
        eax = rd32(eax + 0x48u);
L_101e0253: ;
        if ((int32_t)(eax - 1u) <= 0) goto L_101e02c8;
        esi = eax - 1u;
        if (rd32(COW_IMG(0x1066349cu)) == 0u) goto L_101e02c8;
        wr32(sp0 - 0x1cu, esi);
        g->eax = eax;
        g->esp = sp0 - 0x18u;
        t4 = cow_fastcall(g, COW_IMG(0x101c8020u), rd32(COW_IMG(0x106631e8u)), edx, 1, esi);
        t5 = g->edx;
        if (t4 == 0u)
        {
            edx = t5;
            goto L_101e02d3;
        }
        eax = t4;
        edx = t5;
        t6 = rd8(eax + 2u) - 1u;
        wr32(sp0 - 0x1cu, t6);
        g->eax = eax;
        g->edx = edx;
        g->esp = sp0 - 0x18u;
        t7 = cow_thiscall(g, COW_IMG(0x101df180u), rd32(COW_IMG(0x1066349cu)), 1, t6);
        t8 = g->edx;
        if (t7 == 0u)
        {
            eax = t7;
            edx = t8;
            goto L_101e02c8;
        }
        eax = t7;
        wr32(sp0 - 0x1cu, eax);
        wr16(rd32(COW_IMG(0x106636a0u)) + 0x2au, 0xcu);
        t9 = rd32(COW_IMG(0x106636a0u));
        wr32(t9 + 0x30u, COW_IMG(0x101dfc80u));
        wr32(t9 + 0x38u, esi + 0x200u);
        t10 = rd32(COW_IMG(0x106636a0u));
        wr32(t10 + 0x34u, COW_IMG(0x101dfd60u));
        wr32(t10 + 0x3cu, esi + 0x200u);
        g->edx = esi + 0x200u;
        g->esp = sp0 - 0x18u;
        cow_call_regs(g, COW_IMG(0x101ec330u), eax, rd32(COW_IMG(0x106636a0u)), g->edx, 0, 1, eax);
        t11 = g->edx;
        edx = t11;
L_101e02d3: ;
        if (rd32(rd32(COW_IMG(0x1066349cu)) + 8u) == 0u)
        {
            eax = rd32(COW_IMG(0x1066349cu));
        }
        else
        {
            eax = rd32(COW_IMG(0x1066349cu));
            g->edx = edx;
            g->esp = sp0 - 0x18u;
            t13 = cow_call_regs(g, COW_IMG(0x101262e0u), eax, rd32(COW_IMG(0x104e1d4cu)), g->edx, 1, 0);
            t14 = g->edx;
            if ((uint8_t)t13 == 0u)
            {
                eax = t13;
                edx = t14;
            }
            else
            {
                edx = t14;
                wr32(sp0 - 8u, 0u);
                wr32(sp0 - 4u, 0u);
                if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
                {
                    eax = rd32(COW_IMG(0x104e1d4cu));
                    t15 = rd32(eax + 4u);
                    wr32(sp0 - 8u, t15);
                    t16 = rd32(eax + 8u);
                    wr32(sp0 - 4u, t16);
                    edx = t16;
                }
                wr32(sp0 - 0x1cu, sp0 - 8u);
                g->eax = sp0 - 8u;
                g->edx = edx;
                g->esp = sp0 - 0x18u;
                t17 = cow_thiscall(g, COW_IMG(0x10118c10u), rd32(rd32(COW_IMG(0x1066349cu)) + 8u), 1, sp0 - 8u);
                t18 = g->edx;
                if ((uint8_t)t17 == 0u)
                {
                    eax = t17;
                    edx = t18;
                }
                else
                {
                    eax = t17;
                    wr32(sp0 - 0x1cu, 0u);
                    wr32(sp0 - 0x20u, 8u);
                    wr32(sp0 - 0x24u, arg1);
                    g->eax = eax;
                    g->edx = rd32(self);
                    t19 = rd32(self);
                    g->esp = sp0 - 0x18u;
                    t20 = cow_thiscall(g, rd32(t19 + 0x28u), self, 3, arg1, 8u, 0u);
                    t21 = g->edx;
                    eax = t20;
                    edx = t21;
                }
            }
        }
    }
    g->edx = edx;
    return eax;
L_101e01eb: ;
    ecx = 0u;
    goto L_101e01ed;
L_101e01fc: ;
    wr32(sp0 - 0x1cu, 0u);
    wr32(sp0 - 0x20u, eax);
    g->esp = sp0 - 0x18u;
    t2 = cow_call_regs(g, COW_IMG(0x101f7080u), eax, arg1, g->edx, 0, 2, eax, 0u);
    wr32(self + 0x18u, 0u);
    eax = t2;
    edx = self;
    goto L_101e0211;
L_101e0251: ;
    eax = 0u;
    goto L_101e0253;
L_101e02c8: ;
    g->edx = edx;
    g->esp = sp0 - 0x18u;
    cow_call_regs(g, COW_IMG(0x101ec3c0u), eax, rd32(COW_IMG(0x106636a0u)), g->edx, 1, 0);
    t12 = g->edx;
    edx = t12;
    goto L_101e02d3;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101e01b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101e01b0(g);
    g->esp = sp0;
    rt_return(g, r, 8u);
}
/* COW_ADAPTER END */
