/* f_0x101fe0b0 - RISE UNIT. COW_OWNER: conveyor   station: rise

   Lifted from the instructions by tools/cow/rise/rise.py and kept ONLY because the judge proved it.
   Names are the machine's (registers, stack offsets); naming and structs come later.
*/
#include "cow.h"
#include "cow_call.h"
#include "cow_rise.h"

/* COW_CONTRACT ret=void stack_args=0 */
uint32_t cow_fn_101fe0b0(Guest* g)
{
    uint32_t eax;
    uint32_t ebp;
    uint32_t ebx;
    uint32_t ecx;
    uint32_t edx;
    uint32_t esi;
    uint32_t loc_18;
    uint32_t loc_1c;
    uint32_t loc_20;
    uint32_t loc_24;
    uint32_t loc_28;
    uint32_t loc_4;
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
    const uint32_t in_eax = g->eax;
    const uint32_t self = g->ecx;
    const uint32_t in_edx = g->edx;
    const uint32_t in_ebx = g->ebx;

    if (rd8(self + 0x16u) == 0u)
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x16u);
        edx = in_edx;
        loc_4 = self;
    }
    else
    {
        eax = (in_eax & 0xffffff00u) | rd8(self + 0x16u);
        if (rd16(self + 0x30u) == 0u)
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0x30u);
            ecx = self;
            edx = in_edx;
        }
        else
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0x30u);
            t1 = (self & 0xffff0000u) | (uint16_t)(rd16(self + 0x26u) + 0x10u);
            t2 = (in_edx & 0xffff0000u) | (uint16_t)(rd16(self + 0x24u) + 8u);
            g->edx = t2;
            g->esp = sp0 - 8u;
            cow_thiscall(g, COW_IMG(0x1015bd70u), rd32(COW_IMG(0x10621808u)), 7, eax, t2, t1, 0x3f800000u, 0u, 0x80808080u, 0u);
            t3 = g->edx;
            t4 = rd16(self + 0x30u);
            g->eax = t4;
            g->edx = t3;
            t5 = rd32(COW_IMG(0x10621808u));
            t6 = cow_thiscall(g, COW_IMG(0x1015b9e0u), t5, 1, t4);
            t7 = g->ecx;
            t8 = g->edx;
            if (t6 == 0u)
            {
                eax = t6;
                ecx = t7;
                edx = t8;
            }
            else
            {
                eax = t6;
                t9 = rd32(eax + 0x14c8u);
                t10 = (uint32_t)(int16_t)rd16(self + 0x26u) + 0x18u;
                t11 = (uint32_t)(int16_t)rd16(self + 0x24u) + 0x2cu;
                g->eax = t11;
                g->ecx = t9;
                g->edx = t10;
                g->esp = sp0 - 8u;
                t12 = cow_cdecl(g, COW_IMG(0x10129f00u), 5, t11, t10, t9, 0u, 0x80509050u);
                t13 = g->ecx;
                t14 = g->edx;
                eax = t12;
                ecx = t13;
                edx = t14;
            }
        }
        wr16(self + 0x1cu, (uint16_t)(rd16(self + 0x1cu) + (uint16_t)(uint32_t)(int8_t)rd8(self + 0x1fu)));
        if ((int16_t)rd16(self + 0x1cu) <= 160)
        {
            eax = (eax & 0xffff0000u) | rd16(self + 0x1cu);
            if ((int16_t)eax < 96)
            {
                wr8(self + 0x1fu, 8u);
            }
        }
        else
        {
            wr8(self + 0x1fu, 0xf8u);
        }
        wr16(self + 0x1au, (uint16_t)(rd16(self + 0x1au) + 2u));
        t15 = rd16(self + 0x1au);
        wr8(self + 0x1du, 0u);
        if ((int16_t)t15 >= 128)
        {
            wr16(self + 0x1au, 0x30u);
        }
        wr8(self + 0x1bu, 0u);
        ebp = self + 0x66u;
        esi = 0xcu;
