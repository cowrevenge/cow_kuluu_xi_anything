/* f_0x10119c00 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=1 */
uint32_t cow_fn_10119c00(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_10;
    uint32_t loc_28;
    uint32_t loc_3c;
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
    uint32_t t2;
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
    cow_frame(g, sp0, 68u);

    wr32(sp0 - 0x2cu, in_ebx);
    wr32(sp0 - 0x30u, in_ebp);
    wr32(sp0 - 0x34u, in_esi);
    wr32(sp0 - 0x38u, in_edi);
    if (rd32(self + 0xcu) == 0u)
    {
        eax = in_eax;
    }
    else
    {
        if ((int16_t)rd16(self + 0x28u) <= 0)
        {
            edx = in_edx;
        }
        else
        {
            eax = (in_eax & 0xffff0000u) | rd16(self + 0x28u);
            wr16(self + 0x28u, (uint16_t)(eax - 1u));
            if ((int16_t)(eax - 1u) > 0)
            {
                edx = in_edx;
            }
            else
            {
                eax = eax - 1u;
                if (rd8(self + 0x24u) == 0u)
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
                    wr32(sp0 - 0x3cu, 0u);
                    loc_3c = 0u;
                }
                else
                {
                    eax = (eax & 0xffffff00u) | rd8(self + 0x24u);
                    wr32(sp0 - 0x3cu, 3u);
                    loc_3c = 3u;
                }
                g->edx = in_edx;
                g->esp = sp0 - 0x38u;
                cow_stdcall(g, COW_IMG(0x10119970u), 1, loc_3c);
                t1 = g->edx;
                edx = t1;
            }
        }
        if ((int16_t)rd16(self + 0x28u) < 0)
        {
            if (rd32(COW_IMG(0x104e1d4cu)) != 0u)
            {
                eax = rd32(COW_IMG(0x104e1d4cu));
                t2 = rd32(eax + 4u);
                wr32(sp0 - 0x28u, t2);
                t3 = rd32(eax + 8u);
                wr32(sp0 - 0x24u, t3);
                edx = t3;
            }
            wr32(sp0 - 0x3cu, sp0 - 0x28u);
            g->edx = edx;
            g->esp = sp0 - 0x38u;
            t4 = cow_thiscall(g, COW_IMG(0x10119bc0u), self, 1, sp0 - 0x28u);
            t5 = g->edx;
            if ((uint8_t)t4 != 0u)
            {
                edx = t5;
            }
            else
            {
                eax = t4;
                edx = t5;
                wr32(sp0 - 0x3cu, 0u);
                wr16(self + 0x28u, 0u);
                g->edx = edx;
                g->esp = sp0 - 0x38u;
                cow_stdcall(g, COW_IMG(0x10119970u), 1, 0u);
                t6 = g->edx;
                edx = t6;
            }
        }
        if (rd32(self + 4u) == 0u) goto L_10119c84;
        if (rd32(self + 0x14u) == rd32(self + 0x10u)) goto L_10119d44;
L_10119c84: ;
        t7 = rd32(self + 0x10u);
        t8 = rd32(self + 0xcu);
        wr32(self + 0x14u, t7);
        if (rd8(rd32(t8) + 0x1bu) == 0u)
        {
            edx = (t7 & 0xffffff00u) | rd8(rd32(t8) + 0x1bu);
            goto L_10119d44;
        }
        eax = t8;
        ecx = rd32(t8);
        wr32(sp0 - 0x28u, 0u);
        ebx = 0u;
        ebp = in_ebp;
        loc_28 = 0u;
L_10119c9e: ;
        if (loc_28 + rd32(eax + 4u) == 0u) goto L_10119d26;
        esi = loc_28 + rd32(eax + 4u);
        if (rd16(esi) == 0u) goto L_10119cc4;
        ecx = (ecx & 0xffff0000u) | rd16(esi);
        t9 = rd32(self + 0x10u);
        wr32(sp0 - 0x3cu, t9);
        g->ecx = ecx;
        g->esp = sp0 - 0x38u;
        t10 = cow_cdecl(g, COW_IMG(0x10119870u), 1, t9);
        t11 = g->ecx;
        if ((uint32_t)(int16_t)t11 != t10) goto L_10119d26;
L_10119cc4: ;
        t12 = rd32(esi + 4u);
        wr32(sp0 - 0x20u, t12);
        t13 = rd32(esi + 8u);
        wr32(sp0 - 0x1cu, t13);
        t14 = rd32(esi + 0xcu);
        wr32(sp0 - 0x18u, t14);
        t15 = rd32(esi + 0x10u);
        wr32(sp0 - 0x14u, t15);
        if (rd32(esi + 0x18u) != 0u)
        {
            ebp = (ebp & 0xffff0000u) | rd16(esi + 2u);
            loc_10 = loc_10 & 0xffffff00u;
        }
        else
        {
            ebp = (ebp & 0xffff0000u) | rd16(esi + 2u);
            loc_10 = loc_10 & 0xffffff00u;
            wr32(sp0 - 0x3cu, sp0 - 0x20u);
            g->esp = sp0 - 0x38u;
            t16 = cow_thiscall(g, COW_IMG(0x10120450u), COW_IMG(0x104e1bf8u), 1, sp0 - 0x20u);
            wr32(esi + 0x18u, t16);
        }
        if (rd32(esi + 0x18u) == 0u)
        {
            eax = rd32(esi + 0x18u);
            goto L_10119d68;
        }
        eax = rd32(esi + 0x18u);
        t17 = rd32(rd32(eax) + (uint32_t)(int16_t)ebp * 4u);
        wr32(self + 4u, t17);
        if (rd16(esi) != 0u)
        {
            wr8(self + 0x48u, 1u);
        }
        else
        {
            wr8(self + 0x48u, 0u);
        }
L_10119d26: ;
        wr32(sp0 - 0x28u, loc_28 + 0x1cu);
        if ((int32_t)(ebx + 1u) < (int32_t)rd8(rd32(rd32(self + 0xcu)) + 0x1bu))
        {
            eax = rd32(self + 0xcu);
            ecx = rd32(rd32(self + 0xcu));
            ebx = ebx + 1u;
            loc_28 = loc_28 + 0x1cu;
            goto L_10119c9e;
        }
        edx = rd8(rd32(rd32(self + 0xcu)) + 0x1bu);
L_10119d44: ;
        if (rd32(self + 8u) == 0u)
        {
            eax = rd32(self + 8u);
        }
        else
        {
            eax = rd32(self + 8u);
            wr32(self + 4u, eax);
        }
        if ((uint8_t)arg1 == 0u)
        {
            eax = (eax & 0xffffff00u) | (uint8_t)arg1;
        }
        else
        {
            wr32(sp0 - 0x3cu, self + 0x20u);
            wr32(sp0 - 0x40u, self + 0x1cu);
            g->eax = self + 0x20u;
            g->esp = sp0 - 0x38u;
            t18 = cow_thiscall(g, COW_IMG(0x101601d0u), COW_IMG(0x10621838u), 2, self + 0x1cu, self + 0x20u);
            eax = t18;
        }
    }
L_10119d68: ;
    return eax;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_10119c00(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_10119c00(g);
    g->esp = sp0;
    rt_return(g, r, 4u);
}
/* COW_ADAPTER END */