L_101fe179: ;
        if (rd32(ebp - 0xau) != 0xffffu)
        {
            t16 = (uint32_t)(int8_t)rd8(ebp - 1u);
            t17 = (uint32_t)(int8_t)rd8(ebp - 2u);
            t18 = rd32(ebp - 6u);
            g->edx = t18;
            g->esp = sp0 - 0x14u;
            cow_thiscall(g, COW_IMG(0x101fdcc0u), self, 5, t18, t17, t16, (uint32_t)(int8_t)rd8(ebp), 0u);
            t19 = g->edx;
            edx = t19;
        }
        if (esi != 1u)
        {
            ebp = ebp + 0x10u;
            esi = esi - 1u;
            goto L_101fe179;
        }
        t20 = rd16(self + 0x18u);
        g->eax = t20;
        g->edx = edx;
        g->esp = sp0 - 0x14u;
        t21 = cow_thiscall(g, COW_IMG(0x1015b9e0u), rd32(COW_IMG(0x10621808u)), 1, t20);
        t22 = g->edx;
        if (t21 == 0u)
        {
            eax = t21;
            edx = t22;
            loc_4 = self;
        }
        else
        {
            eax = t21;
            edx = t22;
            if (rd32(eax + 0x1530u) == 0u)
            {
                loc_4 = self;
            }
            else
            {
                ebx = rd32(eax + 0x1530u);
                ebp = 0u;
L_101fe1ca: ;
                t23 = cow_divs(g, ebp, 5u);
                t24 = cow_mods(g, ebp, 5u);
                t25 = (uint32_t)(int8_t)rd8(ebp + ebx);
                g->ebx = ebx;
                g->edx = t25;
                g->esp = sp0 - 0x14u;
                cow_thiscall(g, COW_IMG(0x101fdc20u), self, 3, t25, t24, t23);
                t26 = g->edx;
                if ((int32_t)(ebp + 1u) < 25)
                {
                    ebp = ebp + 1u;
                    goto L_101fe1ca;
                }
                edx = t26;
                esi = self + 0x66u;
                loc_4 = 0xcu;
L_101fe1f3: ;
                if (rd32(esi - 0xau) != 0xffffu)
                {
                    eax = 0x1000000u;
                    ecx = ebx;
                    ebp = rd32(esi - 0xeu);
L_101fe206: ;
                    if ((eax & ebp) == 0u) goto L_101fe216;
                    if (rd8(ecx) == (rd8(rd32(esi - 6u)) & 0xfu)) goto L_101fe272;
L_101fe216: ;
                    if (eax >> 1u != 0u)
                    {
                        eax = eax >> 1u;
                        ecx = ecx + 1u;
                        goto L_101fe206;
                    }
                    t30 = (uint32_t)(int8_t)rd8(esi - 1u);
                    t31 = (uint32_t)(int8_t)rd8(esi - 2u);
                    t32 = rd32(esi - 6u);
                    eax = t31;
                    edx = t30;
                    loc_18 = 3u;
                    loc_1c = (uint32_t)(int8_t)rd8(esi);
                    loc_20 = t30;
                    loc_24 = t31;
                    loc_28 = t32;
L_101fe231: ;
                    g->edx = edx;
                    g->esp = sp0 - 0x14u;
                    cow_thiscall(g, COW_IMG(0x101fdcc0u), self, 5, loc_28, loc_24, loc_20, loc_1c, loc_18);
                    t33 = g->edx;
                    edx = t33;
                }
                if (loc_4 != 1u)
                {
                    esi = esi + 0x10u;
                    loc_4 = loc_4 - 1u;
                    goto L_101fe1f3;
                }
                eax = loc_4 - 1u;
                loc_4 = loc_4 - 1u;
            }
        }
        if (rd16(self + 0x32u) != 0u)
        {
            t34 = (uint32_t)(int8_t)rd8(self + 0x1eu);
            t35 = (uint32_t)(int8_t)rd8(self + 0x36u);
            t36 = (uint32_t)(int8_t)rd8(self + 0x35u);
            t37 = (uint32_t)(int8_t)rd8(self + 0x34u);
            t38 = rd32(self + 0x38u);
            g->eax = t38;
            g->edx = t37;
            g->esp = sp0 - 8u;
            t39 = cow_thiscall(g, COW_IMG(0x101fdcc0u), self, 5, t38, t37, t36, t35, t34);
            t40 = g->edx;
            eax = t39;
            edx = t40;
        }
    }
    g->ebx = in_ebx;
    g->edx = edx;
    return eax;
L_101fe272: ;
    t27 = (uint32_t)(int8_t)rd8(esi - 1u);
    t28 = (uint32_t)(int8_t)rd8(esi - 2u);
    t29 = rd32(esi - 6u);
    eax = t29;
    edx = t28;
    loc_18 = 4u;
    loc_1c = (uint32_t)(int8_t)rd8(esi);
    loc_20 = t27;
    loc_24 = t28;
    loc_28 = t29;
    goto L_101fe231;
}

/* COW_ADAPTER BEGIN */
void cow_adapter_101fe0b0(Guest* g)
{
    const uint32_t sp0 = g->esp;
    const uint32_t r = cow_fn_101fe0b0(g);
    g->esp = sp0;
    rt_return(g, r, 0u);
}
/* COW_ADAPTER END */
